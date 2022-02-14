
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct cc_hw_desc {int dummy; } ;
struct TYPE_2__ {int keylen; } ;
struct cc_hash_ctx {scalar_t__ hw_mode; int drvdata; TYPE_1__ key_params; } ;
struct cc_crypto_req {void* user_arg; void* user_cb; } ;
struct ahash_request {int result; int src; int base; int nbytes; } ;
struct ahash_req_ctx {int digest_result_dma_addr; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct ahash_req_ctx* FUNC_0 (struct ahash_request*) ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,struct ahash_req_ctx*,struct cc_hash_ctx*) ;
 scalar_t__ FUNC_3 (int ,struct ahash_req_ctx*,int ,int ,int,int ) ;
 scalar_t__ FUNC_4 (struct device*,struct ahash_req_ctx*,struct cc_hash_ctx*) ;
 scalar_t__ FUNC_5 (struct device*,struct ahash_req_ctx*,int ) ;
 int FUNC_6 (int ,struct cc_crypto_req*,struct cc_hw_desc*,unsigned int,int *) ;
 int FUNC_7 (struct ahash_req_ctx*,struct cc_hash_ctx*,int ,struct cc_hw_desc*,int,unsigned int*) ;
 int FUNC_8 (struct ahash_request*,struct cc_hw_desc*,unsigned int*) ;
 int FUNC_9 (struct ahash_request*,struct cc_hw_desc*,unsigned int*) ;
 int FUNC_10 (struct device*,struct ahash_req_ctx*,int ,int) ;
 int FUNC_11 (struct device*,struct ahash_req_ctx*,struct cc_hash_ctx*) ;
 int FUNC_12 (struct device*,struct ahash_req_ctx*,int ,int ) ;
 struct cc_hash_ctx* FUNC_13 (struct crypto_ahash*) ;
 int FUNC_14 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_15 (struct ahash_request*) ;
 int FUNC_16 (struct device*,char*,int ) ;
 int FUNC_17 (struct device*,char*,...) ;
 struct device* FUNC_18 (int ) ;
 int FUNC_19 (struct cc_hw_desc*) ;
 int FUNC_20 (struct cc_hw_desc*,int ) ;
 int FUNC_21 (struct cc_hw_desc*,scalar_t__) ;
 int FUNC_22 (struct cc_hw_desc*) ;
 int FUNC_23 (struct cc_hw_desc*,int ,int ,int ,int) ;
 int FUNC_24 (struct cc_hw_desc*,int ) ;
 int FUNC_25 (struct cc_hw_desc*,int ) ;
 int FUNC_26 (int ,struct cc_hw_desc*) ;
 int FUNC_27 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static int FUNC_28(struct ahash_request *VAR_14)
{
 struct ahash_req_ctx *VAR_15 = FUNC_0(VAR_14);
 struct crypto_ahash *VAR_16 = FUNC_15(VAR_14);
 struct cc_hash_ctx *VAR_17 = FUNC_13(VAR_16);
 struct device *VAR_18 = FUNC_18(VAR_17->drvdata);
 u32 VAR_19 = FUNC_14(VAR_16);
 struct cc_crypto_req VAR_20 = {};
 struct cc_hw_desc VAR_21[VAR_2];
 u32 VAR_22;
 unsigned int VAR_23 = 0;
 int VAR_24;
 gfp_t VAR_25 = FUNC_1(&VAR_14->base);

 FUNC_16(VAR_18, "===== -digest mac (%d) ====\n", VAR_14->nbytes);

 FUNC_2(VAR_18, VAR_15, VAR_17);

 if (FUNC_4(VAR_18, VAR_15, VAR_17)) {
  FUNC_17(VAR_18, "map_ahash_source() failed\n");
  return -VAR_8;
 }
 if (FUNC_5(VAR_18, VAR_15, VAR_19)) {
  FUNC_17(VAR_18, "map_ahash_digest() failed\n");
  FUNC_11(VAR_18, VAR_15, VAR_17);
  return -VAR_8;
 }

 if (FUNC_3(VAR_17->drvdata, VAR_15, VAR_14->src,
          VAR_14->nbytes, 1, VAR_25)) {
  FUNC_17(VAR_18, "map_ahash_request_final() failed\n");
  FUNC_11(VAR_18, VAR_15, VAR_17);
  return -VAR_8;
 }


 VAR_20.user_cb = (void *)VAR_13;
 VAR_20.user_arg = (void *)VAR_14;

 if (VAR_17->hw_mode == VAR_5) {
  VAR_22 = VAR_0;
  FUNC_9(VAR_14, VAR_21, &VAR_23);
 } else {
  VAR_22 = VAR_17->key_params.keylen;
  FUNC_8(VAR_14, VAR_21, &VAR_23);
 }

 if (VAR_14->nbytes == 0) {
  FUNC_19(&VAR_21[VAR_23]);
  FUNC_21(&VAR_21[VAR_23], VAR_17->hw_mode);
  FUNC_25(&VAR_21[VAR_23], VAR_22);
  FUNC_22(&VAR_21[VAR_23]);
  FUNC_24(&VAR_21[VAR_23], VAR_12);
  VAR_23++;
 } else {
  FUNC_7(VAR_15, VAR_17, VAR_4, VAR_21, 0, &VAR_23);
 }


 FUNC_19(&VAR_21[VAR_23]);
 FUNC_23(&VAR_21[VAR_23], VAR_15->digest_result_dma_addr,
        VAR_1, VAR_9, 1);
 FUNC_26(VAR_17->drvdata, &VAR_21[VAR_23]);
 FUNC_24(&VAR_21[VAR_23], VAR_11);
 FUNC_27(&VAR_21[VAR_23], VAR_10);
 FUNC_20(&VAR_21[VAR_23], VAR_3);
 FUNC_21(&VAR_21[VAR_23], VAR_17->hw_mode);
 VAR_23++;

 VAR_24 = FUNC_6(VAR_17->drvdata, &VAR_20, VAR_21, VAR_23, &VAR_14->base);
 if (VAR_24 != -VAR_7 && VAR_24 != -VAR_6) {
  FUNC_17(VAR_18, "send_request() failed (rc=%d)\n", VAR_24);
  FUNC_10(VAR_18, VAR_15, VAR_14->src, 1);
  FUNC_12(VAR_18, VAR_15, VAR_19, VAR_14->result);
  FUNC_11(VAR_18, VAR_15, VAR_17);
 }
 return VAR_24;
}
