
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hidpp_report {int report_id; int device_index; } ;
struct hidpp_device {int very_long_report_length; int quirks; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 struct hidpp_device* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,int *,int) ;
 int FUNC_2 (struct hid_device*,int,int *,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_6,
    struct hidpp_report *VAR_7)
{
 struct hidpp_device *VAR_8 = FUNC_0(VAR_6);
 int VAR_9, VAR_10;

 switch (VAR_7->report_id) {
 case 129:
  VAR_9 = VAR_3;
  break;
 case 130:
  VAR_9 = VAR_2;
  break;
 case 128:
  VAR_9 = VAR_8->very_long_report_length;
  break;
 default:
  return -VAR_0;
 }





 VAR_7->device_index = 0xff;

 if (VAR_8->quirks & VAR_1) {
  VAR_10 = FUNC_1(VAR_6, (u8 *)VAR_7, VAR_9);
 } else {
  VAR_10 = FUNC_2(VAR_6, VAR_7->report_id,
   (u8 *)VAR_7, VAR_9, VAR_4,
   VAR_5);
 }

 return VAR_10 == VAR_9 ? 0 : -1;
}
