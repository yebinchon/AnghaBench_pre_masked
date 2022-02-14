
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_aes_reqctx {scalar_t__ iv; } ;
struct omap_aes_ctx {int nonce; } ;
struct aead_request {int iv; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct omap_aes_reqctx* FUNC_0 (struct aead_request*) ;
 struct omap_aes_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct aead_request*) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 (struct aead_request*,int) ;

int FUNC_5(struct aead_request *VAR_2)
{
 struct omap_aes_ctx *VAR_3 = FUNC_1(FUNC_2(VAR_2));
 struct omap_aes_reqctx *VAR_4 = FUNC_0(VAR_2);

 FUNC_3(VAR_4->iv, VAR_3->nonce, 4);
 FUNC_3(VAR_4->iv + 4, VAR_2->iv, 8);
 return FUNC_4(VAR_2, VAR_0 | VAR_1);
}
