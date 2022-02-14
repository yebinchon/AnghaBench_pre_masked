
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct cc_hash_ctx {int drvdata; } ;
struct ahash_request {int nbytes; } ;
struct ahash_req_ctx {int dummy; } ;


 struct ahash_req_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct device*,struct ahash_req_ctx*,struct cc_hash_ctx*) ;
 struct cc_hash_ctx* FUNC_2 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (struct device*,char*,int ) ;
 struct device* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct ahash_request *VAR_0)
{
 struct ahash_req_ctx *VAR_1 = FUNC_0(VAR_0);
 struct crypto_ahash *VAR_2 = FUNC_3(VAR_0);
 struct cc_hash_ctx *VAR_3 = FUNC_2(VAR_2);
 struct device *VAR_4 = FUNC_5(VAR_3->drvdata);

 FUNC_4(VAR_4, "===== init (%d) ====\n", VAR_0->nbytes);

 FUNC_1(VAR_4, VAR_1, VAR_3);

 return 0;
}
