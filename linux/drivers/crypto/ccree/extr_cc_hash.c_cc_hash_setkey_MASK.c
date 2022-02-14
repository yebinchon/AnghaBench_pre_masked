
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct crypto_ahash {int base; } ;
struct cc_hw_desc {int dummy; } ;
struct TYPE_2__ {unsigned int keylen; int * key; scalar_t__ key_dma_addr; } ;
struct cc_hash_ctx {int is_hmac; int inter_digestsize; int hash_len; TYPE_1__ key_params; int drvdata; scalar_t__ digest_buff_dma_addr; scalar_t__ opad_tmp_keys_dma_addr; int hw_mode; int hash_mode; } ;
struct cc_crypto_req {int dummy; } ;
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
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct cc_crypto_req*,struct cc_hw_desc*,int) ;
 int FUNC_2 (int ,struct cc_hw_desc*) ;
 struct cc_hash_ctx* FUNC_3 (struct crypto_ahash*) ;
 int FUNC_4 (struct crypto_ahash*) ;
 int FUNC_5 (struct crypto_ahash*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct device*,char*,unsigned int,...) ;
 int FUNC_8 (struct device*,char*,int,...) ;
 scalar_t__ FUNC_9 (struct device*,void*,unsigned int,int ) ;
 scalar_t__ FUNC_10 (struct device*,scalar_t__) ;
 int FUNC_11 (struct device*,scalar_t__,unsigned int,int ) ;
 struct device* FUNC_12 (int ) ;
 int FUNC_13 (struct cc_hw_desc*) ;
 int * FUNC_14 (int const*,unsigned int,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct cc_hw_desc*,int ) ;
 int FUNC_17 (struct cc_hw_desc*,int ) ;
 int FUNC_18 (struct cc_hw_desc*,int ,int) ;
 int FUNC_19 (struct cc_hw_desc*,int ,int) ;
 int FUNC_20 (struct cc_hw_desc*,int ,scalar_t__,int,int ) ;
 int FUNC_21 (struct cc_hw_desc*,scalar_t__,int,int ,int ) ;
 int FUNC_22 (struct cc_hw_desc*,int ) ;
 int FUNC_23 (struct cc_hw_desc*,int ) ;
 int FUNC_24 (struct cc_hw_desc*) ;
 int FUNC_25 (struct cc_hw_desc*,unsigned int) ;

