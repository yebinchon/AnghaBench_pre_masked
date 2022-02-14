
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct des_ctx {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_request {int info; } ;


 int VAR_0 ;
 struct des_ctx* FUNC_0 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_1 (struct ablkcipher_request*) ;
 int FUNC_2 (struct des_ctx*,struct ablkcipher_request*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ablkcipher_request *VAR_1)
{
    struct crypto_ablkcipher *VAR_2 = FUNC_1(VAR_1);
    struct des_ctx *VAR_3 = FUNC_0(VAR_2);

    return FUNC_2(VAR_3, VAR_1, VAR_1->info, VAR_0, 0);

}
