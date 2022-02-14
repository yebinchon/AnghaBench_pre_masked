
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct a6xx_gmu {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct a6xx_gmu*,int ,int,int,int,int) ;
 int FUNC_2 (struct a6xx_gmu*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct a6xx_gmu *VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 FUNC_2(VAR_2, VAR_0, 1);

 VAR_3 = FUNC_1(VAR_2, VAR_1,
  VAR_4, VAR_4 & (1 << 16), 100, 10000);
 if (VAR_3)
  FUNC_0(VAR_2->dev, "Unable to power off the GPU RSC\n");

 FUNC_2(VAR_2, VAR_0, 0);
}
