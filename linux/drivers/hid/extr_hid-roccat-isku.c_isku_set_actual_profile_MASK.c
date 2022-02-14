
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct isku_actual_profile {int size; int actual_profile; int command; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_device*,int ,struct isku_actual_profile*,int) ;

__attribute__((used)) static int FUNC_1(struct usb_device *VAR_1, int VAR_2)
{
 struct isku_actual_profile VAR_3;

 VAR_3.command = VAR_0;
 VAR_3.size = sizeof(struct isku_actual_profile);
 VAR_3.actual_profile = VAR_2;
 return FUNC_0(VAR_1,
   VAR_0, &VAR_3,
   sizeof(struct isku_actual_profile));
}
