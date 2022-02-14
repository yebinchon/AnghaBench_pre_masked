
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct scatterlist {int dummy; } ;
struct device {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_hash_ctx {int is_hmac; int drvdata; int hash_len; int hash_mode; int hw_mode; } ;
struct cc_crypto_req {struct ahash_request* user_arg; int user_cb; } ;
struct ahash_request {unsigned int nbytes; int base; int * result; struct scatterlist* src; } ;
struct ahash_req_ctx {int digest_bytes_len_dma_addr; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ahash_req_ctx* FUNC_0 (struct ahash_request*) ;
 unsigned int FUNC_1 (struct cc_hw_desc*,struct ahash_request*,unsigned int) ;
 unsigned int FUNC_2 (struct cc_hw_desc*,struct ahash_request*,unsigned int) ;
 int FUNC_3 (int *) ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (int ,struct ahash_req_ctx*,struct scatterlist*,unsigned int,int,int ) ;
 scalar_t__ FUNC_5 (struct device*,struct ahash_req_ctx*,struct cc_hash_ctx*) ;
 scalar_t__ FUNC_6 (struct device*,struct ahash_req_ctx*,int ) ;
 unsigned int FUNC_7 (struct cc_hw_desc*,struct cc_hash_ctx*,struct ahash_req_ctx*,unsigned int) ;
 int FUNC_8 (int ,struct cc_crypto_req*,struct cc_hw_desc*,unsigned int,int *) ;
 int FUNC_9 (struct device*,struct ahash_req_ctx*,struct scatterlist*,int) ;
 int FUNC_10 (struct device*,struct ahash_req_ctx*,struct cc_hash_ctx*) ;
 int FUNC_11 (struct device*,struct ahash_req_ctx*,int ,int *) ;
 struct cc_hash_ctx* FUNC_12 (struct crypto_ahash*) ;
 int FUNC_13 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_14 (struct ahash_request*) ;
 int FUNC_15 (struct device*,char*,char*,char*,unsigned int) ;
 int FUNC_16 (struct device*,char*,...) ;
 struct device* FUNC_17 (int ) ;
 int FUNC_18 (struct cc_hw_desc*) ;
 int FUNC_19 (struct cc_hw_desc*,int ) ;
 int FUNC_20 (struct cc_hw_desc*,int ,int ,int ,int ) ;
 int FUNC_21 (struct cc_hw_desc*,int ) ;
 int FUNC_22 (struct cc_hw_desc*,int ,int ) ;
 int FUNC_23 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static int FUNC_24(struct ahash_request *VAR_10, bool VAR_11)
{
 struct ahash_req_ctx *VAR_12 = FUNC_0(VAR_10);
 struct crypto_ahash *VAR_13 = FUNC_14(VAR_10);
 struct cc_hash_ctx *VAR_14 = FUNC_12(VAR_13);
 u32 VAR_15 = FUNC_13(VAR_13);
 struct scatterlist *VAR_16 = VAR_10->src;
 unsigned int VAR_17 = VAR_10->nbytes;
 u8 *VAR_18 = VAR_10->result;
 struct device *VAR_19 = FUNC_17(VAR_14->drvdata);
 bool VAR_20 = VAR_14->is_hmac;
 struct cc_crypto_req VAR_21 = {};
 struct cc_hw_desc VAR_22[VAR_0];
 unsigned int VAR_23 = 0;
 int VAR_24;
 gfp_t VAR_25 = FUNC_3(&VAR_10->base);

 FUNC_15(VAR_19, "===== %s-%s (%d) ====\n", VAR_20 ? "hmac" : "hash",
  VAR_11 ? "finup" : "final", VAR_17);

 if (FUNC_5(VAR_19, VAR_12, VAR_14)) {
  FUNC_16(VAR_19, "map_ahash_source() failed\n");
  return -VAR_4;
 }

 if (FUNC_4(VAR_14->drvdata, VAR_12, VAR_16, VAR_17, VAR_11,
          VAR_25)) {
  FUNC_16(VAR_19, "map_ahash_request_final() failed\n");
  FUNC_10(VAR_19, VAR_12, VAR_14);
  return -VAR_5;
 }
 if (FUNC_6(VAR_19, VAR_12, VAR_15)) {
  FUNC_16(VAR_19, "map_ahash_digest() failed\n");
  FUNC_9(VAR_19, VAR_12, VAR_16, 1);
  FUNC_10(VAR_19, VAR_12, VAR_14);
  return -VAR_5;
 }


 VAR_21.user_cb = VAR_9;
 VAR_21.user_arg = VAR_10;

 VAR_23 = FUNC_7(VAR_22, VAR_14, VAR_12, VAR_23);


 FUNC_18(&VAR_22[VAR_23]);
 FUNC_19(&VAR_22[VAR_23], VAR_1);
 FUNC_22(&VAR_22[VAR_23], VAR_14->hw_mode, VAR_14->hash_mode);
 FUNC_20(&VAR_22[VAR_23], VAR_12->digest_bytes_len_dma_addr,
        VAR_14->hash_len, VAR_6, 0);
 FUNC_23(&VAR_22[VAR_23], VAR_7);
 FUNC_21(&VAR_22[VAR_23], VAR_8);
 VAR_23++;

 if (VAR_20)
  VAR_23 = FUNC_1(VAR_22, VAR_10, VAR_23);

 VAR_23 = FUNC_2(VAR_22, VAR_10, VAR_23);

 VAR_24 = FUNC_8(VAR_14->drvdata, &VAR_21, VAR_22, VAR_23, &VAR_10->base);
 if (VAR_24 != -VAR_3 && VAR_24 != -VAR_2) {
  FUNC_16(VAR_19, "send_request() failed (rc=%d)\n", VAR_24);
  FUNC_9(VAR_19, VAR_12, VAR_16, 1);
  FUNC_11(VAR_19, VAR_12, VAR_15, VAR_18);
  FUNC_10(VAR_19, VAR_12, VAR_14);
 }
 return VAR_24;
}
