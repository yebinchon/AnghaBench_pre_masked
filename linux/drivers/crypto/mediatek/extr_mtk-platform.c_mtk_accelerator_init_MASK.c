
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_cryp {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mtk_cryp*,int) ;
 int FUNC_2 (struct mtk_cryp*) ;

__attribute__((used)) static int FUNC_3(struct mtk_cryp *VAR_1)
{
 int VAR_2, VAR_3;


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  if (VAR_3) {
   FUNC_0(VAR_1->dev, "Failed to initialize AIC.\n");
   return VAR_3;
  }
 }


 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3) {
  FUNC_0(VAR_1->dev, "Failed to configure packet engine.\n");
  return VAR_3;
 }

 return 0;
}
