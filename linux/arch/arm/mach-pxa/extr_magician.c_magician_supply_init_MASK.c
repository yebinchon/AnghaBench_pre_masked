
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2)
{
 int VAR_3 = -1;

 VAR_3 = FUNC_1(VAR_1, "Cable is AC charger");
 if (VAR_3) {
  FUNC_2("Cannot request AC/USB charger GPIO (%i)\n", VAR_3);
  goto err_ac;
 }

 VAR_3 = FUNC_1(VAR_0, "Cable inserted");
 if (VAR_3) {
  FUNC_2("Cannot request cable detection GPIO (%i)\n", VAR_3);
  goto err_usb;
 }

 return 0;

err_usb:
 FUNC_0(VAR_1);
err_ac:
 return VAR_3;
}
