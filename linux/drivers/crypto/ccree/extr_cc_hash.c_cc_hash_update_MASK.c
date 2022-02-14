
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct scatterlist {int dummy; } ;
struct device {int dummy; } ;
struct crypto_ahash {int base; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_hash_ctx {int drvdata; int hash_len; int hash_mode; int hw_mode; int inter_digestsize; scalar_t__ is_hmac; } ;
struct cc_crypto_req {struct ahash_request* user_arg; int user_cb; } ;
struct ahash_request {unsigned int nbytes; int base; struct scatterlist* src; } ;
struct ahash_req_ctx {int digest_bytes_len_dma_addr; int digest_buff_dma_addr; } ;
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
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct ahash_req_ctx*,struct scatterlist*,unsigned int,unsigned int,int ) ;
 scalar_t__ FUNC_3 (struct device*,struct ahash_req_ctx*,struct cc_hash_ctx*) ;
 size_t FUNC_4 (struct cc_hw_desc*,struct cc_hash_ctx*,struct ahash_req_ctx*,size_t) ;
 int FUNC_5 (int ,struct cc_crypto_req*,struct cc_hw_desc*,size_t,int *) ;
 int FUNC_6 (struct device*,struct ahash_req_ctx*,struct scatterlist*,int) ;
 int FUNC_7 (struct device*,struct ahash_req_ctx*,struct cc_hash_ctx*) ;
 int VAR_9 ;
 struct cc_hash_ctx* FUNC_8 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_9 (struct ahash_request*) ;
 unsigned int FUNC_10 (int *) ;
 int FUNC_11 (struct device*,char*,...) ;
 int FUNC_12 (struct device*,char*,...) ;
 struct device* FUNC_13 (int ) ;
 int FUNC_14 (struct cc_hw_desc*) ;
 int FUNC_15 (struct cc_hw_desc*,int ,int ,int ,int) ;
 int FUNC_16 (struct cc_hw_desc*,int ) ;
 int FUNC_17 (struct cc_hw_desc*,int ,int ) ;
 int FUNC_18 (int ,struct cc_hw_desc*) ;
 int FUNC_19 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static int FUNC_20(struct ahash_request *VAR_10)
{
 struct ahash_req_ctx *VAR_11 = FUNC_0(VAR_10);
 struct crypto_ahash *VAR_12 = FUNC_9(VAR_10);
 struct cc_hash_ctx *VAR_13 = FUNC_8(VAR_12);
 unsigned int VAR_14 = FUNC_10(&VAR_12->base);
 struct scatterlist *VAR_15 = VAR_10->src;
 unsigned int VAR_16 = VAR_10->nbytes;
 struct device *VAR_17 = FUNC_13(VAR_13->drvdata);
 struct cc_crypto_req VAR_18 = {};
 struct cc_hw_desc VAR_19[VAR_0];
 u32 VAR_20 = 0;
 int VAR_21;
 gfp_t VAR_22 = FUNC_1(&VAR_10->base);

 FUNC_11(VAR_17, "===== %s-update (%d) ====\n", VAR_13->is_hmac ?
  "hmac" : "hash", VAR_16);

 if (VAR_16 == 0) {

  return 0;
 }

 VAR_21 = FUNC_2(VAR_13->drvdata, VAR_11, VAR_15, VAR_16,
     VAR_14, VAR_22);
 if (VAR_21) {
  if (VAR_21 == 1) {
   FUNC_11(VAR_17, " data size not require HW update %x\n",
    VAR_16);

   return 0;
  }
  FUNC_12(VAR_17, "map_ahash_request_update() failed\n");
  return -VAR_4;
 }

 if (FUNC_3(VAR_17, VAR_11, VAR_13)) {
  FUNC_12(VAR_17, "map_ahash_source() failed\n");
  FUNC_6(VAR_17, VAR_11, VAR_15, 1);
  return -VAR_3;
 }


 VAR_18.user_cb = VAR_9;
 VAR_18.user_arg = VAR_10;

 VAR_20 = FUNC_4(VAR_19, VAR_13, VAR_11, VAR_20);


 FUNC_14(&VAR_19[VAR_20]);
 FUNC_17(&VAR_19[VAR_20], VAR_13->hw_mode, VAR_13->hash_mode);
 FUNC_15(&VAR_19[VAR_20], VAR_11->digest_buff_dma_addr,
        VAR_13->inter_digestsize, VAR_5, 0);
 FUNC_16(&VAR_19[VAR_20], VAR_8);
 FUNC_19(&VAR_19[VAR_20], VAR_6);
 VAR_20++;


 FUNC_14(&VAR_19[VAR_20]);
 FUNC_17(&VAR_19[VAR_20], VAR_13->hw_mode, VAR_13->hash_mode);
 FUNC_15(&VAR_19[VAR_20], VAR_11->digest_bytes_len_dma_addr,
        VAR_13->hash_len, VAR_5, 1);
 FUNC_18(VAR_13->drvdata, &VAR_19[VAR_20]);
 FUNC_16(&VAR_19[VAR_20], VAR_8);
 FUNC_19(&VAR_19[VAR_20], VAR_7);
 VAR_20++;

 VAR_21 = FUNC_5(VAR_13->drvdata, &VAR_18, VAR_19, VAR_20, &VAR_10->base);
 if (VAR_21 != -VAR_2 && VAR_21 != -VAR_1) {
  FUNC_12(VAR_17, "send_request() failed (rc=%d)\n", VAR_21);
  FUNC_6(VAR_17, VAR_11, VAR_15, 1);
  FUNC_7(VAR_17, VAR_11, VAR_13);
 }
 return VAR_21;
}
