
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devinfo_dev {int dd_state; } ;
typedef enum DeviceStatus { ____Placeholder_DeviceStatus } DeviceStatus ;





 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static enum DeviceStatus
FUNC_1(struct devinfo_dev *VAR_3)
{

 FUNC_0(VAR_3 != ((void*)0));

 switch (VAR_3->dd_state) {
 case 131:
 case 128:
  return (VAR_0);
 case 130:
 case 129:
  return (VAR_1);
 default:
  return (VAR_2);
 }
}
