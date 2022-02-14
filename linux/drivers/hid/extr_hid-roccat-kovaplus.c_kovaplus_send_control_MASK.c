
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct usb_device {int dummy; } ;
struct roccat_common2_control {int value; int request; int command; } ;
typedef enum kovaplus_control_requests { ____Placeholder_kovaplus_control_requests } kovaplus_control_requests ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_device*,int ,struct roccat_common2_control*,int) ;

__attribute__((used)) static int FUNC_1(struct usb_device *VAR_4, uint VAR_5,
  enum kovaplus_control_requests VAR_6)
{
 int VAR_7;
 struct roccat_common2_control VAR_8;

 if ((VAR_6 == VAR_2 ||
   VAR_6 == VAR_1) &&
   VAR_5 > 4)
  return -VAR_0;

 VAR_8.command = VAR_3;
 VAR_8.value = VAR_5;
 VAR_8.request = VAR_6;

 VAR_7 = FUNC_0(VAR_4, VAR_3,
   &VAR_8, sizeof(struct roccat_common2_control));

 return VAR_7;
}
