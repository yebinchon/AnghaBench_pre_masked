
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct roccat_common2_control {int value; int request; int command; } ;
typedef enum pyra_control_requests { ____Placeholder_pyra_control_requests } pyra_control_requests ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_device*,int ,struct roccat_common2_control*,int) ;

__attribute__((used)) static int FUNC_1(struct usb_device *VAR_4, int VAR_5,
  enum pyra_control_requests VAR_6)
{
 struct roccat_common2_control VAR_7;

 if ((VAR_6 == VAR_2 ||
   VAR_6 == VAR_1) &&
   (VAR_5 < 0 || VAR_5 > 4))
  return -VAR_0;

 VAR_7.command = VAR_3;
 VAR_7.value = VAR_5;
 VAR_7.request = VAR_6;

 return FUNC_0(VAR_4, VAR_3,
   &VAR_7, sizeof(struct roccat_common2_control));
}
