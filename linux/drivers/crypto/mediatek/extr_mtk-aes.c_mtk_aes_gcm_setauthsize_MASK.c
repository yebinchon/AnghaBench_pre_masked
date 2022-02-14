
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_aes_gcm_ctx {int authsize; } ;
struct mtk_aes_base_ctx {int dummy; } ;
struct crypto_aead {int dummy; } ;


 int VAR_0 ;
 struct mtk_aes_base_ctx* FUNC_0 (struct crypto_aead*) ;
 struct mtk_aes_gcm_ctx* FUNC_1 (struct mtk_aes_base_ctx*) ;

__attribute__((used)) static int FUNC_2(struct crypto_aead *VAR_1,
       u32 VAR_2)
{
 struct mtk_aes_base_ctx *VAR_3 = FUNC_0(VAR_1);
 struct mtk_aes_gcm_ctx *VAR_4 = FUNC_1(VAR_3);


 switch (VAR_2) {
 case 8:
 case 12:
 case 16:
  break;
 default:
  return -VAR_0;
 }

 VAR_4->authsize = VAR_2;
 return 0;
}
