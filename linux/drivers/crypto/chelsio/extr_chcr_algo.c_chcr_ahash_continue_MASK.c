
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int * ports; } ;
struct uld_ctx {TYPE_1__ lldi; } ;
struct sk_buff {int dev; } ;
struct TYPE_7__ {int result_size; } ;
struct hash_wr_param {int kctx_len; int opad_needed; scalar_t__ sg_len; int last; int more; scalar_t__ scmd1; scalar_t__ bfr_len; int hash_size; TYPE_3__ alg_prm; } ;
struct crypto_ahash {int dummy; } ;
struct chcr_hctx_per_wr {scalar_t__ processed; int result; int src_ofst; int srcsg; } ;
struct chcr_ahash_req_ctx {scalar_t__ data_len; struct chcr_hctx_per_wr hctx_wr; } ;
struct ahash_request {scalar_t__ nbytes; } ;
struct TYPE_6__ {int tx_qidx; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct uld_ctx* FUNC_3 (TYPE_2__*) ;
 struct chcr_ahash_req_ctx* FUNC_4 (struct ahash_request*) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct ahash_request*,struct hash_wr_param*) ;
 int FUNC_8 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_9 (struct ahash_request*) ;
 int FUNC_10 (struct crypto_ahash*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_3__*,int ) ;
 TYPE_2__* FUNC_13 (struct crypto_ahash*) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (scalar_t__,int ) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_18(struct ahash_request *VAR_1)
{
 struct chcr_ahash_req_ctx *VAR_2 = FUNC_4(VAR_1);
 struct chcr_hctx_per_wr *VAR_3 = &VAR_2->hctx_wr;
 struct crypto_ahash *VAR_4 = FUNC_9(VAR_1);
 struct uld_ctx *VAR_5 = ((void*)0);
 struct sk_buff *VAR_6;
 struct hash_wr_param VAR_7;
 u8 VAR_8;
 int VAR_9;

 VAR_8 = FUNC_11(FUNC_10(VAR_4));
 VAR_5 = FUNC_3(FUNC_13(VAR_4));
 FUNC_12(&VAR_7.alg_prm, FUNC_8(VAR_4));
 VAR_7.kctx_len = FUNC_16(VAR_7.alg_prm.result_size, 16);
 if (FUNC_14(FUNC_10(VAR_4))) {
  VAR_7.kctx_len *= 2;
  VAR_7.opad_needed = 1;
 } else {
  VAR_7.opad_needed = 0;
 }
 VAR_7.sg_len = FUNC_5(VAR_3->srcsg, 0,
         FUNC_0(VAR_7.kctx_len),
         VAR_3->src_ofst);
 if ((VAR_7.sg_len + VAR_3->processed) > VAR_1->nbytes)
  VAR_7.sg_len = VAR_1->nbytes - VAR_3->processed;
 if (!VAR_3->result ||
     ((VAR_7.sg_len + VAR_3->processed) < VAR_1->nbytes)) {
  if (FUNC_14(FUNC_10(VAR_4))) {
   VAR_7.kctx_len /= 2;
   VAR_7.opad_needed = 0;
  }
  VAR_7.last = 0;
  VAR_7.more = 1;
  VAR_7.sg_len = FUNC_15(VAR_7.sg_len, VAR_8);
  VAR_7.hash_size = VAR_7.alg_prm.result_size;
  VAR_7.scmd1 = 0;
 } else {
  VAR_7.last = 1;
  VAR_7.more = 0;
  VAR_7.hash_size = FUNC_8(VAR_4);
  VAR_7.scmd1 = VAR_2->data_len + VAR_7.sg_len;
 }
 VAR_7.bfr_len = 0;
 VAR_2->data_len += VAR_7.sg_len;
 VAR_6 = FUNC_7(VAR_1, &VAR_7);
 if (FUNC_1(VAR_6)) {
  VAR_9 = FUNC_2(VAR_6);
  goto err;
 }
 VAR_3->processed += VAR_7.sg_len;
 VAR_6->dev = VAR_5->lldi.ports[0];
 FUNC_17(VAR_6, VAR_0, FUNC_13(VAR_4)->tx_qidx);
 FUNC_6(VAR_6);
 return 0;
err:
 return VAR_9;
}
