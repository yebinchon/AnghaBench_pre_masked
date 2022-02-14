
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_11, struct hid_input *VAR_12,
  struct hid_field *VAR_13, struct hid_usage *VAR_14,
  unsigned long **VAR_15, int *VAR_16)
{
 if ((VAR_14->hid & VAR_3) == VAR_1) {
  switch (VAR_14->hid & VAR_2) {
  case 0x05a: FUNC_0(VAR_9); break;
  case 0x05b: FUNC_0(VAR_8); break;
  case 0x05c: FUNC_0(VAR_6); break;
  case 0x05d: FUNC_0(VAR_10); break;
  case 0x05e: FUNC_0(VAR_5); break;
  default:
   return 0;
  }
  return 1;
 }

 if ((VAR_14->hid & VAR_3) == VAR_0) {
  switch (VAR_14->hid & VAR_2) {
  case 0x0f6: FUNC_0(VAR_7); break;
  case 0x0fa: FUNC_0(VAR_4); break;
  default:
   return 0;
  }
  return 1;
 }

 return 0;
}
