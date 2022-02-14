
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gnss_serial {int dummy; } ;
typedef enum gnss_serial_pm_state { ____Placeholder_gnss_serial_pm_state } gnss_serial_pm_state ;


 int VAR_0 ;



 int FUNC_0 (struct gnss_serial*) ;
 int FUNC_1 (struct gnss_serial*) ;

__attribute__((used)) static int FUNC_2(struct gnss_serial *VAR_1,
    enum gnss_serial_pm_state VAR_2)
{
 switch (VAR_2) {
 case 130:
  return FUNC_0(VAR_1);
 case 129:
 case 128:
  return FUNC_1(VAR_1);
 }

 return -VAR_0;
}
