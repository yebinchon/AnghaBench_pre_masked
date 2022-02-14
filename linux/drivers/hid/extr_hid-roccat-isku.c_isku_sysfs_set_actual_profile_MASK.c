
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_device {int dummy; } ;
struct isku_roccat_report {unsigned long data1; unsigned long profile; scalar_t__ data2; int event; } ;
struct isku_device {int isku_lock; int chrdev_minor; } ;
struct device_attribute {int dummy; } ;
struct device {TYPE_1__* parent; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct device* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 struct isku_device* FUNC_1 (int ) ;
 struct usb_device* FUNC_2 (int ) ;
 int FUNC_3 (struct isku_device*,unsigned long) ;
 int FUNC_4 (struct usb_device*,unsigned long) ;
 int FUNC_5 (char const*,int,unsigned long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int const*) ;
 int FUNC_9 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_2,
  struct device_attribute *VAR_3, char const *VAR_4, size_t VAR_5)
{
 struct isku_device *VAR_6;
 struct usb_device *VAR_7;
 unsigned long VAR_8;
 int VAR_9;
 struct isku_roccat_report VAR_10;

 VAR_2 = VAR_2->parent->parent;
 VAR_6 = FUNC_1(FUNC_0(VAR_2));
 VAR_7 = FUNC_2(FUNC_9(VAR_2));

 VAR_9 = FUNC_5(VAR_4, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 if (VAR_8 > 4)
  return -VAR_0;

 FUNC_6(&VAR_6->isku_lock);

 VAR_9 = FUNC_4(VAR_7, VAR_8);
 if (VAR_9) {
  FUNC_7(&VAR_6->isku_lock);
  return VAR_9;
 }

 FUNC_3(VAR_6, VAR_8);

 VAR_10.event = VAR_1;
 VAR_10.data1 = VAR_8 + 1;
 VAR_10.data2 = 0;
 VAR_10.profile = VAR_8 + 1;
 FUNC_8(VAR_6->chrdev_minor, (uint8_t const *)&VAR_10);

 FUNC_7(&VAR_6->isku_lock);

 return VAR_5;
}
