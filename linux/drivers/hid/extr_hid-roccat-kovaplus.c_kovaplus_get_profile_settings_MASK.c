
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct usb_device {int dummy; } ;
struct kovaplus_profile_settings {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usb_device*,int ,int ) ;
 int FUNC_1 (struct usb_device*,int ,struct kovaplus_profile_settings*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_3,
  struct kovaplus_profile_settings *VAR_4, uint VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_5,
   VAR_1);
 if (VAR_6)
  return VAR_6;

 return FUNC_1(VAR_3, VAR_0,
   VAR_4, VAR_2);
}
