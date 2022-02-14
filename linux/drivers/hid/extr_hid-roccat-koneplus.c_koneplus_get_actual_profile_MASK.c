
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct koneplus_actual_profile {int actual_profile; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_device*,int ,struct koneplus_actual_profile*,int ) ;

__attribute__((used)) static int FUNC_1(struct usb_device *VAR_2)
{
 struct koneplus_actual_profile VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0,
   &VAR_3, VAR_1);

 return VAR_4 ? VAR_4 : VAR_3.actual_profile;
}
