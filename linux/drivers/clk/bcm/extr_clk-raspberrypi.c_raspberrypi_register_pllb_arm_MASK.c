
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raspberrypi_clk {int pllb_arm; int dev; int pllb_arm_lookup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*,int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,char*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct raspberrypi_clk *VAR_3)
{
 VAR_3->pllb_arm = FUNC_2(VAR_3->dev,
    "pllb_arm", "pllb",
    VAR_1 | VAR_0,
    1, 2);
 if (FUNC_0(VAR_3->pllb_arm)) {
  FUNC_5(VAR_3->dev, "Failed to initialize pllb_arm\n");
  return FUNC_1(VAR_3->pllb_arm);
 }

 VAR_3->pllb_arm_lookup = FUNC_4(VAR_3->pllb_arm, ((void*)0), "cpu0");
 if (!VAR_3->pllb_arm_lookup) {
  FUNC_5(VAR_3->dev, "Failed to initialize pllb_arm_lookup\n");
  FUNC_3(VAR_3->pllb_arm);
  return -VAR_2;
 }

 return 0;
}
