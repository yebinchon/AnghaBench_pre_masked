
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_device {int dummy; } ;
struct cp2112_usb_config_report {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hid_device*,int ,int *,int,int ) ;
 int FUNC_1 (struct hid_device*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_3,
     struct cp2112_usb_config_report *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_0, (u8 *)VAR_4, sizeof(*VAR_4),
        VAR_2);
 if (VAR_5 != sizeof(*VAR_4)) {
  FUNC_1(VAR_3, "error reading usb config: %d\n", VAR_5);
  if (VAR_5 < 0)
   return VAR_5;
  return -VAR_1;
 }

 return 0;
}
