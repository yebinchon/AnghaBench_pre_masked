
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int device_type; } ;
struct wacom_wac {TYPE_2__* shared; TYPE_1__ features; } ;
struct TYPE_4__ {struct hid_device* pen; struct hid_device* touch; } ;
struct wacom_hdev_data {TYPE_2__ shared; int list; struct hid_device* dev; int kref; } ;
struct wacom {struct wacom_wac wacom_wac; } ;
struct hid_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int (*) (struct wacom*),struct wacom*) ;
 struct wacom* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (int *) ;
 struct wacom_hdev_data* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct wacom_hdev_data* FUNC_7 (struct hid_device*) ;
 int FUNC_8 (struct wacom*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(struct hid_device *VAR_6)
{
 struct wacom *VAR_7 = FUNC_1(VAR_6);
 struct wacom_wac *VAR_8 = &VAR_7->wacom_wac;
 struct wacom_hdev_data *VAR_9;
 int VAR_10 = 0;

 FUNC_5(&VAR_5);

 VAR_9 = FUNC_7(VAR_6);
 if (!VAR_9) {
  VAR_9 = FUNC_3(sizeof(struct wacom_hdev_data), VAR_1);
  if (!VAR_9) {
   VAR_10 = -VAR_0;
   goto out;
  }

  FUNC_2(&VAR_9->kref);
  VAR_9->dev = VAR_6;
  FUNC_4(&VAR_9->list, &VAR_4);
 }

 VAR_8->shared = &VAR_9->shared;

 VAR_10 = FUNC_0(&VAR_6->dev, FUNC_8, VAR_7);
 if (VAR_10) {
  FUNC_6(&VAR_5);
  FUNC_8(VAR_7);
  return VAR_10;
 }

 if (VAR_8->features.device_type & VAR_3)
  VAR_8->shared->touch = VAR_6;
 else if (VAR_8->features.device_type & VAR_2)
  VAR_8->shared->pen = VAR_6;

out:
 FUNC_6(&VAR_5);
 return VAR_10;
}
