
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_field {int* value; int logical_minimum; int logical_maximum; int physical_minimum; int physical_maximum; scalar_t__ unit_exponent; } ;
struct hid_device {int dummy; } ;
typedef int __s32 ;


 int FUNC_0 (struct hid_device*,char*,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_0,
         struct hid_field *VAR_1)
{
 int VAR_2;
 __s32 VAR_3 = *VAR_1->value;
 __s32 VAR_4 = VAR_1->logical_minimum;
 __s32 VAR_5 = VAR_1->logical_maximum;
 __s32 VAR_6 = VAR_1->physical_minimum;
 __s32 VAR_7 = VAR_1->physical_maximum;
 if (VAR_5 - VAR_4 == 0)
  return 1;




 VAR_2 = ((VAR_3 - VAR_4)/(VAR_5 - VAR_4) * (VAR_7 - VAR_6) + VAR_6);
 if (FUNC_1(VAR_1->unit_exponent != 0)) {
  FUNC_0(VAR_0,
    "unsupported Resolution Multiplier unit exponent %d\n",
    VAR_1->unit_exponent);
 }


 if (FUNC_1(VAR_2 == 0 || VAR_2 > 255 || VAR_2 < -255)) {
  FUNC_0(VAR_0, "unsupported Resolution Multiplier %d\n", VAR_2);
  VAR_2 = 1;
 }

 return VAR_2;
}
