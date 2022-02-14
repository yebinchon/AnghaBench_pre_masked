
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_ahash {int dummy; } ;
struct crypt_config {int authenc_key; int key_mac_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct crypto_ahash*) ;
 int FUNC_1 (struct crypto_ahash*) ;
 int FUNC_2 (struct crypt_config*) ;
 int FUNC_3 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (struct crypto_ahash*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ) ;
 char* FUNC_8 (int,int ) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char*) ;

__attribute__((used)) static int FUNC_12(struct crypt_config *VAR_3, char *VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7 = ((void*)0);
 struct crypto_ahash *VAR_8;

 if (!FUNC_11(VAR_4, "authenc("))
  return 0;

 VAR_5 = FUNC_9(VAR_4, '(');
 VAR_6 = FUNC_9(VAR_4, ',');
 if (!VAR_5 || !VAR_6 || ++VAR_5 > VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_8(VAR_6 - VAR_5 + 1, VAR_2);
 if (!VAR_7)
  return -VAR_1;
 FUNC_10(VAR_7, VAR_5, VAR_6 - VAR_5);

 VAR_8 = FUNC_4(VAR_7, 0, 0);
 FUNC_6(VAR_7);

 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_3->key_mac_size = FUNC_3(VAR_8);
 FUNC_5(VAR_8);

 VAR_3->authenc_key = FUNC_7(FUNC_2(VAR_3), VAR_2);
 if (!VAR_3->authenc_key)
  return -VAR_1;

 return 0;
}
