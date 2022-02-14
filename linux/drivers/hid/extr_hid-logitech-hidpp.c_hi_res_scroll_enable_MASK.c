
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int wheel_multiplier; } ;
struct hidpp_device {int quirks; int hid_dev; TYPE_1__ vertical_wheel_counter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct hidpp_device*) ;
 int FUNC_2 (struct hidpp_device*,int,int*) ;
 int FUNC_3 (struct hidpp_device*,int*) ;
 int FUNC_4 (struct hidpp_device*,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct hidpp_device *VAR_2)
{
 int VAR_3;
 u8 VAR_4 = 1;

 if (VAR_2->quirks & VAR_1) {
  VAR_3 = FUNC_4(VAR_2, 0, 1, 0);
  if (VAR_3 == 0)
   VAR_3 = FUNC_3(VAR_2, &VAR_4);
 } else if (VAR_2->quirks & VAR_0) {
  VAR_3 = FUNC_2(VAR_2, 1,
          &VAR_4);
 } else {
  VAR_3 = FUNC_1(VAR_2);
  VAR_4 = 8;
 }
 if (VAR_3)
  return VAR_3;

 if (VAR_4 == 0)
  VAR_4 = 1;

 VAR_2->vertical_wheel_counter.wheel_multiplier = VAR_4;
 FUNC_0(VAR_2->hid_dev, "multiplier = %d\n", VAR_4);
 return 0;
}
