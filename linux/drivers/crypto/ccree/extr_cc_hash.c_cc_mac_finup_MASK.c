
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
struct ahash_request {scalar_t__ nbytes; int result; int src; int base; } ;
struct ahash_req_ctx {scalar_t__ xcbc_count; int digest_result_dma_addr; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct ahash_req_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (struct ahash_request*) ;
 scalar_t__ FUNC_3 (int ,struct ahash_req_ctx*,int ,scalar_t__,int,int ) ;
 scalar_t__ FUNC_4 (struct device*,struct ahash_req_ctx*,struct cc_hash_ctx*) ;
 scalar_t__ FUNC_5 (struct device*,struct ahash_req_ctx*,int ) ;
 int FUNC_6 (int ,struct cc_crypto_req*,struct cc_hw_desc*,int,int *) ;
 int FUNC_7 (struct ahash_req_ctx*,struct cc_hash_ctx*,int ,struct cc_hw_desc*,int,int*) ;
 int FUNC_8 (struct ahash_request*,struct cc_hw_desc*,int*) ;
 int FUNC_9 (struct ahash_request*,struct cc_hw_desc*,int*) ;
 int FUNC_10 (struct device*,struct ahash_req_ctx*,int ,int) ;
 int FUNC_11 (struct device*,struct ahash_req_ctx*,struct cc_hash_ctx*) ;
 int FUNC_12 (struct device*,struct ahash_req_ctx*,int ,int ) ;
 struct cc_hash_ctx* FUNC_13 (struct crypto_ahash*) ;
 int FUNC_14 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_15 (struct ahash_request*) ;
 int FUNC_16 (struct device*,char*,...) ;
 int FUNC_17 (struct device*,char*,...) ;
 struct device* FUNC_18 (int ) ;
 int FUNC_19 (struct cc_hw_desc*) ;
 int FUNC_20 (struct cc_hw_desc*,scalar_t__) ;
 int FUNC_21 (struct cc_hw_desc*) ;
 int FUNC_22 (struct cc_hw_desc*,int ,int ,int ,int) ;
 int FUNC_23 (struct cc_hw_desc*,int ) ;
 int FUNC_24 (struct cc_hw_desc*,int ) ;
 int FUNC_25 (int ,struct cc_hw_desc*) ;
 int FUNC_26 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static int FUNC_27(struct ahash_request *VAR_13)
{
 struct ahash_req_ctx *VAR_14 = FUNC_0(VAR_13);
 struct crypto_ahash *VAR_15 = FUNC_15(VAR_13);
 struct cc_hash_ctx *VAR_16 = FUNC_13(VAR_15);
 struct device *VAR_17 = FUNC_18(VAR_16->drvdata);
 struct cc_crypto_req VAR_18 = {};
 struct cc_hw_desc VAR_19[VAR_1];
 int VAR_20 = 0;
 int VAR_21 = 0;
 u32 VAR_22 = 0;
 u32 VAR_23 = FUNC_14(VAR_15);
 gfp_t VAR_24 = FUNC_1(&VAR_13->base);

 FUNC_16(VAR_17, "===== finup xcbc(%d) ====\n", VAR_13->nbytes);
 if (VAR_14->xcbc_count > 0 && VAR_13->nbytes == 0) {
  FUNC_16(VAR_17, "No data to update. Call to fdx_mac_final\n");
  return FUNC_2(VAR_13);
 }

 if (FUNC_4(VAR_17, VAR_14, VAR_16)) {
  FUNC_17(VAR_17, "map_ahash_source() failed\n");
  return -VAR_6;
 }

 if (FUNC_3(VAR_16->drvdata, VAR_14, VAR_13->src,
          VAR_13->nbytes, 1, VAR_24)) {
  FUNC_17(VAR_17, "map_ahash_request_final() failed\n");
  FUNC_11(VAR_17, VAR_14, VAR_16);
  return -VAR_7;
 }
 if (FUNC_5(VAR_17, VAR_14, VAR_23)) {
  FUNC_17(VAR_17, "map_ahash_digest() failed\n");
  FUNC_10(VAR_17, VAR_14, VAR_13->src, 1);
  FUNC_11(VAR_17, VAR_14, VAR_16);
  return -VAR_7;
 }


 VAR_18.user_cb = (void *)VAR_12;
 VAR_18.user_arg = (void *)VAR_13;

 if (VAR_16->hw_mode == VAR_3) {
  VAR_22 = VAR_0;
  FUNC_9(VAR_13, VAR_19, &VAR_20);
 } else {
  VAR_22 = VAR_16->key_params.keylen;
  FUNC_8(VAR_13, VAR_19, &VAR_20);
 }

 if (VAR_13->nbytes == 0) {
  FUNC_19(&VAR_19[VAR_20]);
  FUNC_20(&VAR_19[VAR_20], VAR_16->hw_mode);
  FUNC_24(&VAR_19[VAR_20], VAR_22);
  FUNC_21(&VAR_19[VAR_20]);
  FUNC_23(&VAR_19[VAR_20], VAR_11);
  VAR_20++;
 } else {
  FUNC_7(VAR_14, VAR_16, VAR_2, VAR_19, 0, &VAR_20);
 }


 FUNC_19(&VAR_19[VAR_20]);

 FUNC_22(&VAR_19[VAR_20], VAR_14->digest_result_dma_addr,
        VAR_23, VAR_8, 1);
 FUNC_25(VAR_16->drvdata, &VAR_19[VAR_20]);
 FUNC_23(&VAR_19[VAR_20], VAR_10);
 FUNC_26(&VAR_19[VAR_20], VAR_9);
 FUNC_20(&VAR_19[VAR_20], VAR_16->hw_mode);
 VAR_20++;

 VAR_21 = FUNC_6(VAR_16->drvdata, &VAR_18, VAR_19, VAR_20, &VAR_13->base);
 if (VAR_21 != -VAR_5 && VAR_21 != -VAR_4) {
  FUNC_17(VAR_17, "send_request() failed (rc=%d)\n", VAR_21);
  FUNC_10(VAR_17, VAR_14, VAR_13->src, 1);
  FUNC_12(VAR_17, VAR_14, VAR_23, VAR_13->result);
  FUNC_11(VAR_17, VAR_14, VAR_16);
 }
 return VAR_21;
}
