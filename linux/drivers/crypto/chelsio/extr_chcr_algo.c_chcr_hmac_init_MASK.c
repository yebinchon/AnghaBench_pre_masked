
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hmac_ctx {int ipad; } ;
struct crypto_ahash {int dummy; } ;
struct chcr_ahash_req_ctx {unsigned int data_len; int partial_hash; } ;
struct ahash_request {int dummy; } ;


 struct hmac_ctx* FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct chcr_ahash_req_ctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct ahash_request*) ;
 unsigned int FUNC_3 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_4 (struct ahash_request*) ;
 int FUNC_5 (struct crypto_ahash*) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (struct crypto_ahash*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct ahash_request *VAR_4)
{
 struct chcr_ahash_req_ctx *VAR_5 = FUNC_1(VAR_4);
 struct crypto_ahash *VAR_6 = FUNC_4(VAR_4);
 struct hmac_ctx *VAR_7 = FUNC_0(FUNC_7(VAR_6));
 unsigned int VAR_8 = FUNC_3(VAR_6);
 unsigned int VAR_9 = FUNC_6(FUNC_5(VAR_6));

 FUNC_2(VAR_4);
 VAR_5->data_len = VAR_9;
 if (FUNC_8(FUNC_5(VAR_6))) {
  if (VAR_8 == VAR_0)
   FUNC_9(VAR_5->partial_hash, VAR_7->ipad,
          VAR_1);
  else if (VAR_8 == VAR_2)
   FUNC_9(VAR_5->partial_hash, VAR_7->ipad,
          VAR_3);
  else
   FUNC_9(VAR_5->partial_hash, VAR_7->ipad,
          VAR_8);
 }
 return 0;
}
