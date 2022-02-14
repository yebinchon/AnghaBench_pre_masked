
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct a6xx_gmu {int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct a6xx_gmu*,int ,int,int,int,int) ;
 int FUNC_2 (struct a6xx_gmu*,int ) ;
 int FUNC_3 (struct a6xx_gmu*,int ,int ,int) ;
 int FUNC_4 (struct a6xx_gmu*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct a6xx_gmu *VAR_3)
{
 u32 VAR_4;
 int VAR_5;


 FUNC_3(VAR_3, VAR_2, 0, (1 << 11));

 FUNC_4(VAR_3, VAR_0, 0x778001);

 VAR_5 = FUNC_1(VAR_3, VAR_1, VAR_4,
  (VAR_4 & 0x04), 100, 10000);

 if (VAR_5)
  FUNC_0(VAR_3->dev, "failed to power off SPTPRAC: 0x%x\n",
   FUNC_2(VAR_3, VAR_1));
}
