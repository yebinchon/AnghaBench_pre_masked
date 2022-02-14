
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mtk_cryp {int dummy; } ;
struct mtk_aes_reqctx {int mode; } ;
struct mtk_aes_gcm_ctx {scalar_t__ textlen; scalar_t__ authsize; } ;
struct mtk_aes_base_ctx {int dummy; } ;
struct aead_request {int base; int assoclen; scalar_t__ cryptlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mtk_aes_reqctx* FUNC_0 (struct aead_request*) ;
 struct mtk_aes_base_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct aead_request*) ;
 struct mtk_cryp* FUNC_3 (struct mtk_aes_base_ctx*) ;
 struct mtk_aes_gcm_ctx* FUNC_4 (struct mtk_aes_base_ctx*) ;
 int FUNC_5 (struct mtk_cryp*,int,int *) ;

__attribute__((used)) static int FUNC_6(struct aead_request *VAR_4, u64 VAR_5)
{
 struct mtk_aes_base_ctx *VAR_6 = FUNC_1(FUNC_2(VAR_4));
 struct mtk_aes_gcm_ctx *VAR_7 = FUNC_4(VAR_6);
 struct mtk_aes_reqctx *VAR_8 = FUNC_0(VAR_4);
 struct mtk_cryp *VAR_9;
 bool VAR_10 = !!(VAR_5 & VAR_0);

 VAR_9 = FUNC_3(VAR_6);
 if (!VAR_9)
  return -VAR_3;


 VAR_7->textlen = VAR_4->cryptlen - (VAR_10 ? 0 : VAR_7->authsize);


 if (!VAR_7->textlen && !VAR_4->assoclen)
  return -VAR_2;

 VAR_8->mode = VAR_1 | VAR_5;

 return FUNC_5(VAR_9, VAR_10, &VAR_4->base);
}
