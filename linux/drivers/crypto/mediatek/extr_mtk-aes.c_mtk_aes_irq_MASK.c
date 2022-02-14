
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_cryp {int dev; } ;
struct mtk_aes_rec {int flags; int done_task; int id; struct mtk_cryp* cryp; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct mtk_cryp*,int ) ;
 int FUNC_6 (struct mtk_cryp*,int ,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_5, void *VAR_6)
{
 struct mtk_aes_rec *VAR_7 = (struct mtk_aes_rec *)VAR_6;
 struct mtk_cryp *VAR_8 = VAR_7->cryp;
 u32 VAR_9 = FUNC_5(VAR_8, FUNC_1(VAR_7->id));

 FUNC_6(VAR_8, FUNC_1(VAR_7->id), VAR_9);

 if (FUNC_4(VAR_0 & VAR_7->flags)) {
  FUNC_6(VAR_8, FUNC_0(VAR_7->id), VAR_2);
  FUNC_6(VAR_8, FUNC_2(VAR_7->id),
         VAR_4 | VAR_3);

  FUNC_7(&VAR_7->done_task);
 } else {
  FUNC_3(VAR_8->dev, "AES interrupt when no active requests.\n");
 }
 return VAR_1;
}
