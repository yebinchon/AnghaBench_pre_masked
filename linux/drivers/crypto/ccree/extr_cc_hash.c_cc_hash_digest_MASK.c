
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
struct cc_hash_ctx {int is_hmac; int drvdata; int hash_len; int hw_mode; int hash_mode; int inter_digestsize; } ;
struct cc_crypto_req {struct ahash_request* user_arg; int user_cb; } ;
struct ahash_request {unsigned int nbytes; int base; int * result; struct scatterlist* src; } ;
struct ahash_req_ctx {int digest_buff_dma_addr; int digest_bytes_len_dma_addr; } ;
typedef int gfp_t ;
typedef int cc_sram_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct ahash_req_ctx* FUNC_0 (struct ahash_request*) ;
 int VAR_14 ;
 int FUNC_1 (struct cc_hw_desc*,struct ahash_request*,int) ;
 int FUNC_2 (struct cc_hw_desc*,struct ahash_request*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*,struct ahash_req_ctx*,struct cc_hash_ctx*) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,struct ahash_req_ctx*,struct scatterlist*,unsigned int,int,int ) ;
 scalar_t__ FUNC_7 (struct device*,struct ahash_req_ctx*,struct cc_hash_ctx*) ;
 scalar_t__ FUNC_8 (struct device*,struct ahash_req_ctx*,int ) ;
 int FUNC_9 (int ,struct cc_crypto_req*,struct cc_hw_desc*,int,int *) ;
 int FUNC_10 (struct ahash_req_ctx*,struct cc_hash_ctx*,int ,struct cc_hw_desc*,int,int*) ;
 int FUNC_11 (struct device*,struct ahash_req_ctx*,struct scatterlist*,int) ;
 int FUNC_12 (struct device*,struct ahash_req_ctx*,struct cc_hash_ctx*) ;
 int FUNC_13 (struct device*,struct ahash_req_ctx*,int ,int *) ;
 struct cc_hash_ctx* FUNC_14 (struct crypto_ahash*) ;
 int FUNC_15 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_16 (struct ahash_request*) ;
 int FUNC_17 (struct device*,char*,char*,unsigned int) ;
 int FUNC_18 (struct device*,char*,...) ;
 struct device* FUNC_19 (int ) ;
 int FUNC_20 (struct cc_hw_desc*) ;
 int FUNC_21 (struct cc_hw_desc*,int ) ;
 int FUNC_22 (struct cc_hw_desc*,int ) ;
 int FUNC_23 (struct cc_hw_desc*,int ) ;
 int FUNC_24 (struct cc_hw_desc*,int ,int ) ;
 int FUNC_25 (struct cc_hw_desc*,int ,int ) ;
 int FUNC_26 (struct cc_hw_desc*,int ,int ,int ,int ) ;
 int FUNC_27 (struct cc_hw_desc*,int ,int ,int ,int ) ;
 int FUNC_28 (struct cc_hw_desc*,int ) ;
 int FUNC_29 (struct cc_hw_desc*,int ,int ) ;
 int FUNC_30 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static int FUNC_31(struct ahash_request *VAR_15)
{
 struct ahash_req_ctx *VAR_16 = FUNC_0(VAR_15);
 struct crypto_ahash *VAR_17 = FUNC_16(VAR_15);
 struct cc_hash_ctx *VAR_18 = FUNC_14(VAR_17);
 u32 VAR_19 = FUNC_15(VAR_17);
 struct scatterlist *VAR_20 = VAR_15->src;
 unsigned int VAR_21 = VAR_15->nbytes;
 u8 *VAR_22 = VAR_15->result;
 struct device *VAR_23 = FUNC_19(VAR_18->drvdata);
 bool VAR_24 = VAR_18->is_hmac;
 struct cc_crypto_req VAR_25 = {};
 struct cc_hw_desc VAR_26[VAR_0];
 cc_sram_addr_t VAR_27 =
  FUNC_5(VAR_18->drvdata, VAR_18->hash_mode);
 int VAR_28 = 0;
 int VAR_29 = 0;
 gfp_t VAR_30 = FUNC_3(&VAR_15->base);

 FUNC_17(VAR_23, "===== %s-digest (%d) ====\n", VAR_24 ? "hmac" : "hash",
  VAR_21);

 FUNC_4(VAR_23, VAR_16, VAR_18);

 if (FUNC_7(VAR_23, VAR_16, VAR_18)) {
  FUNC_18(VAR_23, "map_ahash_source() failed\n");
  return -VAR_6;
 }

 if (FUNC_8(VAR_23, VAR_16, VAR_19)) {
  FUNC_18(VAR_23, "map_ahash_digest() failed\n");
  FUNC_12(VAR_23, VAR_16, VAR_18);
  return -VAR_6;
 }

 if (FUNC_6(VAR_18->drvdata, VAR_16, VAR_20, VAR_21, 1,
          VAR_30)) {
  FUNC_18(VAR_23, "map_ahash_request_final() failed\n");
  FUNC_13(VAR_23, VAR_16, VAR_19, VAR_22);
  FUNC_12(VAR_23, VAR_16, VAR_18);
  return -VAR_6;
 }


 VAR_25.user_cb = VAR_14;
 VAR_25.user_arg = VAR_15;




 FUNC_20(&VAR_26[VAR_28]);
 FUNC_29(&VAR_26[VAR_28], VAR_18->hw_mode, VAR_18->hash_mode);
 if (VAR_24) {
  FUNC_26(&VAR_26[VAR_28], VAR_2, VAR_16->digest_buff_dma_addr,
        VAR_18->inter_digestsize, VAR_8);
 } else {
  FUNC_25(&VAR_26[VAR_28], VAR_27,
        VAR_18->inter_digestsize);
 }
 FUNC_28(&VAR_26[VAR_28], VAR_12);
 FUNC_30(&VAR_26[VAR_28], VAR_10);
 VAR_28++;


 FUNC_20(&VAR_26[VAR_28]);
 FUNC_29(&VAR_26[VAR_28], VAR_18->hw_mode, VAR_18->hash_mode);

 if (VAR_24) {
  FUNC_26(&VAR_26[VAR_28], VAR_2,
        VAR_16->digest_bytes_len_dma_addr,
        VAR_18->hash_len, VAR_8);
 } else {
  FUNC_24(&VAR_26[VAR_28], 0, VAR_18->hash_len);
  if (VAR_21)
   FUNC_21(&VAR_26[VAR_28], VAR_7);
  else
   FUNC_22(&VAR_26[VAR_28], VAR_3);
 }
 FUNC_28(&VAR_26[VAR_28], VAR_12);
 FUNC_30(&VAR_26[VAR_28], VAR_9);
 VAR_28++;

 FUNC_10(VAR_16, VAR_18, VAR_1, VAR_26, 0, &VAR_28);

 if (VAR_24) {

  FUNC_20(&VAR_26[VAR_28]);
  FUNC_23(&VAR_26[VAR_28], VAR_18->hw_mode);
  FUNC_27(&VAR_26[VAR_28], VAR_16->digest_buff_dma_addr,
         VAR_18->hash_len, VAR_8, 0);
  FUNC_28(&VAR_26[VAR_28], VAR_13);
  FUNC_30(&VAR_26[VAR_28], VAR_11);
  FUNC_22(&VAR_26[VAR_28], VAR_3);
  VAR_28++;

  VAR_28 = FUNC_1(VAR_26, VAR_15, VAR_28);
 }

 VAR_28 = FUNC_2(VAR_26, VAR_15, VAR_28);

 VAR_29 = FUNC_9(VAR_18->drvdata, &VAR_25, VAR_26, VAR_28, &VAR_15->base);
 if (VAR_29 != -VAR_5 && VAR_29 != -VAR_4) {
  FUNC_18(VAR_23, "send_request() failed (rc=%d)\n", VAR_29);
  FUNC_11(VAR_23, VAR_16, VAR_20, 1);
  FUNC_13(VAR_23, VAR_16, VAR_19, VAR_22);
  FUNC_12(VAR_23, VAR_16, VAR_18);
 }
 return VAR_29;
}
