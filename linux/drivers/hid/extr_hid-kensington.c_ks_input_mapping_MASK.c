
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
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_5, struct hid_input *VAR_6,
  struct hid_field *VAR_7, struct hid_usage *VAR_8,
  unsigned long **VAR_9, int *VAR_10)
{
 if ((VAR_8->hid & VAR_4) != VAR_2)
  return 0;

 switch (VAR_8->hid & VAR_3) {
 case 0x01: FUNC_0(VAR_0); break;
 case 0x02: FUNC_0(VAR_1); break;
 default:
  return 0;
 }
 return 1;
}
