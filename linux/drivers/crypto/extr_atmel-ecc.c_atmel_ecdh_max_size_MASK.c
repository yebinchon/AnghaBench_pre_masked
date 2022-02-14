
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_kpp {int dummy; } ;
struct atmel_ecdh_ctx {scalar_t__ fallback; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 struct atmel_ecdh_ctx* FUNC_1 (struct crypto_kpp*) ;

__attribute__((used)) static unsigned int FUNC_2(struct crypto_kpp *VAR_1)
{
 struct atmel_ecdh_ctx *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->fallback)
  return FUNC_0(VAR_2->fallback);






 return VAR_0;
}
