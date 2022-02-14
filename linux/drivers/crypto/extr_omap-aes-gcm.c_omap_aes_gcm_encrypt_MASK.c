
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_aes_reqctx {int iv; } ;
struct aead_request {int iv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct omap_aes_reqctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct aead_request*,int) ;

int FUNC_3(struct aead_request *VAR_3)
{
 struct omap_aes_reqctx *VAR_4 = FUNC_0(VAR_3);

 FUNC_1(VAR_4->iv, VAR_3->iv, VAR_2);
 return FUNC_2(VAR_3, VAR_0 | VAR_1);
}
