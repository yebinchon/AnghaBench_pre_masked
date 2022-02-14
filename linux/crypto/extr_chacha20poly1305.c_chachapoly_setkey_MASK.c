
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_aead {int dummy; } ;
struct chachapoly_ctx {unsigned int saltlen; int chacha; int salt; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct chachapoly_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int const*,unsigned int) ;
 int FUNC_7 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct crypto_aead *VAR_4, const u8 *VAR_5,
        unsigned int VAR_6)
{
 struct chachapoly_ctx *VAR_7 = FUNC_0(VAR_4);
 int VAR_8;

 if (VAR_6 != VAR_7->saltlen + VAR_0)
  return -VAR_3;

 VAR_6 -= VAR_7->saltlen;
 FUNC_7(VAR_7->salt, VAR_5 + VAR_6, VAR_7->saltlen);

 FUNC_3(VAR_7->chacha, VAR_1);
 FUNC_5(VAR_7->chacha, FUNC_1(VAR_4) &
            VAR_1);

 VAR_8 = FUNC_6(VAR_7->chacha, VAR_5, VAR_6);
 FUNC_2(VAR_4, FUNC_4(VAR_7->chacha) &
        VAR_2);
 return VAR_8;
}
