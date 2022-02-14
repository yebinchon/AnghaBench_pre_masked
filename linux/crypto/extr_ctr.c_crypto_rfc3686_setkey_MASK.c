
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_skcipher {int dummy; } ;
struct crypto_rfc3686_ctx {int nonce; struct crypto_skcipher* child; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct crypto_skcipher*,int) ;
 struct crypto_rfc3686_ctx* FUNC_1 (struct crypto_skcipher*) ;
 int FUNC_2 (struct crypto_skcipher*) ;
 int FUNC_3 (struct crypto_skcipher*,int) ;
 int FUNC_4 (struct crypto_skcipher*,int const*,unsigned int) ;
 int FUNC_5 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct crypto_skcipher *VAR_4,
     const u8 *VAR_5, unsigned int VAR_6)
{
 struct crypto_rfc3686_ctx *VAR_7 = FUNC_1(VAR_4);
 struct crypto_skcipher *VAR_8 = VAR_7->child;
 int VAR_9;


 if (VAR_6 < VAR_2)
  return -VAR_3;

 FUNC_5(VAR_7->nonce, VAR_5 + (VAR_6 - VAR_2),
        VAR_2);

 VAR_6 -= VAR_2;

 FUNC_0(VAR_8, VAR_0);
 FUNC_3(VAR_8, FUNC_2(VAR_4) &
      VAR_0);
 VAR_9 = FUNC_4(VAR_8, VAR_5, VAR_6);
 FUNC_3(VAR_4, FUNC_2(VAR_8) &
       VAR_1);

 return VAR_9;
}
