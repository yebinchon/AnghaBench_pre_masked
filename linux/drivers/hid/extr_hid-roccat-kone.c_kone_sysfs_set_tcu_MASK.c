
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_device {int dev; } ;
struct TYPE_6__ {unsigned long tcu; int startup_profile; } ;
struct kone_device {int kone_lock; TYPE_2__ settings; } ;
struct device_attribute {int dummy; } ;
struct device {TYPE_1__* parent; } ;
typedef int ssize_t ;
struct TYPE_5__ {struct device* parent; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct device*) ;
 struct kone_device* FUNC_2 (int ) ;
 struct usb_device* FUNC_3 (int ) ;
 int FUNC_4 (struct usb_device*,TYPE_2__*) ;
 int FUNC_5 (struct kone_device*,int ) ;
 int FUNC_6 (struct usb_device*,TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct usb_device*,int) ;
 int FUNC_9 (char const*,int,unsigned long*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_14(struct device *VAR_1,
  struct device_attribute *VAR_2, char const *VAR_3, size_t VAR_4)
{
 struct kone_device *VAR_5;
 struct usb_device *VAR_6;
 int VAR_7;
 unsigned long VAR_8;

 VAR_1 = VAR_1->parent->parent;
 VAR_5 = FUNC_2(FUNC_1(VAR_1));
 VAR_6 = FUNC_3(FUNC_13(VAR_1));

 VAR_7 = FUNC_9(VAR_3, 10, &VAR_8);
 if (VAR_7)
  return VAR_7;

 if (VAR_8 != 0 && VAR_8 != 1)
  return -VAR_0;

 FUNC_10(&VAR_5->kone_lock);

 if (VAR_8 == 1) {
  VAR_7 = FUNC_8(VAR_6, 1);
  if (VAR_7)
   goto exit_unlock;
  VAR_7 = FUNC_8(VAR_6, 2);
  if (VAR_7)
   goto exit_unlock;
  FUNC_12(5);
  VAR_7 = FUNC_8(VAR_6, 3);
  if (VAR_7)
   goto exit_unlock;
  VAR_7 = FUNC_8(VAR_6, 0);
  if (VAR_7)
   goto exit_unlock;
  VAR_7 = FUNC_8(VAR_6, 4);
  if (VAR_7)
   goto exit_unlock;






  FUNC_12(1);
 }


 VAR_7 = FUNC_4(VAR_6, &VAR_5->settings);
 if (VAR_7)
  goto exit_no_settings;


 if (VAR_5->settings.tcu != VAR_8) {
  VAR_5->settings.tcu = VAR_8;
  FUNC_7(&VAR_5->settings);

  VAR_7 = FUNC_6(VAR_6, &VAR_5->settings);
  if (VAR_7) {
   FUNC_0(&VAR_6->dev, "couldn't set tcu state\n");




   VAR_7 = FUNC_4(VAR_6, &VAR_5->settings);
   if (VAR_7)
    goto exit_no_settings;
   goto exit_unlock;
  }

  FUNC_5(VAR_5, VAR_5->settings.startup_profile);
 }

 VAR_7 = VAR_4;
exit_no_settings:
 FUNC_0(&VAR_6->dev, "couldn't read settings\n");
exit_unlock:
 FUNC_11(&VAR_5->kone_lock);
 return VAR_7;
}
