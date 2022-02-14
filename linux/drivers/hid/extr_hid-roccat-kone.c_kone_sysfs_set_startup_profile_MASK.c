
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct TYPE_5__ {unsigned long startup_profile; } ;
struct kone_device {int kone_lock; TYPE_2__ settings; } ;
struct device_attribute {int dummy; } ;
struct device {TYPE_1__* parent; } ;
typedef int ssize_t ;
struct TYPE_4__ {struct device* parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct kone_device* FUNC_1 (int ) ;
 struct usb_device* FUNC_2 (int ) ;
 int FUNC_3 (struct kone_device*,unsigned long) ;
 int FUNC_4 (struct kone_device*,unsigned long) ;
 int FUNC_5 (struct usb_device*,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char const*,int,unsigned long*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_1,
  struct device_attribute *VAR_2, char const *VAR_3, size_t VAR_4)
{
 struct kone_device *VAR_5;
 struct usb_device *VAR_6;
 int VAR_7;
 unsigned long VAR_8;

 VAR_1 = VAR_1->parent->parent;
 VAR_5 = FUNC_1(FUNC_0(VAR_1));
 VAR_6 = FUNC_2(FUNC_10(VAR_1));

 VAR_7 = FUNC_7(VAR_3, 10, &VAR_8);
 if (VAR_7)
  return VAR_7;

 if (VAR_8 < 1 || VAR_8 > 5)
  return -VAR_0;

 FUNC_8(&VAR_5->kone_lock);

 VAR_5->settings.startup_profile = VAR_8;
 FUNC_6(&VAR_5->settings);

 VAR_7 = FUNC_5(VAR_6, &VAR_5->settings);
 if (VAR_7) {
  FUNC_9(&VAR_5->kone_lock);
  return VAR_7;
 }


 FUNC_3(VAR_5, VAR_8);
 FUNC_4(VAR_5, VAR_8);

 FUNC_9(&VAR_5->kone_lock);
 return VAR_4;
}
