
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_sync_skcipher {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct cryptd_skcipher_ctx {struct crypto_sync_skcipher* child; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cryptd_skcipher_ctx* FUNC_0 (struct crypto_skcipher*) ;
 int FUNC_1 (struct crypto_skcipher*) ;
 int FUNC_2 (struct crypto_skcipher*,int) ;
 int FUNC_3 (struct crypto_sync_skcipher*,int) ;
 int FUNC_4 (struct crypto_sync_skcipher*) ;
 int FUNC_5 (struct crypto_sync_skcipher*,int) ;
 int FUNC_6 (struct crypto_sync_skcipher*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct crypto_skcipher *VAR_2,
      const u8 *VAR_3, unsigned int VAR_4)
{
 struct cryptd_skcipher_ctx *VAR_5 = FUNC_0(VAR_2);
 struct crypto_sync_skcipher *VAR_6 = VAR_5->child;
 int VAR_7;

 FUNC_3(VAR_6, VAR_0);
 FUNC_5(VAR_6,
           FUNC_1(VAR_2) &
      VAR_0);
 VAR_7 = FUNC_6(VAR_6, VAR_3, VAR_4);
 FUNC_2(VAR_2,
      FUNC_4(VAR_6) &
       VAR_1);
 return VAR_7;
}
