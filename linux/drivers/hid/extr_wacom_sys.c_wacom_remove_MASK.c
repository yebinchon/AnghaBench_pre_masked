
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_features {int device_type; scalar_t__ type; } ;
struct wacom_wac {int pen_fifo; struct wacom_features features; } ;
struct wacom {struct wacom_wac wacom_wac; int mode_change_work; int remote_work; int battery_work; int wireless_work; int init_work; } ;
struct hid_device {scalar_t__ bus; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int *,int *) ;
 struct wacom* FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct hid_device*) ;
 int FUNC_5 (struct hid_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct wacom*) ;
 int FUNC_8 (struct wacom*) ;

__attribute__((used)) static void FUNC_9(struct hid_device *VAR_4)
{
 struct wacom *VAR_5 = FUNC_3(VAR_4);
 struct wacom_wac *VAR_6 = &VAR_5->wacom_wac;
 struct wacom_features *VAR_7 = &VAR_6->features;

 if (VAR_7->device_type & VAR_2)
  FUNC_4(VAR_4);

 FUNC_5(VAR_4);

 FUNC_0(&VAR_5->init_work);
 FUNC_1(&VAR_5->wireless_work);
 FUNC_1(&VAR_5->battery_work);
 FUNC_1(&VAR_5->remote_work);
 FUNC_1(&VAR_5->mode_change_work);
 if (VAR_4->bus == VAR_0)
  FUNC_2(&VAR_4->dev, &VAR_3);


 FUNC_7(VAR_5);

 if (VAR_5->wacom_wac.features.type != VAR_1)
  FUNC_8(VAR_5);

 FUNC_6(&VAR_6->pen_fifo);
}
