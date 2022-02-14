
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_ahash {int dummy; } ;
struct chcr_ahash_req_ctx {int partial_hash; int bfr2; int skbfr; int bfr1; int reqbfr; scalar_t__ reqlen; scalar_t__ data_len; } ;
struct ahash_request {int dummy; } ;


 struct chcr_ahash_req_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_3 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_4(struct ahash_request *VAR_0)
{
 struct chcr_ahash_req_ctx *VAR_1 = FUNC_0(VAR_0);
 struct crypto_ahash *VAR_2 = FUNC_3(VAR_0);
 int VAR_3 = FUNC_2(VAR_2);

 VAR_1->data_len = 0;
 VAR_1->reqlen = 0;
 VAR_1->reqbfr = VAR_1->bfr1;
 VAR_1->skbfr = VAR_1->bfr2;
 FUNC_1(VAR_1->partial_hash, VAR_3);

 return 0;
}
