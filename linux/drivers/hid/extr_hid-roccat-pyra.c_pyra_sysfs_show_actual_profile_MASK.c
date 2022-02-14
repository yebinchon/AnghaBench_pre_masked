
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct pyra_settings {int startup_profile; } ;
struct pyra_device {int pyra_lock; } ;
struct device_attribute {int dummy; } ;
struct device {TYPE_1__* parent; } ;
typedef int ssize_t ;
struct TYPE_2__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct pyra_device* FUNC_1 (int ) ;
 struct usb_device* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct usb_device*,int ,struct pyra_settings*,int ) ;
 int FUNC_6 (char*,int ,char*,int) ;
 int FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3,
  struct device_attribute *VAR_4, char *VAR_5)
{
 struct pyra_device *VAR_6 =
   FUNC_1(FUNC_0(VAR_3->parent->parent));
 struct usb_device *VAR_7 = FUNC_2(FUNC_7(VAR_3));
 struct pyra_settings VAR_8;

 FUNC_3(&VAR_6->pyra_lock);
 FUNC_5(VAR_7, VAR_1,
   &VAR_8, VAR_2);
 FUNC_4(&VAR_6->pyra_lock);

 return FUNC_6(VAR_5, VAR_0, "%d\n", VAR_8.startup_profile);
}