__attribute__((used)) static int FUNC_26(struct crypto_ahash *VAR_19, const u8 *VAR_20,
     unsigned int VAR_21)
{
 unsigned int VAR_22[2] = { VAR_10, VAR_11 };
 struct cc_crypto_req VAR_23 = {};
 struct cc_hash_ctx *VAR_24 = ((void*)0);
 int VAR_25 = 0;
 int VAR_26 = 0;
 int VAR_27, VAR_28 = 0, VAR_29 = 0;
 struct cc_hw_desc VAR_30[VAR_1];
 cc_sram_addr_t VAR_31;
 struct device *VAR_32;

 VAR_24 = FUNC_3(VAR_19);
 VAR_32 = FUNC_12(VAR_24->drvdata);
 FUNC_7(VAR_32, "start keylen: %d", VAR_21);

 VAR_25 = FUNC_6(&VAR_19->base);
 VAR_26 = FUNC_4(VAR_19);

 VAR_31 = FUNC_0(VAR_24->drvdata, VAR_24->hash_mode);




 VAR_24->key_params.keylen = VAR_21;
 VAR_24->key_params.key_dma_addr = 0;
 VAR_24->is_hmac = 1;
 VAR_24->key_params.key = ((void*)0);

 if (VAR_21) {
  VAR_24->key_params.key = FUNC_14(VAR_20, VAR_21, VAR_7);
  if (!VAR_24->key_params.key)
   return -VAR_6;

  VAR_24->key_params.key_dma_addr =
   FUNC_9(VAR_32, (void *)VAR_24->key_params.key, VAR_21,
           VAR_5);
  if (FUNC_10(VAR_32, VAR_24->key_params.key_dma_addr)) {
   FUNC_8(VAR_32, "Mapping key va=0x%p len=%u for DMA failed\n",
    *VAR_24->key_params.key, VAR_21);
   FUNC_15(VAR_24->key_params.key);
   return -VAR_6;
  }
  FUNC_7(VAR_32, "mapping key-buffer: key_dma_addr=%pad keylen=%u\n",
   &VAR_24->key_params.key_dma_addr, VAR_24->key_params.keylen);

  if (VAR_21 > VAR_25) {

   FUNC_13(&VAR_30[VAR_28]);
   FUNC_17(&VAR_30[VAR_28], VAR_24->hw_mode);
   FUNC_19(&VAR_30[VAR_28], VAR_31,
         VAR_24->inter_digestsize);
   FUNC_22(&VAR_30[VAR_28], VAR_17);
   FUNC_23(&VAR_30[VAR_28], VAR_14);
   VAR_28++;


   FUNC_13(&VAR_30[VAR_28]);
   FUNC_17(&VAR_30[VAR_28], VAR_24->hw_mode);
   FUNC_18(&VAR_30[VAR_28], 0, VAR_24->hash_len);
   FUNC_16(&VAR_30[VAR_28], VAR_9);
   FUNC_22(&VAR_30[VAR_28], VAR_17);
   FUNC_23(&VAR_30[VAR_28], VAR_13);
   VAR_28++;

   FUNC_13(&VAR_30[VAR_28]);
   FUNC_20(&VAR_30[VAR_28], VAR_4,
         VAR_24->key_params.key_dma_addr, VAR_21,
         VAR_12);
   FUNC_22(&VAR_30[VAR_28], VAR_3);
   VAR_28++;


   FUNC_13(&VAR_30[VAR_28]);
   FUNC_17(&VAR_30[VAR_28], VAR_24->hw_mode);
   FUNC_21(&VAR_30[VAR_28], VAR_24->opad_tmp_keys_dma_addr,
          VAR_26, VAR_12, 0);
   FUNC_22(&VAR_30[VAR_28], VAR_18);
   FUNC_23(&VAR_30[VAR_28], VAR_16);
   FUNC_16(&VAR_30[VAR_28], VAR_8);
   FUNC_2(VAR_24->hash_mode, &VAR_30[VAR_28]);
   VAR_28++;

   FUNC_13(&VAR_30[VAR_28]);
   FUNC_18(&VAR_30[VAR_28], 0, (VAR_25 - VAR_26));
   FUNC_22(&VAR_30[VAR_28], VAR_0);
   FUNC_21(&VAR_30[VAR_28],
          (VAR_24->opad_tmp_keys_dma_addr +
           VAR_26),
          (VAR_25 - VAR_26), VAR_12, 0);
   VAR_28++;
  } else {
   FUNC_13(&VAR_30[VAR_28]);
   FUNC_20(&VAR_30[VAR_28], VAR_4,
         VAR_24->key_params.key_dma_addr, VAR_21,
         VAR_12);
   FUNC_22(&VAR_30[VAR_28], VAR_0);
   FUNC_21(&VAR_30[VAR_28], VAR_24->opad_tmp_keys_dma_addr,
          VAR_21, VAR_12, 0);
   VAR_28++;

   if ((VAR_25 - VAR_21)) {
    FUNC_13(&VAR_30[VAR_28]);
    FUNC_18(&VAR_30[VAR_28], 0,
           (VAR_25 - VAR_21));
    FUNC_22(&VAR_30[VAR_28], VAR_0);
    FUNC_21(&VAR_30[VAR_28],
           (VAR_24->opad_tmp_keys_dma_addr +
            VAR_21), (VAR_25 - VAR_21),
           VAR_12, 0);
    VAR_28++;
   }
  }
 } else {
  FUNC_13(&VAR_30[VAR_28]);
  FUNC_18(&VAR_30[VAR_28], 0, VAR_25);
  FUNC_22(&VAR_30[VAR_28], VAR_0);
  FUNC_21(&VAR_30[VAR_28], (VAR_24->opad_tmp_keys_dma_addr),
         VAR_25, VAR_12, 0);
  VAR_28++;
 }

 VAR_29 = FUNC_1(VAR_24->drvdata, &VAR_23, VAR_30, VAR_28);
 if (VAR_29) {
  FUNC_8(VAR_32, "send_request() failed (rc=%d)\n", VAR_29);
  goto out;
 }


 for (VAR_28 = 0, VAR_27 = 0; VAR_27 < 2; VAR_27++) {

  FUNC_13(&VAR_30[VAR_28]);
  FUNC_17(&VAR_30[VAR_28], VAR_24->hw_mode);
  FUNC_19(&VAR_30[VAR_28], VAR_31, VAR_24->inter_digestsize);
  FUNC_22(&VAR_30[VAR_28], VAR_17);
  FUNC_23(&VAR_30[VAR_28], VAR_14);
  VAR_28++;


  FUNC_13(&VAR_30[VAR_28]);
  FUNC_17(&VAR_30[VAR_28], VAR_24->hw_mode);
  FUNC_18(&VAR_30[VAR_28], 0, VAR_24->hash_len);
  FUNC_22(&VAR_30[VAR_28], VAR_17);
  FUNC_23(&VAR_30[VAR_28], VAR_13);
  VAR_28++;


  FUNC_13(&VAR_30[VAR_28]);
  FUNC_25(&VAR_30[VAR_28], VAR_22[VAR_27]);
  FUNC_17(&VAR_30[VAR_28], VAR_24->hw_mode);
  FUNC_22(&VAR_30[VAR_28], VAR_17);
  FUNC_23(&VAR_30[VAR_28], VAR_15);
  VAR_28++;


  FUNC_13(&VAR_30[VAR_28]);
  FUNC_20(&VAR_30[VAR_28], VAR_4, VAR_24->opad_tmp_keys_dma_addr,
        VAR_25, VAR_12);
  FUNC_17(&VAR_30[VAR_28], VAR_24->hw_mode);
  FUNC_24(&VAR_30[VAR_28]);
  FUNC_22(&VAR_30[VAR_28], VAR_3);
  VAR_28++;




  FUNC_13(&VAR_30[VAR_28]);
  FUNC_17(&VAR_30[VAR_28], VAR_24->hw_mode);
  if (VAR_27 > 0)
   FUNC_21(&VAR_30[VAR_28], VAR_24->opad_tmp_keys_dma_addr,
          VAR_24->inter_digestsize, VAR_12, 0);
  else
   FUNC_21(&VAR_30[VAR_28], VAR_24->digest_buff_dma_addr,
          VAR_24->inter_digestsize, VAR_12, 0);
  FUNC_22(&VAR_30[VAR_28], VAR_18);
  FUNC_23(&VAR_30[VAR_28], VAR_16);
  VAR_28++;
 }

 VAR_29 = FUNC_1(VAR_24->drvdata, &VAR_23, VAR_30, VAR_28);

out:
 if (VAR_29)
  FUNC_5(VAR_19, VAR_2);

 if (VAR_24->key_params.key_dma_addr) {
  FUNC_11(VAR_32, VAR_24->key_params.key_dma_addr,
     VAR_24->key_params.keylen, VAR_5);
  FUNC_7(VAR_32, "Unmapped key-buffer: key_dma_addr=%pad keylen=%u\n",
   &VAR_24->key_params.key_dma_addr, VAR_24->key_params.keylen);
 }

 FUNC_15(VAR_24->key_params.key);

 return VAR_29;
}
