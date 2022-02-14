
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct inode {int dummy; } ;
struct hiddev_list {struct hiddev* hiddev; int node; int thread_lock; } ;
struct hiddev {int list_lock; int existancelock; struct hid_device* hid; scalar_t__ exist; int open; int list; } ;
struct hid_device {struct hiddev* hiddev; } ;
struct file {struct hiddev_list* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct hid_device* FUNC_10 (struct usb_interface*) ;
 struct usb_interface* FUNC_11 (int ) ;
 int FUNC_12 (struct hiddev_list*) ;
 struct hiddev_list* FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_4, struct file *VAR_5)
{
 struct hiddev_list *VAR_6;
 struct usb_interface *VAR_7;
 struct hid_device *VAR_8;
 struct hiddev *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_11(FUNC_2(VAR_4));
 if (!VAR_7)
  return -VAR_0;
 VAR_8 = FUNC_10(VAR_7);
 VAR_9 = VAR_8->hiddev;

 if (!(VAR_6 = FUNC_13(sizeof(struct hiddev_list))))
  return -VAR_1;
 FUNC_5(&VAR_6->thread_lock);
 VAR_6->hiddev = VAR_9;
 VAR_5->private_data = VAR_6;





 if (VAR_6->hiddev->exist) {
  if (!VAR_6->hiddev->open++) {
   VAR_10 = FUNC_0(VAR_9->hid);
   if (VAR_10 < 0)
    goto bail;
  }
 } else {
  VAR_10 = -VAR_0;
  goto bail;
 }

 FUNC_8(&VAR_6->hiddev->list_lock);
 FUNC_3(&VAR_6->node, &VAR_9->list);
 FUNC_9(&VAR_6->hiddev->list_lock);

 FUNC_6(&VAR_9->existancelock);




 if (!VAR_6->hiddev->exist) {
  VAR_10 = -VAR_0;
  goto bail_unlock;
 }
 if (!VAR_6->hiddev->open++)
  if (VAR_6->hiddev->exist) {
   struct hid_device *VAR_11 = VAR_9->hid;
   VAR_10 = FUNC_1(VAR_11, VAR_2);
   if (VAR_10 < 0)
    goto bail_unlock;
   VAR_10 = FUNC_0(VAR_11);
   if (VAR_10 < 0)
    goto bail_normal_power;
  }
 FUNC_7(&VAR_9->existancelock);
 return 0;
bail_normal_power:
 FUNC_1(VAR_8, VAR_3);
bail_unlock:
 FUNC_7(&VAR_9->existancelock);

 FUNC_8(&VAR_6->hiddev->list_lock);
 FUNC_4(&VAR_6->node);
 FUNC_9(&VAR_6->hiddev->list_lock);
bail:
 VAR_5->private_data = ((void*)0);
 FUNC_12(VAR_6);
 return VAR_10;
}
