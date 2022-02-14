
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {int hid; } ;
struct hid_input {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;



 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct hid_device *VAR_1,
  struct hid_input *VAR_2,
  struct hid_field *VAR_3, struct hid_usage *VAR_4,
  unsigned long **VAR_5, int *VAR_6)
{






 switch (VAR_4->hid & VAR_0) {
 case 128:
  return -1;
 }
 return 0;
}
