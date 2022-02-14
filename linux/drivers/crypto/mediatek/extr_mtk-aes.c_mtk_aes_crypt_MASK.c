
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mtk_cryp {int dummy; } ;
struct mtk_aes_reqctx {int mode; } ;
struct mtk_aes_base_ctx {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_request {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mtk_aes_reqctx* FUNC_0 (struct ablkcipher_request*) ;
 struct mtk_aes_base_ctx* FUNC_1 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_2 (struct ablkcipher_request*) ;
 struct mtk_cryp* FUNC_3 (struct mtk_aes_base_ctx*) ;
 int FUNC_4 (struct mtk_cryp*,int,int *) ;

__attribute__((used)) static int FUNC_5(struct ablkcipher_request *VAR_2, u64 VAR_3)
{
 struct crypto_ablkcipher *VAR_4 = FUNC_2(VAR_2);
 struct mtk_aes_base_ctx *VAR_5 = FUNC_1(VAR_4);
 struct mtk_aes_reqctx *VAR_6;
 struct mtk_cryp *VAR_7;

 VAR_7 = FUNC_3(VAR_5);
 if (!VAR_7)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_2);
 VAR_6->mode = VAR_3;

 return FUNC_4(VAR_7, !(VAR_3 & VAR_0),
        &VAR_2->base);
}
