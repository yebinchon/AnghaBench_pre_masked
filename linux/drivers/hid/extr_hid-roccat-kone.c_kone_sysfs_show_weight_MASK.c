
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct kone_device {int kone_lock; } ;
struct device_attribute {int dummy; } ;
struct device {TYPE_1__* parent; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct device* parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct kone_device* FUNC_1 (int ) ;
 struct usb_device* FUNC_2 (int ) ;
 int FUNC_3 (struct usb_device*,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ,char*,int) ;
 int FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct kone_device *VAR_4;
 struct usb_device *VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 VAR_1 = VAR_1->parent->parent;
 VAR_4 = FUNC_1(FUNC_0(VAR_1));
 VAR_5 = FUNC_2(FUNC_7(VAR_1));

 FUNC_4(&VAR_4->kone_lock);
 VAR_7 = FUNC_3(VAR_5, &VAR_6);
 FUNC_5(&VAR_4->kone_lock);

 if (VAR_7)
  return VAR_7;
 return FUNC_6(VAR_3, VAR_0, "%d\n", VAR_6);
}
