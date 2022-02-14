
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_tfm {int crt_flags; } ;
struct crypto_sparc64_aes_ctx {int expanded_key_length; unsigned int key_length; int * key; int * ops; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const*,int *,unsigned int) ;
 struct crypto_sparc64_aes_ctx* FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_5, const u8 *VAR_6,
         unsigned int VAR_7)
{
 struct crypto_sparc64_aes_ctx *VAR_8 = FUNC_1(VAR_5);
 u32 *VAR_9 = &VAR_5->crt_flags;

 switch (VAR_7) {
 case 130:
  VAR_8->expanded_key_length = 0xb0;
  VAR_8->ops = &VAR_2;
  break;

 case 129:
  VAR_8->expanded_key_length = 0xd0;
  VAR_8->ops = &VAR_3;
  break;

 case 128:
  VAR_8->expanded_key_length = 0xf0;
  VAR_8->ops = &VAR_4;
  break;

 default:
  *VAR_9 |= VAR_0;
  return -VAR_1;
 }

 FUNC_0((const u32 *)VAR_6, &VAR_8->key[0], VAR_7);
 VAR_8->key_length = VAR_7;

 return 0;
}
