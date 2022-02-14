
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {TYPE_1__* parent; } ;
struct arvo_device {unsigned long actual_profile; int arvo_lock; } ;
struct arvo_actual_profile {unsigned long actual_profile; int command; } ;
typedef int ssize_t ;
struct TYPE_2__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct arvo_device* FUNC_1 (int ) ;
 struct usb_device* FUNC_2 (int ) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct usb_device*,int ,struct arvo_actual_profile*,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2,
  struct device_attribute *VAR_3, char const *VAR_4, size_t VAR_5)
{
 struct arvo_device *VAR_6 =
   FUNC_1(FUNC_0(VAR_2->parent->parent));
 struct usb_device *VAR_7 =
   FUNC_2(FUNC_7(VAR_2->parent->parent));
 struct arvo_actual_profile VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_4, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9 < 1 || VAR_9 > 5)
  return -VAR_1;

 VAR_8.command = VAR_0;
 VAR_8.actual_profile = VAR_9;

 FUNC_4(&VAR_6->arvo_lock);
 VAR_10 = FUNC_6(VAR_7, VAR_0,
   &VAR_8, sizeof(struct arvo_actual_profile));
 if (!VAR_10) {
  VAR_6->actual_profile = VAR_9;
  VAR_10 = VAR_5;
 }
 FUNC_5(&VAR_6->arvo_lock);
 return VAR_10;
}
