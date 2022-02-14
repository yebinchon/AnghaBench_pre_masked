
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {int hid; } ;
struct hid_input {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_8, struct hid_input *VAR_9,
  struct hid_field *VAR_10, struct hid_usage *VAR_11,
  unsigned long **VAR_12, int *VAR_13)
{
 switch (VAR_11->hid & VAR_1) {
 case 128:
  switch (VAR_11->hid & VAR_0) {

  case 0x3d: FUNC_0(VAR_6); break;

  case 0x3e: FUNC_0(VAR_7); break;

  case 0x41: FUNC_0(VAR_4); break;

  case 0x42: FUNC_0(VAR_5); break;
  default:
   return 0;
  }
  break;
 case 129:
  switch (VAR_11->hid & VAR_0) {

  case 0x083: FUNC_0(VAR_2); break;

  case 0x209: FUNC_0(VAR_3); break;
  default:
   return 0;
  }
  break;
 default:
  return 0;
 }



 return 1;
}
