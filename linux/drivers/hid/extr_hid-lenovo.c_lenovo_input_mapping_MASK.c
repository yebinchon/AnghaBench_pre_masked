
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {int dummy; } ;
struct hid_input {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int product; } ;
 int FUNC_0 (struct hid_device*,struct hid_input*,struct hid_field*,struct hid_usage*,unsigned long**,int*) ;
 int FUNC_1 (struct hid_device*,struct hid_input*,struct hid_field*,struct hid_usage*,unsigned long**,int*) ;
 int FUNC_2 (struct hid_device*,struct hid_input*,struct hid_field*,struct hid_usage*,unsigned long**,int*) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_0,
  struct hid_input *VAR_1, struct hid_field *VAR_2,
  struct hid_usage *VAR_3, unsigned long **VAR_4, int *VAR_5)
{
 switch (VAR_0->product) {
 case 128:
  return FUNC_2(VAR_0, VAR_1, VAR_2,
       VAR_3, VAR_4, VAR_5);
 case 130:
 case 131:
  return FUNC_0(VAR_0, VAR_1, VAR_2,
       VAR_3, VAR_4, VAR_5);
 case 134:
 case 132:
 case 133:
 case 136:
 case 135:
 case 129:
  return FUNC_1(VAR_0, VAR_1, VAR_2,
       VAR_3, VAR_4, VAR_5);
 default:
  return 0;
 }
}
