
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_kpp {int dummy; } ;
struct atmel_ecdh_ctx {int client; int fallback; int public_key; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct atmel_ecdh_ctx* FUNC_3 (struct crypto_kpp*) ;

__attribute__((used)) static void FUNC_4(struct crypto_kpp *VAR_0)
{
 struct atmel_ecdh_ctx *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(VAR_1->public_key);
 FUNC_1(VAR_1->fallback);
 FUNC_0(VAR_1->client);
}
