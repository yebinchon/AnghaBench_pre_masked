
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a6xx_gmu {scalar_t__ idle_level; int dev; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct a6xx_gmu*,int ) ;
 int FUNC_2 (struct a6xx_gmu*,int ) ;
 int FUNC_3 (struct a6xx_gmu*) ;
 int FUNC_4 (struct a6xx_gmu*,int ) ;
 int FUNC_5 (struct a6xx_gmu*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct a6xx_gmu *VAR_7)
{
 int VAR_8;


 FUNC_5(VAR_7, VAR_5, 0);


 if (VAR_7->idle_level < VAR_1)
  FUNC_3(VAR_7);


 FUNC_5(VAR_7, VAR_4, 1);

 VAR_8 = FUNC_2(VAR_7, VAR_2);
 FUNC_1(VAR_7, VAR_2);

 if (!VAR_8) {

  if (FUNC_4(VAR_7, VAR_6)
   != 0x0f) {
   FUNC_0(VAR_7->dev, "The GMU did not go into slumber\n");
   VAR_8 = -VAR_0;
  }
 }


 FUNC_5(VAR_7, VAR_3, 0);
 return VAR_8;
}
