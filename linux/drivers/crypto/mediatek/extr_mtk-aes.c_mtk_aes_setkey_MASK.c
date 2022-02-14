
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mtk_aes_base_ctx {int key; int keylen; int keymode; } ;
struct crypto_ablkcipher {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct mtk_aes_base_ctx* FUNC_1 (struct crypto_ablkcipher*) ;
 int FUNC_2 (struct crypto_ablkcipher*,int ) ;
 int FUNC_3 (int ,int const*,int ) ;

__attribute__((used)) static int FUNC_4(struct crypto_ablkcipher *VAR_5,
     const u8 *VAR_6, u32 VAR_7)
{
 struct mtk_aes_base_ctx *VAR_8 = FUNC_1(VAR_5);

 switch (VAR_7) {
 case 130:
  VAR_8->keymode = VAR_0;
  break;
 case 129:
  VAR_8->keymode = VAR_1;
  break;
 case 128:
  VAR_8->keymode = VAR_2;
  break;

 default:
  FUNC_2(VAR_5, VAR_3);
  return -VAR_4;
 }

 VAR_8->keylen = FUNC_0(VAR_7);
 FUNC_3(VAR_8->key, (const u32 *)VAR_6, VAR_7);

 return 0;
}
