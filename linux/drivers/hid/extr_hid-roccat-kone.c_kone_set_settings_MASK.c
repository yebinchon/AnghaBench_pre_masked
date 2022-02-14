
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct kone_settings {int dummy; } ;


 int FUNC_0 (struct usb_device*) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_device*,int ,struct kone_settings const*,int) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_1,
  struct kone_settings const *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0,
   VAR_2, sizeof(struct kone_settings));
 if (VAR_3)
  return VAR_3;
 return FUNC_0(VAR_1);
}
