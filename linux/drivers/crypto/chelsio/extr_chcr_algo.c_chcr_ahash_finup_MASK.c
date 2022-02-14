
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


typedef scalar_t__ u8 ;
struct TYPE_11__ {TYPE_3__* pdev; int * ports; } ;
struct uld_ctx {TYPE_4__ lldi; } ;
struct sk_buff {int dev; } ;
struct TYPE_13__ {int result_size; } ;
struct hash_wr_param {int kctx_len; int opad_needed; scalar_t__ sg_len; int last; int more; scalar_t__ scmd1; scalar_t__ bfr_len; int hash_size; TYPE_6__ alg_prm; } ;
struct crypto_ahash {int dummy; } ;
struct chcr_dev {int dummy; } ;
struct TYPE_9__ {int result; int processed; int srcsg; } ;
struct chcr_ahash_req_ctx {scalar_t__ reqlen; scalar_t__ data_len; TYPE_2__ hctx_wr; int reqbfr; } ;
struct TYPE_8__ {int flags; } ;
struct ahash_request {scalar_t__ nbytes; int src; TYPE_1__ base; } ;
struct TYPE_12__ {int tx_qidx; struct chcr_dev* dev; } ;
struct TYPE_10__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct uld_ctx* FUNC_3 (TYPE_5__*) ;
 struct chcr_ahash_req_ctx* FUNC_4 (struct ahash_request*) ;
 int FUNC_5 (struct chcr_dev*) ;
 int FUNC_6 (int *,struct ahash_request*) ;
 int FUNC_7 (int *,struct ahash_request*) ;
 scalar_t__ FUNC_8 (int ,int,int ,int ) ;
 int FUNC_9 (struct chcr_dev*) ;
 int FUNC_10 (struct chcr_ahash_req_ctx*) ;
 int FUNC_11 (struct sk_buff*) ;
 struct sk_buff* FUNC_12 (struct ahash_request*,struct hash_wr_param*) ;
 int FUNC_13 (int ,scalar_t__,scalar_t__) ;
 int FUNC_14 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_15 (struct ahash_request*) ;
 int FUNC_16 (struct crypto_ahash*) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (TYPE_6__*,int ) ;
 TYPE_5__* FUNC_20 (struct crypto_ahash*) ;
 scalar_t__ FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (scalar_t__,scalar_t__) ;
 int FUNC_23 (int ,int) ;
 int FUNC_24 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_25 (int ) ;

__attribute__((used)) static int FUNC_26(struct ahash_request *VAR_7)
{
 struct chcr_ahash_req_ctx *VAR_8 = FUNC_4(VAR_7);
 struct crypto_ahash *VAR_9 = FUNC_15(VAR_7);
 struct chcr_dev *VAR_10 = FUNC_20(VAR_9)->dev;
 struct uld_ctx *VAR_11 = ((void*)0);
 struct sk_buff *VAR_12;
 struct hash_wr_param VAR_13;
 u8 VAR_14;
 int VAR_15, VAR_16 = 0;

 VAR_14 = FUNC_17(FUNC_16(VAR_9));
 VAR_11 = FUNC_3(FUNC_20(VAR_9));
 VAR_15 = FUNC_9(VAR_10);
 if (VAR_15)
  return -VAR_6;

 if (FUNC_25(FUNC_18(VAR_11->lldi.ports[0],
         FUNC_20(VAR_9)->tx_qidx))) {
  VAR_16 = 1;
  if (!(VAR_7->base.flags & VAR_1)) {
   VAR_15 = -VAR_5;
   goto err;
  }
 }
 FUNC_10(VAR_8);
 VAR_15 = FUNC_6(&VAR_11->lldi.pdev->dev, VAR_7);
 if (VAR_15) {
  VAR_15 = -VAR_4;
  goto err;
 }

 FUNC_19(&VAR_13.alg_prm, FUNC_14(VAR_9));
 VAR_13.kctx_len = FUNC_23(VAR_13.alg_prm.result_size, 16);
 if (FUNC_21(FUNC_16(VAR_9))) {
  VAR_13.kctx_len *= 2;
  VAR_13.opad_needed = 1;
 } else {
  VAR_13.opad_needed = 0;
 }

 VAR_13.sg_len = FUNC_8(VAR_7->src, !!VAR_8->reqlen,
        FUNC_0(VAR_13.kctx_len), 0);
 if (VAR_13.sg_len < VAR_7->nbytes) {
  if (FUNC_21(FUNC_16(VAR_9))) {
   VAR_13.kctx_len /= 2;
   VAR_13.opad_needed = 0;
  }
  VAR_13.last = 0;
  VAR_13.more = 1;
  VAR_13.sg_len = FUNC_22(VAR_13.sg_len + VAR_8->reqlen, VAR_14)
     - VAR_8->reqlen;
  VAR_13.hash_size = VAR_13.alg_prm.result_size;
  VAR_13.scmd1 = 0;
 } else {
  VAR_13.last = 1;
  VAR_13.more = 0;
  VAR_13.sg_len = VAR_7->nbytes;
  VAR_13.hash_size = FUNC_14(VAR_9);
  VAR_13.scmd1 = VAR_8->data_len + VAR_8->reqlen +
    VAR_13.sg_len;
 }
 VAR_13.bfr_len = VAR_8->reqlen;
 VAR_8->data_len += VAR_13.bfr_len + VAR_13.sg_len;
 VAR_8->hctx_wr.result = 1;
 VAR_8->hctx_wr.srcsg = VAR_7->src;
 if ((VAR_8->reqlen + VAR_7->nbytes) == 0) {
  FUNC_13(VAR_8->reqbfr, VAR_14, VAR_8->data_len);
  VAR_13.last = 0;
  VAR_13.more = 1;
  VAR_13.scmd1 = 0;
  VAR_13.bfr_len = VAR_14;
 }
 VAR_12 = FUNC_12(VAR_7, &VAR_13);
 if (FUNC_1(VAR_12)) {
  VAR_15 = FUNC_2(VAR_12);
  goto unmap;
 }
 VAR_8->reqlen = 0;
 VAR_8->hctx_wr.processed += VAR_13.sg_len;
 VAR_12->dev = VAR_11->lldi.ports[0];
 FUNC_24(VAR_12, VAR_0, FUNC_20(VAR_9)->tx_qidx);
 FUNC_11(VAR_12);

 return VAR_16 ? -VAR_2 : -VAR_3;
unmap:
 FUNC_7(&VAR_11->lldi.pdev->dev, VAR_7);
err:
 FUNC_5(VAR_10);
 return VAR_15;
}
