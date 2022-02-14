
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_skcipher {int dummy; } ;
struct aesbs_xts_ctx {int tweak_tfm; int cts_tfm; } ;


 int FUNC_0 (struct crypto_skcipher*,int const*,unsigned int) ;
 int FUNC_1 (int ,int const*,unsigned int) ;
 struct aesbs_xts_ctx* FUNC_2 (struct crypto_skcipher*) ;
 int FUNC_3 (struct crypto_skcipher*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct crypto_skcipher *VAR_0, const u8 *VAR_1,
       unsigned int VAR_2)
{
 struct aesbs_xts_ctx *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_2 /= 2;
 VAR_4 = FUNC_1(VAR_3->cts_tfm, VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_1(VAR_3->tweak_tfm, VAR_1 + VAR_2, VAR_2);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
