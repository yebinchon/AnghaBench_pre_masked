
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_features {scalar_t__ type; int pressure_max; int unitExpo; int unit; int y_phy; int y_max; int x_phy; int x_max; int device_type; } ;
struct TYPE_2__ {struct wacom_features features; } ;
struct wacom {TYPE_1__ wacom_wac; } ;
struct hid_usage {int hid; } ;
struct hid_field {int logical_maximum; int unit_exponent; int unit; int physical_maximum; } ;
struct hid_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hid_field*) ;
 int FUNC_1 (struct hid_field*) ;
 struct wacom* FUNC_2 (struct hid_device*) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct hid_device*,struct hid_field*,struct hid_usage*) ;
 int FUNC_5 (struct hid_device*,struct hid_field*,struct hid_usage*) ;

__attribute__((used)) static void FUNC_6(struct hid_device *VAR_5,
  struct hid_field *VAR_6, struct hid_usage *VAR_7)
{
 struct wacom *VAR_8 = FUNC_2(VAR_5);
 struct wacom_features *VAR_9 = &VAR_8->wacom_wac.features;
 bool VAR_10 = FUNC_0(VAR_6);
 bool VAR_11 = FUNC_1(VAR_6);
 unsigned VAR_12 = FUNC_3(VAR_7->hid);






 if (VAR_11)
  VAR_9->device_type |= VAR_3;
 else if (VAR_10)
  VAR_9->device_type |= VAR_4;
 else
  return;

 FUNC_4(VAR_5, VAR_6, VAR_7);

 switch (VAR_12) {
 case 129:
  VAR_9->x_max = VAR_6->logical_maximum;
  if (VAR_10) {
   VAR_9->x_phy = VAR_6->physical_maximum;
   if ((VAR_9->type != VAR_0) &&
       (VAR_9->type != VAR_1)) {
    VAR_9->unit = VAR_6->unit;
    VAR_9->unitExpo = VAR_6->unit_exponent;
   }
  }
  break;
 case 128:
  VAR_9->y_max = VAR_6->logical_maximum;
  if (VAR_10) {
   VAR_9->y_phy = VAR_6->physical_maximum;
   if ((VAR_9->type != VAR_0) &&
       (VAR_9->type != VAR_1)) {
    VAR_9->unit = VAR_6->unit;
    VAR_9->unitExpo = VAR_6->unit_exponent;
   }
  }
  break;
 case 130:
  if (VAR_11)
   VAR_9->pressure_max = VAR_6->logical_maximum;
  break;
 }

 if (VAR_9->type == VAR_2)
  FUNC_5(VAR_5, VAR_6, VAR_7);
}
