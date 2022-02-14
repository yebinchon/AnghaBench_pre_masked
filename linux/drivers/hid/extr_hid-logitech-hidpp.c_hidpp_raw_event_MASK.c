
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hidpp_device {int very_long_report_length; int quirks; } ;
struct hid_report {int dummy; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct hid_device*,char*,int) ;
 struct hidpp_device* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hidpp_device*,int*,int) ;
 int FUNC_3 (struct hid_device*,int*,int) ;
 int FUNC_4 (struct hid_device*,int*,int) ;

__attribute__((used)) static int FUNC_5(struct hid_device *VAR_4, struct hid_report *VAR_5,
  u8 *VAR_6, int VAR_7)
{
 struct hidpp_device *VAR_8 = FUNC_1(VAR_4);
 int VAR_9 = 0;

 if (!VAR_8)
  return 0;


 switch (VAR_6[0]) {
 case 128:
  if (VAR_7 != VAR_8->very_long_report_length) {
   FUNC_0(VAR_4, "received hid++ report of bad size (%d)",
    VAR_7);
   return 1;
  }
  VAR_9 = FUNC_2(VAR_8, VAR_6, VAR_7);
  break;
 case 130:
  if (VAR_7 != VAR_2) {
   FUNC_0(VAR_4, "received hid++ report of bad size (%d)",
    VAR_7);
   return 1;
  }
  VAR_9 = FUNC_2(VAR_8, VAR_6, VAR_7);
  break;
 case 129:
  if (VAR_7 != VAR_3) {
   FUNC_0(VAR_4, "received hid++ report of bad size (%d)",
    VAR_7);
   return 1;
  }
  VAR_9 = FUNC_2(VAR_8, VAR_6, VAR_7);
  break;
 }



 if (VAR_9 != 0)
  return VAR_9;

 if (VAR_8->quirks & VAR_1)
  return FUNC_4(VAR_4, VAR_6, VAR_7);
 else if (VAR_8->quirks & VAR_0)
  return FUNC_3(VAR_4, VAR_6, VAR_7);

 return 0;
}
