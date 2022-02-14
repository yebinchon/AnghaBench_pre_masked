
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct cc_hw_desc {int dummy; } ;
struct TYPE_2__ {unsigned int keylen; int key; int key_dma_addr; } ;
struct cc_hash_ctx {int is_hmac; TYPE_1__ key_params; int drvdata; scalar_t__ opad_tmp_keys_dma_addr; } ;
struct cc_crypto_req {int dummy; } ;





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
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int ,struct cc_crypto_req*,struct cc_hw_desc*,unsigned int) ;
 struct cc_hash_ctx* FUNC_1 (struct crypto_ahash*) ;
 int FUNC_2 (struct crypto_ahash*,int ) ;
 int FUNC_3 (struct device*,char*,unsigned int,...) ;
 int FUNC_4 (struct device*,char*,int const*,unsigned int) ;
 int FUNC_5 (struct device*,int ,unsigned int,int ) ;
 scalar_t__ FUNC_6 (struct device*,int ) ;
 int FUNC_7 (struct device*,int ,unsigned int,int ) ;
 struct device* FUNC_8 (int ) ;
 int FUNC_9 (struct cc_hw_desc*) ;
 int FUNC_10 (int const*,unsigned int,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct cc_hw_desc*,int ) ;
 int FUNC_13 (struct cc_hw_desc*,int ) ;
 int FUNC_14 (struct cc_hw_desc*,int,int ) ;
 int FUNC_15 (struct cc_hw_desc*,int ,int ,unsigned int,int ) ;
 int FUNC_16 (struct cc_hw_desc*,scalar_t__,int ,int ,int ) ;
 int FUNC_17 (struct cc_hw_desc*,int ) ;
 int FUNC_18 (struct cc_hw_desc*,unsigned int) ;
 int FUNC_19 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static int FUNC_20(struct crypto_ahash *VAR_17,
     const u8 *VAR_18, unsigned int VAR_19)
{
 struct cc_crypto_req VAR_20 = {};
 struct cc_hash_ctx *VAR_21 = FUNC_1(VAR_17);
 struct device *VAR_22 = FUNC_8(VAR_21->drvdata);
 int VAR_23 = 0;
 unsigned int VAR_24 = 0;
 struct cc_hw_desc VAR_25[VAR_1];

 FUNC_3(VAR_22, "===== setkey (%d) ====\n", VAR_19);

 switch (VAR_19) {
 case 130:
 case 129:
 case 128:
  break;
 default:
  return -VAR_8;
 }

 VAR_21->key_params.keylen = VAR_19;

 VAR_21->key_params.key = FUNC_10(VAR_18, VAR_19, VAR_10);
 if (!VAR_21->key_params.key)
  return -VAR_9;

 VAR_21->key_params.key_dma_addr =
  FUNC_5(VAR_22, VAR_21->key_params.key, VAR_19, VAR_5);
 if (FUNC_6(VAR_22, VAR_21->key_params.key_dma_addr)) {
  FUNC_4(VAR_22, "Mapping key va=0x%p len=%u for DMA failed\n",
   VAR_18, VAR_19);
  FUNC_11(VAR_21->key_params.key);
  return -VAR_9;
 }
 FUNC_3(VAR_22, "mapping key-buffer: key_dma_addr=%pad keylen=%u\n",
  &VAR_21->key_params.key_dma_addr, VAR_21->key_params.keylen);

 VAR_21->is_hmac = 1;

 FUNC_9(&VAR_25[VAR_24]);
 FUNC_15(&VAR_25[VAR_24], VAR_4, VAR_21->key_params.key_dma_addr,
       VAR_19, VAR_11);
 FUNC_13(&VAR_25[VAR_24], VAR_6);
 FUNC_12(&VAR_25[VAR_24], VAR_7);
 FUNC_18(&VAR_25[VAR_24], VAR_19);
 FUNC_17(&VAR_25[VAR_24], VAR_13);
 FUNC_19(&VAR_25[VAR_24], VAR_12);
 VAR_24++;

 FUNC_9(&VAR_25[VAR_24]);
 FUNC_14(&VAR_25[VAR_24], 0x01010101, VAR_0);
 FUNC_17(&VAR_25[VAR_24], VAR_3);
 FUNC_16(&VAR_25[VAR_24],
        (VAR_21->opad_tmp_keys_dma_addr + VAR_14),
        VAR_0, VAR_11, 0);
 VAR_24++;

 FUNC_9(&VAR_25[VAR_24]);
 FUNC_14(&VAR_25[VAR_24], 0x02020202, VAR_0);
 FUNC_17(&VAR_25[VAR_24], VAR_3);
 FUNC_16(&VAR_25[VAR_24],
        (VAR_21->opad_tmp_keys_dma_addr + VAR_15),
        VAR_0, VAR_11, 0);
 VAR_24++;

 FUNC_9(&VAR_25[VAR_24]);
 FUNC_14(&VAR_25[VAR_24], 0x03030303, VAR_0);
 FUNC_17(&VAR_25[VAR_24], VAR_3);
 FUNC_16(&VAR_25[VAR_24],
        (VAR_21->opad_tmp_keys_dma_addr + VAR_16),
        VAR_0, VAR_11, 0);
 VAR_24++;

 VAR_23 = FUNC_0(VAR_21->drvdata, &VAR_20, VAR_25, VAR_24);

 if (VAR_23)
  FUNC_2(VAR_17, VAR_2);

 FUNC_7(VAR_22, VAR_21->key_params.key_dma_addr,
    VAR_21->key_params.keylen, VAR_5);
 FUNC_3(VAR_22, "Unmapped key-buffer: key_dma_addr=%pad keylen=%u\n",
  &VAR_21->key_params.key_dma_addr, VAR_21->key_params.keylen);

 FUNC_11(VAR_21->key_params.key);

 return VAR_23;
}
