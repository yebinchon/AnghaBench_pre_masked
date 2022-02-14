
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct usb_device {int dummy; } ;
struct kovaplus_device {int * profile_buttons; int * profile_settings; int kovaplus_lock; } ;


 int FUNC_0 (struct usb_device*) ;
 int FUNC_1 (struct usb_device*,int *,int) ;
 int FUNC_2 (struct usb_device*,int *,int) ;
 int FUNC_3 (struct kovaplus_device*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct usb_device *VAR_0,
  struct kovaplus_device *VAR_1)
{
 int VAR_2, VAR_3;
 static uint VAR_4 = 70;

 FUNC_5(&VAR_1->kovaplus_lock);

 for (VAR_3 = 0; VAR_3 < 5; ++VAR_3) {
  FUNC_4(VAR_4);
  VAR_2 = FUNC_2(VAR_0,
    &VAR_1->profile_settings[VAR_3], VAR_3);
  if (VAR_2)
   return VAR_2;

  FUNC_4(VAR_4);
  VAR_2 = FUNC_1(VAR_0,
    &VAR_1->profile_buttons[VAR_3], VAR_3);
  if (VAR_2)
   return VAR_2;
 }

 FUNC_4(VAR_4);
 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;
 FUNC_3(VAR_1, VAR_2);

 return 0;
}
