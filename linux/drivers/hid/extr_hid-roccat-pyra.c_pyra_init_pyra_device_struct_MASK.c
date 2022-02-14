
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct pyra_settings {int startup_profile; } ;
struct pyra_device {int * profile_settings; int pyra_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pyra_device*,int ) ;
 int FUNC_2 (struct usb_device*,int *,int) ;
 int FUNC_3 (struct usb_device*,struct pyra_settings*) ;

__attribute__((used)) static int FUNC_4(struct usb_device *VAR_0,
  struct pyra_device *VAR_1)
{
 struct pyra_settings VAR_2;
 int VAR_3, VAR_4;

 FUNC_0(&VAR_1->pyra_lock);

 VAR_3 = FUNC_3(VAR_0, &VAR_2);
 if (VAR_3)
  return VAR_3;

 for (VAR_4 = 0; VAR_4 < 5; ++VAR_4) {
  VAR_3 = FUNC_2(VAR_0,
    &VAR_1->profile_settings[VAR_4], VAR_4);
  if (VAR_3)
   return VAR_3;
 }

 FUNC_1(VAR_1, VAR_2.startup_profile);

 return 0;
}
