
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct device {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct cc_hw_desc {int dummy; } ;
struct TYPE_2__ {int keylen; } ;
struct cc_hash_ctx {scalar_t__ hw_mode; int drvdata; scalar_t__ opad_tmp_keys_dma_addr; TYPE_1__ key_params; } ;
struct cc_crypto_req {void* user_arg; void* user_cb; } ;
struct ahash_request {int result; int src; int base; int nbytes; } ;
struct ahash_req_ctx {scalar_t__ xcbc_count; scalar_t__ digest_result_dma_addr; scalar_t__ digest_buff_dma_addr; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 struct ahash_req_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int *) ;
 scalar_t__* FUNC_2 (struct ahash_req_ctx*) ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_3 (int ,struct ahash_req_ctx*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct device*,struct ahash_req_ctx*,struct cc_hash_ctx*) ;
 scalar_t__ FUNC_5 (struct device*,struct ahash_req_ctx*,scalar_t__) ;
 int FUNC_6 (int ,struct cc_crypto_req*,struct cc_hw_desc*,int,int *) ;
 int FUNC_7 (struct ahash_req_ctx*,struct cc_hash_ctx*,int ,struct cc_hw_desc*,int,int*) ;
 int FUNC_8 (struct ahash_request*,struct cc_hw_desc*,int*) ;
 int FUNC_9 (struct ahash_request*,struct cc_hw_desc*,int*) ;
 int FUNC_10 (struct device*,struct ahash_req_ctx*,int ,int) ;
 int FUNC_11 (struct device*,struct ahash_req_ctx*,struct cc_hash_ctx*) ;
 int FUNC_12 (struct device*,struct ahash_req_ctx*,scalar_t__,int ) ;
 struct cc_hash_ctx* FUNC_13 (struct crypto_ahash*) ;
 scalar_t__ FUNC_14 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_15 (struct ahash_request*) ;
 int FUNC_16 (struct device*,char*,scalar_t__) ;
 int FUNC_17 (struct device*,char*,...) ;
 struct device* FUNC_18 (int ) ;
 int FUNC_19 (struct cc_hw_desc*) ;
 int FUNC_20 (struct cc_hw_desc*,int ) ;
 int FUNC_21 (struct cc_hw_desc*,scalar_t__) ;
 int FUNC_22 (struct cc_hw_desc*) ;
 int FUNC_23 (struct cc_hw_desc*,int,scalar_t__) ;
 int FUNC_24 (struct cc_hw_desc*,int ,int) ;
 int FUNC_25 (struct cc_hw_desc*,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_26 (struct cc_hw_desc*,scalar_t__,scalar_t__,int ,int) ;
 int FUNC_27 (struct cc_hw_desc*,int ,int ,int) ;
 int FUNC_28 (struct cc_hw_desc*,int ) ;
 int FUNC_29 (struct cc_hw_desc*,scalar_t__) ;
 int FUNC_30 (int ,struct cc_hw_desc*) ;
 int FUNC_31 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static int FUNC_32(struct ahash_request *VAR_20)
{
 struct ahash_req_ctx *VAR_21 = FUNC_0(VAR_20);
 struct crypto_ahash *VAR_22 = FUNC_15(VAR_20);
 struct cc_hash_ctx *VAR_23 = FUNC_13(VAR_22);
 struct device *VAR_24 = FUNC_18(VAR_23->drvdata);
 struct cc_crypto_req VAR_25 = {};
 struct cc_hw_desc VAR_26[VAR_3];
 int VAR_27 = 0;
 int VAR_28 = 0;
 u32 VAR_29, VAR_30;
 u32 VAR_31 = FUNC_14(VAR_22);
 gfp_t VAR_32 = FUNC_1(&VAR_20->base);
 u32 VAR_33 = *FUNC_2(VAR_21);

 if (VAR_23->hw_mode == VAR_7) {
  VAR_29 = VAR_1;
  VAR_30 = VAR_1;
 } else {
  VAR_29 = (VAR_23->key_params.keylen == 24) ? VAR_0 :
   VAR_23->key_params.keylen;
  VAR_30 = VAR_23->key_params.keylen;
 }

 FUNC_16(VAR_24, "===== final  xcbc reminder (%d) ====\n", VAR_33);

 if (FUNC_4(VAR_24, VAR_21, VAR_23)) {
  FUNC_17(VAR_24, "map_ahash_source() failed\n");
  return -VAR_11;
 }

 if (FUNC_3(VAR_23->drvdata, VAR_21, VAR_20->src,
          VAR_20->nbytes, 0, VAR_32)) {
  FUNC_17(VAR_24, "map_ahash_request_final() failed\n");
  FUNC_11(VAR_24, VAR_21, VAR_23);
  return -VAR_12;
 }

 if (FUNC_5(VAR_24, VAR_21, VAR_31)) {
  FUNC_17(VAR_24, "map_ahash_digest() failed\n");
  FUNC_10(VAR_24, VAR_21, VAR_20->src, 1);
  FUNC_11(VAR_24, VAR_21, VAR_23);
  return -VAR_12;
 }


 VAR_25.user_cb = (void *)VAR_19;
 VAR_25.user_arg = (void *)VAR_20;

 if (VAR_21->xcbc_count && VAR_33 == 0) {

  FUNC_19(&VAR_26[VAR_27]);
  FUNC_21(&VAR_26[VAR_27], VAR_6);
  FUNC_20(&VAR_26[VAR_27], VAR_8);
  FUNC_25(&VAR_26[VAR_27], VAR_5,
        (VAR_23->opad_tmp_keys_dma_addr + VAR_18),
        VAR_29, VAR_13);
  FUNC_29(&VAR_26[VAR_27], VAR_30);
  FUNC_28(&VAR_26[VAR_27], VAR_17);
  FUNC_31(&VAR_26[VAR_27], VAR_14);
  VAR_27++;




  FUNC_19(&VAR_26[VAR_27]);
  FUNC_25(&VAR_26[VAR_27], VAR_5, VAR_21->digest_buff_dma_addr,
        VAR_2, VAR_13);
  FUNC_26(&VAR_26[VAR_27], VAR_21->digest_buff_dma_addr,
         VAR_2, VAR_13, 0);
  FUNC_28(&VAR_26[VAR_27], VAR_4);
  VAR_27++;


  FUNC_19(&VAR_26[VAR_27]);
  FUNC_24(&VAR_26[VAR_27], 0, 0xfffff0);
  FUNC_27(&VAR_26[VAR_27], 0, 0, 1);
  VAR_27++;
 }

 if (VAR_23->hw_mode == VAR_7)
  FUNC_9(VAR_20, VAR_26, &VAR_27);
 else
  FUNC_8(VAR_20, VAR_26, &VAR_27);

 if (VAR_21->xcbc_count == 0) {
  FUNC_19(&VAR_26[VAR_27]);
  FUNC_21(&VAR_26[VAR_27], VAR_23->hw_mode);
  FUNC_29(&VAR_26[VAR_27], VAR_30);
  FUNC_22(&VAR_26[VAR_27]);
  FUNC_28(&VAR_26[VAR_27], VAR_17);
  VAR_27++;
 } else if (VAR_33 > 0) {
  FUNC_7(VAR_21, VAR_23, VAR_4, VAR_26, 0, &VAR_27);
 } else {
  FUNC_19(&VAR_26[VAR_27]);
  FUNC_23(&VAR_26[VAR_27], 0x00, VAR_2);
  FUNC_28(&VAR_26[VAR_27], VAR_4);
  VAR_27++;
 }


 FUNC_19(&VAR_26[VAR_27]);

 FUNC_26(&VAR_26[VAR_27], VAR_21->digest_result_dma_addr,
        VAR_31, VAR_13, 1);
 FUNC_30(VAR_23->drvdata, &VAR_26[VAR_27]);
 FUNC_28(&VAR_26[VAR_27], VAR_16);
 FUNC_31(&VAR_26[VAR_27], VAR_15);
 FUNC_21(&VAR_26[VAR_27], VAR_23->hw_mode);
 VAR_27++;

 VAR_28 = FUNC_6(VAR_23->drvdata, &VAR_25, VAR_26, VAR_27, &VAR_20->base);
 if (VAR_28 != -VAR_10 && VAR_28 != -VAR_9) {
  FUNC_17(VAR_24, "send_request() failed (rc=%d)\n", VAR_28);
  FUNC_10(VAR_24, VAR_21, VAR_20->src, 1);
  FUNC_12(VAR_24, VAR_21, VAR_31, VAR_20->result);
  FUNC_11(VAR_24, VAR_21, VAR_23);
 }
 return VAR_28;
}
