
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_7__ {int * ports; } ;
struct uld_ctx {TYPE_2__ lldi; } ;
struct sk_buff {int dev; } ;
struct TYPE_9__ {int result_size; } ;
struct hash_wr_param {int opad_needed; scalar_t__ sg_len; int kctx_len; scalar_t__ bfr_len; int last; int more; scalar_t__ scmd1; int hash_size; TYPE_4__ alg_prm; } ;
struct crypto_ahash {int dummy; } ;
struct chcr_dev {int dummy; } ;
struct TYPE_6__ {int isfinal; int result; int srcsg; } ;
struct chcr_ahash_req_ctx {scalar_t__ reqlen; scalar_t__ data_len; int reqbfr; TYPE_1__ hctx_wr; } ;
struct ahash_request {int src; } ;
struct TYPE_8__ {int tx_qidx; struct chcr_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct uld_ctx* FUNC_2 (TYPE_3__*) ;
 struct chcr_ahash_req_ctx* FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (struct chcr_dev*) ;
 int FUNC_5 (struct chcr_dev*) ;
 int FUNC_6 (struct chcr_ahash_req_ctx*) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (struct ahash_request*,struct hash_wr_param*) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_11 (struct ahash_request*) ;
 int FUNC_12 (struct crypto_ahash*) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (TYPE_4__*,int ) ;
 TYPE_3__* FUNC_15 (struct crypto_ahash*) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_19(struct ahash_request *VAR_4)
{
 struct chcr_ahash_req_ctx *VAR_5 = FUNC_3(VAR_4);
 struct crypto_ahash *VAR_6 = FUNC_11(VAR_4);
 struct chcr_dev *VAR_7 = FUNC_15(VAR_6)->dev;
 struct hash_wr_param VAR_8;
 struct sk_buff *VAR_9;
 struct uld_ctx *VAR_10 = ((void*)0);
 u8 VAR_11 = FUNC_13(FUNC_12(VAR_6));
 int VAR_12 = -VAR_2;

 VAR_12 = FUNC_5(VAR_7);
 if (VAR_12)
  return -VAR_3;

 FUNC_6(VAR_5);
 VAR_10 = FUNC_2(FUNC_15(VAR_6));
 if (FUNC_16(FUNC_12(VAR_6)))
  VAR_8.opad_needed = 1;
 else
  VAR_8.opad_needed = 0;
 VAR_8.sg_len = 0;
 VAR_5->hctx_wr.isfinal = 1;
 FUNC_14(&VAR_8.alg_prm, FUNC_10(VAR_6));
 VAR_8.kctx_len = FUNC_17(VAR_8.alg_prm.result_size, 16);
 if (FUNC_16(FUNC_12(VAR_6))) {
  VAR_8.opad_needed = 1;
  VAR_8.kctx_len *= 2;
 } else {
  VAR_8.opad_needed = 0;
 }

 VAR_5->hctx_wr.result = 1;
 VAR_8.bfr_len = VAR_5->reqlen;
 VAR_5->data_len += VAR_8.bfr_len + VAR_8.sg_len;
 VAR_5->hctx_wr.srcsg = VAR_4->src;
 if (VAR_5->reqlen == 0) {
  FUNC_9(VAR_5->reqbfr, VAR_11, VAR_5->data_len);
  VAR_8.last = 0;
  VAR_8.more = 1;
  VAR_8.scmd1 = 0;
  VAR_8.bfr_len = VAR_11;

 } else {
  VAR_8.scmd1 = VAR_5->data_len;
  VAR_8.last = 1;
  VAR_8.more = 0;
 }
 VAR_8.hash_size = FUNC_10(VAR_6);
 VAR_9 = FUNC_8(VAR_4, &VAR_8);
 if (FUNC_0(VAR_9)) {
  VAR_12 = FUNC_1(VAR_9);
  goto err;
 }
 VAR_5->reqlen = 0;
 VAR_9->dev = VAR_10->lldi.ports[0];
 FUNC_18(VAR_9, VAR_0, FUNC_15(VAR_6)->tx_qidx);
 FUNC_7(VAR_9);
 return -VAR_1;
err:
 FUNC_4(VAR_7);
 return VAR_12;
}
