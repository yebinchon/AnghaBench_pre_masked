
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_skcipher {int dummy; } ;
struct chacha_ctx {int nrounds; int * key; } ;


 int FUNC_0 (int *) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 struct chacha_ctx* FUNC_1 (struct crypto_skcipher*) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static int FUNC_3(struct crypto_skcipher *VAR_2, const u8 *VAR_3,
    unsigned int VAR_4, int VAR_5)
{
 struct chacha_ctx *VAR_6 = FUNC_1(VAR_2);
 int VAR_7;

 if (VAR_4 != VAR_0)
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_6->key); VAR_7++)
  VAR_6->key[VAR_7] = FUNC_2(VAR_3 + VAR_7 * sizeof(u32));

 VAR_6->nrounds = VAR_5;
 return 0;
}
