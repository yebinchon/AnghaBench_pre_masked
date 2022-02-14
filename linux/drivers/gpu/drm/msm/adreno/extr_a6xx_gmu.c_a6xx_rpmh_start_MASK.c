
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct a6xx_gmu {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct a6xx_gmu*,int ,int,int,int,int) ;
 int FUNC_2 (struct a6xx_gmu*,int ,int,int) ;
 int FUNC_3 (struct a6xx_gmu*,int ,int) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct a6xx_gmu *VAR_6)
{
 int VAR_7;
 u32 VAR_8;

 FUNC_3(VAR_6, VAR_3, 1 << 1);

 FUNC_4();

 VAR_7 = FUNC_1(VAR_6, VAR_2, VAR_8,
  VAR_8 & (1 << 1), 100, 10000);
 if (VAR_7) {
  FUNC_0(VAR_6->dev, "Unable to power on the GPU RSC\n");
  return VAR_7;
 }

 VAR_7 = FUNC_1(VAR_6, VAR_5, VAR_8,
  !VAR_8, 100, 10000);

 if (VAR_7) {
  FUNC_0(VAR_6->dev, "GPU RSC sequence stuck while waking up the GPU\n");
  return VAR_7;
 }

 FUNC_3(VAR_6, VAR_3, 0);


 FUNC_3(VAR_6, VAR_4, 0xff000000);
 FUNC_2(VAR_6, VAR_1, 0xff, 0x20);


 FUNC_3(VAR_6, VAR_0, 1);
 return 0;
}
