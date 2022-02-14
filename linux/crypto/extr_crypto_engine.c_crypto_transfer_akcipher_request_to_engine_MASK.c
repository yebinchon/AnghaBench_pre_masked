
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_engine {int dummy; } ;
struct akcipher_request {int base; } ;


 int FUNC_0 (struct crypto_engine*,int *) ;

int FUNC_1(struct crypto_engine *VAR_0,
            struct akcipher_request *VAR_1)
{
 return FUNC_0(VAR_0, &VAR_1->base);
}
