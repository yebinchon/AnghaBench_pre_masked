
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_aead {int dummy; } ;
struct cc_aead_ctx {int ctr_nonce; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_aead*,int const*,unsigned int) ;
 struct cc_aead_ctx* FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (int ,int const*,int) ;

__attribute__((used)) static int FUNC_3(struct crypto_aead *VAR_1, const u8 *VAR_2,
     unsigned int VAR_3)
{
 struct cc_aead_ctx *VAR_4 = FUNC_1(VAR_1);

 if (VAR_3 < 3)
  return -VAR_0;

 VAR_3 -= 3;
 FUNC_2(VAR_4->ctr_nonce, VAR_2 + VAR_3, 3);

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
