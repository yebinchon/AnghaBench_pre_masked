
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_cryp {int dummy; } ;
struct mtk_aes_rec {int (* resume ) (struct mtk_cryp*,struct mtk_aes_rec*) ;struct mtk_cryp* cryp; } ;


 int FUNC_0 (struct mtk_cryp*,struct mtk_aes_rec*) ;
 int FUNC_1 (struct mtk_cryp*,struct mtk_aes_rec*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0)
{
 struct mtk_aes_rec *VAR_1 = (struct mtk_aes_rec *)VAR_0;
 struct mtk_cryp *VAR_2 = VAR_1->cryp;

 FUNC_0(VAR_2, VAR_1);
 VAR_1->resume(VAR_2, VAR_1);
}
