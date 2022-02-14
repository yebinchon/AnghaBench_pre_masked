
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (int ,char*) ;
 int VAR_0 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_1)
{
 FUNC_3(FUNC_5(FUNC_2(0), "Backlight"));
 VAR_0 = FUNC_7(1, "RX1950 LCD");
 if (FUNC_0(VAR_0)) {
  FUNC_4(VAR_1, "Unable to request PWM for LCD power!\n");
  return FUNC_1(VAR_0);
 }





 FUNC_6(VAR_0);

 FUNC_9(1);
 FUNC_8(1);

 return 0;
}
