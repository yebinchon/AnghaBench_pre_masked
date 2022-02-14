
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {TYPE_1__* parent; } ;
struct arvo_key_mask {unsigned long key_mask; int command; } ;
struct arvo_device {int arvo_lock; } ;
typedef int ssize_t ;
struct TYPE_2__ {int parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct arvo_device* FUNC_1 (int ) ;
 struct usb_device* FUNC_2 (int ) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct usb_device*,int ,struct arvo_key_mask*,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1,
  struct device_attribute *VAR_2, char const *VAR_3, size_t VAR_4)
{
 struct arvo_device *VAR_5 =
   FUNC_1(FUNC_0(VAR_1->parent->parent));
 struct usb_device *VAR_6 =
   FUNC_2(FUNC_7(VAR_1->parent->parent));
 struct arvo_key_mask VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_3, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_7.command = VAR_0;
 VAR_7.key_mask = VAR_8;

 FUNC_4(&VAR_5->arvo_lock);
 VAR_9 = FUNC_6(VAR_6, VAR_0,
   &VAR_7, sizeof(struct arvo_key_mask));
 FUNC_5(&VAR_5->arvo_lock);
 if (VAR_9)
  return VAR_9;

 return VAR_4;
}
