
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct usb_device {int dummy; } ;
struct TYPE_2__ {int startup_profile; } ;
struct kone_device {TYPE_1__ settings; int firmware_version; int * profiles; int kone_lock; } ;


 int FUNC_0 (struct usb_device*,int *) ;
 int FUNC_1 (struct usb_device*,int *,int) ;
 int FUNC_2 (struct usb_device*,TYPE_1__*) ;
 int FUNC_3 (struct kone_device*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct usb_device *VAR_0,
  struct kone_device *VAR_1)
{
 uint VAR_2;
 int VAR_3;

 FUNC_4(&VAR_1->kone_lock);

 for (VAR_2 = 0; VAR_2 < 5; ++VAR_2) {
  VAR_3 = FUNC_1(VAR_0, &VAR_1->profiles[VAR_2], VAR_2 + 1);
  if (VAR_3)
   return VAR_3;
 }

 VAR_3 = FUNC_2(VAR_0, &VAR_1->settings);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_0, &VAR_1->firmware_version);
 if (VAR_3)
  return VAR_3;

 FUNC_3(VAR_1, VAR_1->settings.startup_profile);

 return 0;
}
