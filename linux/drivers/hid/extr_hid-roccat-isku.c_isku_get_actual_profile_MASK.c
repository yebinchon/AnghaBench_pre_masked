
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct isku_actual_profile {int actual_profile; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_device*,int ,struct isku_actual_profile*,int) ;

__attribute__((used)) static int FUNC_1(struct usb_device *VAR_1)
{
 struct isku_actual_profile VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0,
   &VAR_2, sizeof(struct isku_actual_profile));
 return VAR_3 ? VAR_3 : VAR_2.actual_profile;
}
