
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {TYPE_1__* parent; } ;
struct arvo_mode_key {int state; } ;
struct arvo_device {int arvo_lock; } ;
typedef int ssize_t ;
struct TYPE_2__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct arvo_device* FUNC_1 (int ) ;
 struct usb_device* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct usb_device*,int ,struct arvo_mode_key*,int) ;
 int FUNC_6 (char*,int ,char*,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 struct arvo_device *VAR_5 =
   FUNC_1(FUNC_0(VAR_2->parent->parent));
 struct usb_device *VAR_6 =
   FUNC_2(FUNC_7(VAR_2->parent->parent));
 struct arvo_mode_key VAR_7;
 int VAR_8;

 FUNC_3(&VAR_5->arvo_lock);
 VAR_8 = FUNC_5(VAR_6, VAR_0,
   &VAR_7, sizeof(struct arvo_mode_key));
 FUNC_4(&VAR_5->arvo_lock);
 if (VAR_8)
  return VAR_8;

 return FUNC_6(VAR_4, VAR_1, "%d\n", VAR_7.state);
}
