
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_ahash {int dummy; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_hash_ctx {int hash_len; int hash_mode; int drvdata; int hw_mode; int inter_digestsize; } ;
struct ahash_request {int dummy; } ;
struct ahash_req_ctx {int digest_buff_dma_addr; int opad_digest_dma_addr; } ;


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
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct cc_hw_desc*) ;
 struct cc_hash_ctx* FUNC_3 (struct crypto_ahash*) ;
 int FUNC_4 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_5 (struct ahash_request*) ;
 int FUNC_6 (struct cc_hw_desc*) ;
 int FUNC_7 (struct cc_hw_desc*,int ) ;
 int FUNC_8 (struct cc_hw_desc*,int ) ;
 int FUNC_9 (struct cc_hw_desc*,int ,int) ;
 int FUNC_10 (struct cc_hw_desc*,int ,int ) ;
 int FUNC_11 (struct cc_hw_desc*,int ,int ,int ,int ) ;
 int FUNC_12 (struct cc_hw_desc*,int ,int ,int ,int ) ;
 int FUNC_13 (struct cc_hw_desc*,int ,int ,int) ;
 int FUNC_14 (struct cc_hw_desc*,int ) ;
 int FUNC_15 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static int FUNC_16(struct cc_hw_desc *VAR_9, struct ahash_request *VAR_10,
         int VAR_11)
{
 struct ahash_req_ctx *VAR_12 = FUNC_0(VAR_10);
 struct crypto_ahash *VAR_13 = FUNC_5(VAR_10);
 struct cc_hash_ctx *VAR_14 = FUNC_3(VAR_13);
 u32 VAR_15 = FUNC_4(VAR_13);


 FUNC_6(&VAR_9[VAR_11]);
 FUNC_8(&VAR_9[VAR_11], VAR_14->hw_mode);
 FUNC_12(&VAR_9[VAR_11], VAR_12->digest_buff_dma_addr, VAR_15,
        VAR_3, 0);
 FUNC_14(&VAR_9[VAR_11], VAR_8);
 FUNC_2(VAR_14->hash_mode, &VAR_9[VAR_11]);
 FUNC_15(&VAR_9[VAR_11], VAR_6);
 VAR_11++;


 FUNC_6(&VAR_9[VAR_11]);
 FUNC_8(&VAR_9[VAR_11], VAR_14->hw_mode);
 FUNC_11(&VAR_9[VAR_11], VAR_1, VAR_12->opad_digest_dma_addr,
       VAR_14->inter_digestsize, VAR_3);
 FUNC_14(&VAR_9[VAR_11], VAR_7);
 FUNC_15(&VAR_9[VAR_11], VAR_5);
 VAR_11++;


 FUNC_6(&VAR_9[VAR_11]);
 FUNC_8(&VAR_9[VAR_11], VAR_14->hw_mode);
 FUNC_10(&VAR_9[VAR_11],
       FUNC_1(VAR_14->drvdata, VAR_14->hash_mode),
       VAR_14->hash_len);
 FUNC_7(&VAR_9[VAR_11], VAR_2);
 FUNC_14(&VAR_9[VAR_11], VAR_7);
 FUNC_15(&VAR_9[VAR_11], VAR_4);
 VAR_11++;


 FUNC_6(&VAR_9[VAR_11]);
 FUNC_9(&VAR_9[VAR_11], 0, 0xfffff0);
 FUNC_13(&VAR_9[VAR_11], 0, 0, 1);
 VAR_11++;


 FUNC_6(&VAR_9[VAR_11]);
 FUNC_11(&VAR_9[VAR_11], VAR_1, VAR_12->digest_buff_dma_addr,
       VAR_15, VAR_3);
 FUNC_14(&VAR_9[VAR_11], VAR_0);
 VAR_11++;

 return VAR_11;
}
