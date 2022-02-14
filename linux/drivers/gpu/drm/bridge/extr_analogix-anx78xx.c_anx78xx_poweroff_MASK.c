
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anx78xx_platform_data {scalar_t__ dvdd10; int gpiod_pd; int gpiod_reset; } ;
struct anx78xx {int powered; struct anx78xx_platform_data pdata; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct anx78xx *VAR_0)
{
 struct anx78xx_platform_data *VAR_1 = &VAR_0->pdata;
 int VAR_2;

 if (FUNC_1(!VAR_0->powered))
  return;

 FUNC_2(VAR_1->gpiod_reset, 1);
 FUNC_4(1000, 2000);

 FUNC_2(VAR_1->gpiod_pd, 1);
 FUNC_4(1000, 2000);

 if (VAR_1->dvdd10) {
  VAR_2 = FUNC_3(VAR_1->dvdd10);
  if (VAR_2) {
   FUNC_0("Failed to disable DVDD10 regulator: %d\n",
      VAR_2);
   return;
  }

  FUNC_4(1000, 2000);
 }

 VAR_0->powered = 0;
}
