
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct a6xx_gmu*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct a6xx_gmu*,int ) ;
 int FUNC_3 (struct a6xx_gmu*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_7, void *VAR_8)
{
 struct a6xx_gmu *VAR_9 = VAR_8;
 u32 VAR_10;

 VAR_10 = FUNC_2(VAR_9, VAR_6);
 FUNC_3(VAR_9, VAR_5, VAR_10);

 if (VAR_10 & VAR_2) {
  FUNC_1(VAR_9->dev, "GMU watchdog expired\n");

  FUNC_0(VAR_9);
 }

 if (VAR_10 & VAR_1)
  FUNC_1(VAR_9->dev, "GMU AHB bus error\n");

 if (VAR_10 & VAR_0)
  FUNC_1(VAR_9->dev, "GMU fence error: 0x%x\n",
   FUNC_2(VAR_9, VAR_4));

 return VAR_3;
}
