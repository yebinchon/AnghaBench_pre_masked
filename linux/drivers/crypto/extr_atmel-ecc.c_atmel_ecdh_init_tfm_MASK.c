
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_kpp {int dev; } ;
struct atmel_ecdh_ctx {struct crypto_kpp* fallback; struct crypto_kpp* client; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct crypto_kpp*) ;
 int FUNC_1 (struct crypto_kpp*) ;
 struct crypto_kpp* FUNC_2 () ;
 struct crypto_kpp* FUNC_3 (char const*,int ,int ) ;
 int FUNC_4 (struct crypto_kpp*) ;
 int FUNC_5 (struct crypto_kpp*,int ) ;
 int FUNC_6 (int *,char*,char const*,int) ;
 char* FUNC_7 (struct crypto_kpp*) ;
 struct atmel_ecdh_ctx* FUNC_8 (struct crypto_kpp*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct crypto_kpp *VAR_1)
{
 const char *VAR_2 = FUNC_7(VAR_1);
 struct crypto_kpp *VAR_3;
 struct atmel_ecdh_ctx *VAR_4 = FUNC_8(VAR_1);

 VAR_4->client = FUNC_2();
 if (FUNC_0(VAR_4->client)) {
  FUNC_9("tfm - i2c_client binding failed\n");
  return FUNC_1(VAR_4->client);
 }

 VAR_3 = FUNC_3(VAR_2, 0, VAR_0);
 if (FUNC_0(VAR_3)) {
  FUNC_6(&VAR_4->client->dev, "Failed to allocate transformation for '%s': %ld\n",
   VAR_2, FUNC_1(VAR_3));
  return FUNC_1(VAR_3);
 }

 FUNC_5(VAR_3, FUNC_4(VAR_1));
 VAR_4->fallback = VAR_3;

 return 0;
}
