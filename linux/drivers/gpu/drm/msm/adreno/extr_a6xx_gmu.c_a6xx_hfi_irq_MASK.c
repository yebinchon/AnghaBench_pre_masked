
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct a6xx_gmu {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct a6xx_gmu*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct a6xx_gmu*,int ) ;
 int FUNC_3 (struct a6xx_gmu*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct a6xx_gmu *VAR_6 = VAR_5;
 u32 VAR_7;

 VAR_7 = FUNC_2(VAR_6, VAR_3);
 FUNC_3(VAR_6, VAR_2, VAR_7);

 if (VAR_7 & VAR_0) {
  FUNC_1(VAR_6->dev, "GMU firmware fault\n");

  FUNC_0(VAR_6);
 }

 return VAR_1;
}
