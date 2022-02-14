
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct device {int dummy; } ;
struct crypto_ahash {int base; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_hash_ctx {scalar_t__ hw_mode; int drvdata; int inter_digestsize; } ;
struct cc_crypto_req {void* user_arg; void* user_cb; } ;
struct ahash_request {int src; int base; int nbytes; } ;
struct ahash_req_ctx {int digest_buff_dma_addr; int xcbc_count; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct ahash_req_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct ahash_req_ctx*,int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_3 (struct device*,struct ahash_req_ctx*,struct cc_hash_ctx*) ;
 int FUNC_4 (int ,struct cc_crypto_req*,struct cc_hw_desc*,size_t,int *) ;
 int FUNC_5 (struct ahash_req_ctx*,struct cc_hash_ctx*,int ,struct cc_hw_desc*,int,size_t*) ;
 int FUNC_6 (struct ahash_request*,struct cc_hw_desc*,size_t*) ;
 int FUNC_7 (struct ahash_request*,struct cc_hw_desc*,size_t*) ;
 int FUNC_8 (struct device*,struct ahash_req_ctx*,int ,int) ;
 int FUNC_9 (struct device*,struct ahash_req_ctx*,struct cc_hash_ctx*) ;
 scalar_t__ VAR_10 ;
 struct cc_hash_ctx* FUNC_10 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_11 (struct ahash_request*) ;
 unsigned int FUNC_12 (int *) ;
 int FUNC_13 (struct device*,char*,int ) ;
 int FUNC_14 (struct device*,char*,...) ;
 struct device* FUNC_15 (int ) ;
 int FUNC_16 (struct cc_hw_desc*) ;
 int FUNC_17 (struct cc_hw_desc*,scalar_t__) ;
 int FUNC_18 (struct cc_hw_desc*,int ,int ,int ,int) ;
 int FUNC_19 (struct cc_hw_desc*,int ) ;
 int FUNC_20 (int ,struct cc_hw_desc*) ;
 int FUNC_21 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static int FUNC_22(struct ahash_request *VAR_11)
{
 struct ahash_req_ctx *VAR_12 = FUNC_0(VAR_11);
 struct crypto_ahash *VAR_13 = FUNC_11(VAR_11);
 struct cc_hash_ctx *VAR_14 = FUNC_10(VAR_13);
 struct device *VAR_15 = FUNC_15(VAR_14->drvdata);
 unsigned int VAR_16 = FUNC_12(&VAR_13->base);
 struct cc_crypto_req VAR_17 = {};
 struct cc_hw_desc VAR_18[VAR_0];
 int VAR_19;
 u32 VAR_20 = 0;
 gfp_t VAR_21 = FUNC_1(&VAR_11->base);

 if (VAR_11->nbytes == 0) {

  return 0;
 }

 VAR_12->xcbc_count++;

 VAR_19 = FUNC_2(VAR_14->drvdata, VAR_12, VAR_11->src,
     VAR_11->nbytes, VAR_16, VAR_21);
 if (VAR_19) {
  if (VAR_19 == 1) {
   FUNC_13(VAR_15, " data size not require HW update %x\n",
    VAR_11->nbytes);

   return 0;
  }
  FUNC_14(VAR_15, "map_ahash_request_update() failed\n");
  return -VAR_6;
 }

 if (FUNC_3(VAR_15, VAR_12, VAR_14)) {
  FUNC_14(VAR_15, "map_ahash_source() failed\n");
  return -VAR_5;
 }

 if (VAR_14->hw_mode == VAR_2)
  FUNC_7(VAR_11, VAR_18, &VAR_20);
 else
  FUNC_6(VAR_11, VAR_18, &VAR_20);

 FUNC_5(VAR_12, VAR_14, VAR_1, VAR_18, 1, &VAR_20);


 FUNC_16(&VAR_18[VAR_20]);
 FUNC_17(&VAR_18[VAR_20], VAR_14->hw_mode);
 FUNC_18(&VAR_18[VAR_20], VAR_12->digest_buff_dma_addr,
        VAR_14->inter_digestsize, VAR_7, 1);
 FUNC_20(VAR_14->drvdata, &VAR_18[VAR_20]);
 FUNC_19(&VAR_18[VAR_20], VAR_9);
 FUNC_21(&VAR_18[VAR_20], VAR_8);
 VAR_20++;


 VAR_17.user_cb = (void *)VAR_10;
 VAR_17.user_arg = (void *)VAR_11;

 VAR_19 = FUNC_4(VAR_14->drvdata, &VAR_17, VAR_18, VAR_20, &VAR_11->base);
 if (VAR_19 != -VAR_4 && VAR_19 != -VAR_3) {
  FUNC_14(VAR_15, "send_request() failed (rc=%d)\n", VAR_19);
  FUNC_8(VAR_15, VAR_12, VAR_11->src, 1);
  FUNC_9(VAR_15, VAR_12, VAR_14);
 }
 return VAR_19;
}
