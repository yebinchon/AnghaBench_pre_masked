
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;
struct cpl_rx_phys_dsgl {int dummy; } ;
struct cipher_wr_param {unsigned short qid; int bytes; struct ablkcipher_request* req; } ;
struct chcr_wr {int dummy; } ;
struct chcr_blkcipher_req_ctx {int processed; int imm; unsigned int iv; unsigned short op; int last_req_len; scalar_t__ dst_ofst; scalar_t__ src_ofst; int dstsg; int srcsg; } ;
struct TYPE_5__ {int flags; } ;
struct ablkcipher_request {int nbytes; int dst; int src; TYPE_1__ base; int info; } ;
struct ablk_ctx {scalar_t__ enckey_len; int sw_cipher; int nonce; } ;
typedef int __be32 ;
struct TYPE_7__ {TYPE_2__* pdev; } ;
struct TYPE_8__ {TYPE_3__ lldi; } ;
struct TYPE_6__ {int dev; } ;


 struct ablk_ctx* FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 unsigned int VAR_8 ;
 int FUNC_4 (struct sk_buff*) ;
 unsigned int VAR_9 ;
 TYPE_4__* FUNC_5 (int ) ;
 struct chcr_blkcipher_req_ctx* FUNC_6 (struct ablkcipher_request*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct crypto_ablkcipher*) ;
 int FUNC_9 (int *,struct ablkcipher_request*) ;
 int FUNC_10 (int *,struct ablkcipher_request*) ;
 int FUNC_11 (int ,int ,int ,int ,int,unsigned int,unsigned short) ;
 int FUNC_12 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_13 (int) ;
 struct sk_buff* FUNC_14 (struct cipher_wr_param*) ;
 int FUNC_15 (struct crypto_ablkcipher*) ;
 unsigned int FUNC_16 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_17 (struct ablkcipher_request*) ;
 int FUNC_18 (struct crypto_ablkcipher*) ;
 scalar_t__ FUNC_19 (int ) ;
 unsigned int FUNC_20 (unsigned int) ;
 int FUNC_21 (unsigned int,int ,unsigned int) ;
 int FUNC_22 (char*,scalar_t__,int,unsigned int) ;
 int FUNC_23 (int,int) ;
 unsigned int FUNC_24 (scalar_t__,int) ;
 unsigned int FUNC_25 (int ,unsigned int,int ,int ) ;
 scalar_t__ FUNC_26 (int) ;

__attribute__((used)) static int FUNC_27(struct ablkcipher_request *VAR_10,
      unsigned short VAR_11,
      struct sk_buff **VAR_12,
      unsigned short VAR_13)
{
 struct crypto_ablkcipher *VAR_14 = FUNC_17(VAR_10);
 unsigned int VAR_15 = FUNC_16(VAR_14);
 struct chcr_blkcipher_req_ctx *VAR_16 = FUNC_6(VAR_10);
 struct ablk_ctx *VAR_17 = FUNC_0(FUNC_8(VAR_14));
 struct cipher_wr_param VAR_18;
 int VAR_19, VAR_20 = -VAR_7;

 VAR_16->processed = 0;
 if (!VAR_10->info)
  goto error;
 if ((VAR_17->enckey_len == 0) || (VAR_15 > VAR_0) ||
     (VAR_10->nbytes == 0) ||
     (VAR_10->nbytes % FUNC_15(VAR_14))) {
  FUNC_22("AES: Invalid value of Key Len %d nbytes %d IV Len %d\n",
         VAR_17->enckey_len, VAR_10->nbytes, VAR_15);
  goto error;
 }

 VAR_20 = FUNC_9(&FUNC_5(FUNC_8(VAR_14))->lldi.pdev->dev, VAR_10);
 if (VAR_20)
  goto error;
 if (VAR_10->nbytes < (VAR_9 - (sizeof(struct chcr_wr) +
         VAR_1 +
         sizeof(struct cpl_rx_phys_dsgl) +

         32))) {

  unsigned int VAR_21 = 0, VAR_22, VAR_23, VAR_24;

  VAR_21 = FUNC_25(VAR_10->dst, VAR_10->nbytes,
           VAR_2, 0);
  VAR_23 = FUNC_20(VAR_21);
  VAR_24 = FUNC_24(VAR_17->enckey_len, 16);
  VAR_22 = FUNC_1(VAR_24, VAR_23);
  VAR_16->imm = (VAR_22 + VAR_8 + VAR_10->nbytes) <=
   VAR_9;
  VAR_19 = VAR_8 + VAR_10->nbytes;

 } else {
  VAR_16->imm = 0;
 }

 if (!VAR_16->imm) {
  VAR_19 = FUNC_12(VAR_10->src, VAR_10->dst, 0,
       FUNC_2(VAR_17->enckey_len),
       0, 0);
  if ((VAR_19 + VAR_16->processed) >= VAR_10->nbytes)
   VAR_19 = VAR_10->nbytes - VAR_16->processed;
  else
   VAR_19 = FUNC_23(VAR_19, 16);
 } else {
  VAR_19 = VAR_10->nbytes;
 }
 if (FUNC_19(FUNC_18(VAR_14)) ==
     VAR_3) {
  VAR_19 = FUNC_7(VAR_10->info, VAR_19);
 }
 if (FUNC_19(FUNC_18(VAR_14)) ==
     VAR_4) {
  FUNC_21(VAR_16->iv, VAR_17->nonce, VAR_6);
  FUNC_21(VAR_16->iv + VAR_6, VAR_10->info,
    VAR_5);


  *(__be32 *)(VAR_16->iv + VAR_6 +
   VAR_5) = FUNC_13(1);

 } else {

  FUNC_21(VAR_16->iv, VAR_10->info, VAR_8);
 }
 if (FUNC_26(VAR_19 == 0)) {
  FUNC_10(&FUNC_5(FUNC_8(VAR_14))->lldi.pdev->dev,
          VAR_10);
  VAR_20 = FUNC_11(VAR_17->sw_cipher,
        VAR_10->base.flags,
        VAR_10->src,
        VAR_10->dst,
        VAR_10->nbytes,
        VAR_16->iv,
        VAR_13);
  goto error;
 }
 VAR_16->op = VAR_13;
 VAR_16->srcsg = VAR_10->src;
 VAR_16->dstsg = VAR_10->dst;
 VAR_16->src_ofst = 0;
 VAR_16->dst_ofst = 0;
 VAR_18.qid = VAR_11;
 VAR_18.req = VAR_10;
 VAR_18.bytes = VAR_19;
 *VAR_12 = FUNC_14(&VAR_18);
 if (FUNC_3(*VAR_12)) {
  VAR_20 = FUNC_4(*VAR_12);
  goto unmap;
 }
 VAR_16->processed = VAR_19;
 VAR_16->last_req_len = VAR_19;

 return 0;
unmap:
 FUNC_10(&FUNC_5(FUNC_8(VAR_14))->lldi.pdev->dev, VAR_10);
error:
 return VAR_20;
}
