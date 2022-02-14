
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidpp_scroll_counter {scalar_t__ wheel_multiplier; } ;
struct hidpp_device {int quirks; int * input; struct hidpp_scroll_counter vertical_wheel_counter; } ;
struct hid_usage {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;
typedef int __s32 ;


 int VAR_0 ;
 struct hidpp_device* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (int *,struct hidpp_scroll_counter*,int ) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_1, struct hid_field *VAR_2,
 struct hid_usage *VAR_3, __s32 VAR_4)
{



 struct hidpp_device *VAR_5 = FUNC_0(VAR_1);
 struct hidpp_scroll_counter *VAR_6;

 if (!VAR_5)
  return 0;

 VAR_6 = &VAR_5->vertical_wheel_counter;





 if (!(VAR_5->quirks & VAR_0) || VAR_4 == 0
     || VAR_5->input == ((void*)0) || VAR_6->wheel_multiplier == 0)
  return 0;

 FUNC_1(VAR_5->input, VAR_6, VAR_4);
 return 1;
}
