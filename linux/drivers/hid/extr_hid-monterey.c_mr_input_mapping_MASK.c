
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
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_7, struct hid_input *VAR_8,
  struct hid_field *VAR_9, struct hid_usage *VAR_10,
  unsigned long **VAR_11, int *VAR_12)
{
 if ((VAR_10->hid & VAR_2) != VAR_0)
  return 0;

 switch (VAR_10->hid & VAR_1) {
 case 0x156: FUNC_0(VAR_6); break;
 case 0x157: FUNC_0(VAR_4); break;
 case 0x158: FUNC_0(VAR_3); break;
 case 0x15c: FUNC_0(VAR_5); break;
 default:
  return 0;
 }
 return 1;
}
