
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct hid_usage {int code; int resolution_multiplier; int wheel_accumulated; } ;
typedef int __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct input_dev*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct hid_usage *VAR_4,
       struct input_dev *VAR_5,
       __s32 VAR_6)
{
 int VAR_7;
 int VAR_8, VAR_9;

 if (VAR_6 == 0)
  return;

 if (VAR_4->code == VAR_3)
  VAR_7 = VAR_2;
 else
  VAR_7 = VAR_1;







 VAR_8 = VAR_6 * 120/VAR_4->resolution_multiplier;

 VAR_4->wheel_accumulated += VAR_8;
 VAR_9 = VAR_4->wheel_accumulated/120;
 if (VAR_9)
  VAR_4->wheel_accumulated -= VAR_9 * 120;

 FUNC_0(VAR_5, VAR_0, VAR_7, VAR_9);
 FUNC_0(VAR_5, VAR_0, VAR_4->code, VAR_8);
}
