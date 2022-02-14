
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anx78xx_platform_data {int gpiod_reset; int gpiod_pd; scalar_t__ dvdd10; } ;
struct anx78xx {int powered; int * map; struct anx78xx_platform_data pdata; } ;


 int FUNC_0 (char*,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct anx78xx *VAR_8)
{
 struct anx78xx_platform_data *VAR_9 = &VAR_8->pdata;
 int VAR_10;

 if (FUNC_1(VAR_8->powered))
  return;

 if (VAR_9->dvdd10) {
  VAR_10 = FUNC_5(VAR_9->dvdd10);
  if (VAR_10) {
   FUNC_0("Failed to enable DVDD10 regulator: %d\n",
      VAR_10);
   return;
  }

  FUNC_6(1000, 2000);
 }

 FUNC_4(VAR_9->gpiod_reset, 1);
 FUNC_6(1000, 2000);

 FUNC_4(VAR_9->gpiod_pd, 0);
 FUNC_6(1000, 2000);

 FUNC_4(VAR_9->gpiod_reset, 0);


 FUNC_3(VAR_8->map[VAR_0], VAR_4,
    VAR_2 | VAR_1 | VAR_7 | VAR_3);
 FUNC_2(VAR_8->map[VAR_0], VAR_4,
      VAR_5 | VAR_6);

 VAR_8->powered = 1;
}
