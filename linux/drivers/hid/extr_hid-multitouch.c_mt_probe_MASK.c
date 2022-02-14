
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mt_class {scalar_t__ name; int quirks; } ;
struct mt_device {int serial_maybe; int release_timer; int reports; int applications; int inputmode_value; struct mt_class mtclass; struct hid_device* hdev; } ;
struct hid_device_id {scalar_t__ driver_data; scalar_t__ vendor; scalar_t__ product; scalar_t__ group; } ;
struct TYPE_4__ {int kobj; } ;
struct hid_device {int name; TYPE_1__ dev; int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 struct mt_device* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (struct hid_device*,int ) ;
 int FUNC_5 (struct hid_device*) ;
 int FUNC_6 (struct hid_device*,struct mt_device*) ;
 int VAR_12 ;
 struct mt_class* VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (struct hid_device*,int ) ;
 int FUNC_8 (struct hid_device*,int ,int,int) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct hid_device *VAR_15, const struct hid_device_id *VAR_16)
{
 int VAR_17, VAR_18;
 struct mt_device *VAR_19;
 const struct mt_class *VAR_20 = VAR_13;

 for (VAR_18 = 0; VAR_13[VAR_18].name ; VAR_18++) {
  if (VAR_16->driver_data == VAR_13[VAR_18].name) {
   VAR_20 = &(VAR_13[VAR_18]);
   break;
  }
 }

 VAR_19 = FUNC_3(&VAR_15->dev, sizeof(struct mt_device), VAR_1);
 if (!VAR_19) {
  FUNC_1(&VAR_15->dev, "cannot allocate multitouch data\n");
  return -VAR_0;
 }
 VAR_19->hdev = VAR_15;
 VAR_19->mtclass = *VAR_20;
 VAR_19->inputmode_value = VAR_10;
 FUNC_6(VAR_15, VAR_19);

 FUNC_0(&VAR_19->applications);
 FUNC_0(&VAR_19->reports);

 if (VAR_16->vendor == VAR_2 && VAR_16->product == VAR_2)
  VAR_19->serial_maybe = 1;




 VAR_15->quirks |= VAR_9;






 VAR_15->quirks |= VAR_7;

 if (VAR_16->group != VAR_5)
  VAR_15->quirks |= VAR_8;

 FUNC_10(&VAR_19->release_timer, VAR_14, 0);

 VAR_17 = FUNC_5(VAR_15);
 if (VAR_17 != 0)
  return VAR_17;

 if (VAR_20->quirks & VAR_11)
  FUNC_7(VAR_15, VAR_4);

 VAR_17 = FUNC_4(VAR_15, VAR_3);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_9(&VAR_15->dev.kobj, &VAR_12);
 if (VAR_17)
  FUNC_2(&VAR_15->dev, "Cannot allocate sysfs group for %s\n",
    VAR_15->name);

 FUNC_8(VAR_15, VAR_6, 1, 1);

 return 0;
}
