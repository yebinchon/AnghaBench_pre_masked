
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef unsigned int u8 ;
struct TYPE_11__ {TYPE_3__* pdev; int * ports; } ;
struct uld_ctx {TYPE_4__ lldi; } ;
struct sk_buff {int dev; } ;
struct TYPE_13__ {int result_size; } ;
struct hash_wr_param {unsigned int sg_len; int more; unsigned int bfr_len; TYPE_6__ alg_prm; int hash_size; scalar_t__ scmd1; scalar_t__ last; scalar_t__ opad_needed; int kctx_len; } ;
struct crypto_ahash {int dummy; } ;
struct chcr_dev {int dummy; } ;
struct TYPE_9__ {unsigned int processed; int srcsg; } ;
struct chcr_ahash_req_ctx {unsigned int reqlen; unsigned int data_len; scalar_t__ reqbfr; int skbfr; TYPE_2__ hctx_wr; } ;
struct TYPE_8__ {int flags; } ;
struct ahash_request {unsigned int nbytes; int src; TYPE_1__ base; } ;
struct TYPE_12__ {int tx_qidx; struct chcr_dev* dev; } ;
struct TYPE_10__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct uld_ctx* FUNC_3 (TYPE_5__*) ;
 struct chcr_ahash_req_ctx* FUNC_4 (struct ahash_request*) ;
 int FUNC_5 (struct chcr_dev*) ;
 int FUNC_6 (int *,struct ahash_request*) ;
 int FUNC_7 (int *,struct ahash_request*) ;
 unsigned int FUNC_8 (int ,int,int ,int ) ;
 int FUNC_9 (struct chcr_dev*) ;
 int FUNC_10 (struct chcr_ahash_req_ctx*) ;
 int FUNC_11 (struct sk_buff*) ;
 struct sk_buff* FUNC_12 (struct ahash_request*,struct hash_wr_param*) ;
 int FUNC_13 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_14 (struct ahash_request*) ;
 int FUNC_15 (struct crypto_ahash*) ;
 unsigned int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (TYPE_6__*,int ) ;
 TYPE_5__* FUNC_19 (struct crypto_ahash*) ;
 unsigned int FUNC_20 (unsigned int,unsigned int) ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (struct sk_buff*,int ,int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,int ,scalar_t__,unsigned int,unsigned int) ;
 int FUNC_25 (scalar_t__,int ) ;
 scalar_t__ FUNC_26 (int ) ;

__attribute__((used)) static int FUNC_27(struct ahash_request *VAR_7)
{
 struct chcr_ahash_req_ctx *VAR_8 = FUNC_4(VAR_7);
 struct crypto_ahash *VAR_9 = FUNC_14(VAR_7);
 struct uld_ctx *VAR_10 = ((void*)0);
 struct chcr_dev *VAR_11 = FUNC_19(VAR_9)->dev;
 struct sk_buff *VAR_12;
 u8 VAR_13 = 0, VAR_14;
 unsigned int VAR_15 = VAR_7->nbytes;
 struct hash_wr_param VAR_16;
 int VAR_17, VAR_18 = 0;

 VAR_14 = FUNC_16(FUNC_15(VAR_9));
 VAR_10 = FUNC_3(FUNC_19(VAR_9));

 if (VAR_15 + VAR_8->reqlen >= VAR_14) {
  VAR_13 = (VAR_15 + VAR_8->reqlen) % VAR_14;
  VAR_15 = VAR_15 + VAR_8->reqlen - VAR_13;
 } else {
  FUNC_24(VAR_7->src, FUNC_23(VAR_7->src), VAR_8->reqbfr
       + VAR_8->reqlen, VAR_15, 0);
  VAR_8->reqlen += VAR_15;
  return 0;
 }
 VAR_17 = FUNC_9(VAR_11);
 if (VAR_17)
  return -VAR_6;



 if (FUNC_26(FUNC_17(VAR_10->lldi.ports[0],
         FUNC_19(VAR_9)->tx_qidx))) {
  VAR_18 = 1;
  if (!(VAR_7->base.flags & VAR_1)) {
   VAR_17 = -VAR_5;
   goto err;
  }
 }

 FUNC_10(VAR_8);
 VAR_17 = FUNC_6(&VAR_10->lldi.pdev->dev, VAR_7);
 if (VAR_17) {
  VAR_17 = -VAR_4;
  goto err;
 }
 FUNC_18(&VAR_16.alg_prm, FUNC_13(VAR_9));
 VAR_16.kctx_len = FUNC_21(VAR_16.alg_prm.result_size, 16);
 VAR_16.sg_len = FUNC_8(VAR_7->src, !!VAR_8->reqlen,
         FUNC_0(VAR_16.kctx_len), 0);
 if (VAR_16.sg_len > VAR_7->nbytes)
  VAR_16.sg_len = VAR_7->nbytes;
 VAR_16.sg_len = FUNC_20(VAR_16.sg_len + VAR_8->reqlen, VAR_14) -
   VAR_8->reqlen;
 VAR_16.opad_needed = 0;
 VAR_16.more = 1;
 VAR_16.last = 0;
 VAR_16.bfr_len = VAR_8->reqlen;
 VAR_16.scmd1 = 0;
 VAR_8->hctx_wr.srcsg = VAR_7->src;

 VAR_16.hash_size = VAR_16.alg_prm.result_size;
 VAR_8->data_len += VAR_16.sg_len + VAR_16.bfr_len;
 VAR_12 = FUNC_12(VAR_7, &VAR_16);
 if (FUNC_1(VAR_12)) {
  VAR_17 = FUNC_2(VAR_12);
  goto unmap;
 }

 VAR_8->hctx_wr.processed += VAR_16.sg_len;
 if (VAR_13) {

  FUNC_25(VAR_8->reqbfr, VAR_8->skbfr);
  FUNC_24(VAR_7->src, FUNC_23(VAR_7->src),
       VAR_8->reqbfr, VAR_13, VAR_7->nbytes -
       VAR_13);
 }
 VAR_8->reqlen = VAR_13;
 VAR_12->dev = VAR_10->lldi.ports[0];
 FUNC_22(VAR_12, VAR_0, FUNC_19(VAR_9)->tx_qidx);
 FUNC_11(VAR_12);

 return VAR_18 ? -VAR_2 : -VAR_3;
unmap:
 FUNC_7(&VAR_10->lldi.pdev->dev, VAR_7);
err:
 FUNC_5(VAR_11);
 return VAR_17;
}
