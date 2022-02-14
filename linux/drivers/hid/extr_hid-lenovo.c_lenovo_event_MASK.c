
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int product; } ;
typedef int __s32 ;




 int FUNC_0 (struct hid_device*,struct hid_field*,struct hid_usage*,int ) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_0, struct hid_field *VAR_1,
  struct hid_usage *VAR_2, __s32 VAR_3)
{
 switch (VAR_0->product) {
 case 128:
 case 129:
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 default:
  return 0;
 }
}
