
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_sha_rec {int dummy; } ;
struct mtk_cryp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtk_cryp*,struct mtk_sha_rec*,int) ;
 int FUNC_1 (struct mtk_cryp*,struct mtk_sha_rec*) ;

__attribute__((used)) static void FUNC_2(struct mtk_cryp *VAR_1,
        struct mtk_sha_rec *VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 != -VAR_0)
  FUNC_0(VAR_1, VAR_2, VAR_3);
}
