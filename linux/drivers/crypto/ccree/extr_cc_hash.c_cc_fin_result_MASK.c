
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_ahash {int dummy; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_hash_ctx {int hash_mode; int drvdata; int hw_mode; } ;
struct ahash_request {int dummy; } ;
struct ahash_req_ctx {int digest_result_dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ahash_req_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ,struct cc_hw_desc*) ;
 struct cc_hash_ctx* FUNC_2 (struct crypto_ahash*) ;
 int FUNC_3 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_4 (struct ahash_request*) ;
 int FUNC_5 (struct cc_hw_desc*) ;
 int FUNC_6 (struct cc_hw_desc*,int ) ;
 int FUNC_7 (struct cc_hw_desc*,int ,int ,int ,int) ;
 int FUNC_8 (struct cc_hw_desc*,int ) ;
 int FUNC_9 (struct cc_hw_desc*,int ,int ) ;
 int FUNC_10 (int ,struct cc_hw_desc*) ;
 int FUNC_11 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static int FUNC_12(struct cc_hw_desc *VAR_4, struct ahash_request *VAR_5,
    int VAR_6)
{
 struct ahash_req_ctx *VAR_7 = FUNC_0(VAR_5);
 struct crypto_ahash *VAR_8 = FUNC_4(VAR_5);
 struct cc_hash_ctx *VAR_9 = FUNC_2(VAR_8);
 u32 VAR_10 = FUNC_3(VAR_8);


 FUNC_5(&VAR_4[VAR_6]);
 FUNC_9(&VAR_4[VAR_6], VAR_9->hw_mode, VAR_9->hash_mode);

 FUNC_7(&VAR_4[VAR_6], VAR_7->digest_result_dma_addr, VAR_10,
        VAR_1, 1);
 FUNC_10(VAR_9->drvdata, &VAR_4[VAR_6]);
 FUNC_8(&VAR_4[VAR_6], VAR_3);
 FUNC_11(&VAR_4[VAR_6], VAR_2);
 FUNC_6(&VAR_4[VAR_6], VAR_0);
 FUNC_1(VAR_9->hash_mode, &VAR_4[VAR_6]);
 VAR_6++;

 return VAR_6;
}
