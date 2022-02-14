
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_sync_skcipher {int dummy; } ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct crypto_sync_skcipher* FUNC_0 (int ) ;
 int FUNC_1 (struct crypto_skcipher*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 struct crypto_skcipher* FUNC_3 (char const*,int *,int ,int ) ;
 int FUNC_4 (struct crypto_skcipher*) ;
 scalar_t__ FUNC_5 (struct crypto_skcipher*) ;
 int VAR_3 ;

struct crypto_sync_skcipher *FUNC_6(
    const char *VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct crypto_skcipher *VAR_7;


 VAR_6 |= VAR_0;

 VAR_7 = FUNC_3(VAR_4, &VAR_3, VAR_5, VAR_6);





 if (!FUNC_1(VAR_7) && FUNC_2(FUNC_5(VAR_7) >
        VAR_2)) {
  FUNC_4(VAR_7);
  return FUNC_0(-VAR_1);
 }

 return (struct crypto_sync_skcipher *)VAR_7;
}
