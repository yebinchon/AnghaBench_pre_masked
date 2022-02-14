
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecdh_ctx {int ndigits; } ;
struct crypto_kpp {int dummy; } ;


 int VAR_0 ;
 struct ecdh_ctx* FUNC_0 (struct crypto_kpp*) ;

__attribute__((used)) static unsigned int FUNC_1(struct crypto_kpp *VAR_1)
{
 struct ecdh_ctx *VAR_2 = FUNC_0(VAR_1);


 return VAR_2->ndigits << (VAR_0 + 1);
}
