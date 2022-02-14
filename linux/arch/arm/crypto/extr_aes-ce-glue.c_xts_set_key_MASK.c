
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_skcipher {int dummy; } ;
struct crypto_aes_xts_ctx {int key2; int key1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int const*,unsigned int) ;
 struct crypto_aes_xts_ctx* FUNC_1 (struct crypto_skcipher*) ;
 int FUNC_2 (struct crypto_skcipher*,int ) ;
 int FUNC_3 (struct crypto_skcipher*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct crypto_skcipher *VAR_2, const u8 *VAR_3,
         unsigned int VAR_4)
{
 struct crypto_aes_xts_ctx *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;

 VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(&VAR_5->key1, VAR_3, VAR_4 / 2);
 if (!VAR_6)
  VAR_6 = FUNC_0(&VAR_5->key2, &VAR_3[VAR_4 / 2],
           VAR_4 / 2);
 if (!VAR_6)
  return 0;

 FUNC_2(VAR_2, VAR_0);
 return -VAR_1;
}
