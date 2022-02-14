
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ntrig_data {int reading_mt; int sensor_logical_width; int sensor_logical_height; int sensor_physical_width; int sensor_physical_height; int deactivate_slack; void* act_state; void* activate_slack; scalar_t__ min_height; scalar_t__ min_width; } ;
struct hid_report {int dummy; } ;
struct hid_device_id {scalar_t__ driver_data; } ;
struct TYPE_4__ {int kobj; } ;
struct hid_device {int quirks; TYPE_2__ dev; TYPE_1__* report_enum; } ;
struct TYPE_3__ {struct hid_report** report_id_hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct hid_device*,char*) ;
 int FUNC_1 (struct hid_device*,struct hid_report*,int ) ;
 int FUNC_2 (struct hid_device*,int) ;
 int FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct hid_device*) ;
 int FUNC_5 (struct hid_device*,struct ntrig_data*) ;
 int FUNC_6 (struct ntrig_data*) ;
 struct ntrig_data* FUNC_7 (int,int ) ;
 int VAR_10 ;
 int FUNC_8 (struct hid_device*) ;
 int FUNC_9 (struct hid_device*) ;
 int FUNC_10 (struct hid_device*,int) ;
 int FUNC_11 (int *,int *) ;

__attribute__((used)) static int FUNC_12(struct hid_device *VAR_11, const struct hid_device_id *VAR_12)
{
 int VAR_13;
 struct ntrig_data *VAR_14;
 struct hid_report *VAR_15;

 if (VAR_12->driver_data)
  VAR_11->quirks |= VAR_5
    | VAR_6;

 VAR_14 = FUNC_7(sizeof(struct ntrig_data), VAR_1);
 if (!VAR_14) {
  FUNC_0(VAR_11, "cannot allocate N-Trig data\n");
  return -VAR_0;
 }

 VAR_14->reading_mt = 0;
 VAR_14->min_width = 0;
 VAR_14->min_height = 0;
 VAR_14->activate_slack = VAR_8;
 VAR_14->act_state = VAR_8;
 VAR_14->deactivate_slack = -VAR_9;
 VAR_14->sensor_logical_width = 1;
 VAR_14->sensor_logical_height = 1;
 VAR_14->sensor_physical_width = 1;
 VAR_14->sensor_physical_height = 1;

 FUNC_5(VAR_11, VAR_14);

 VAR_13 = FUNC_4(VAR_11);
 if (VAR_13) {
  FUNC_0(VAR_11, "parse failed\n");
  goto err_free;
 }

 VAR_13 = FUNC_2(VAR_11, VAR_2 & ~VAR_3);
 if (VAR_13) {
  FUNC_0(VAR_11, "hw start failed\n");
  goto err_free;
 }


 VAR_15 = VAR_11->report_enum[VAR_4].report_id_hash[0x0a];
 if (VAR_15) {


  FUNC_3(VAR_11);
  FUNC_1(VAR_11, VAR_15, VAR_7);





  if (FUNC_8(VAR_11) >= 4)
   FUNC_10(VAR_11, 3);
 }

 FUNC_9(VAR_11);

 VAR_13 = FUNC_11(&VAR_11->dev.kobj,
   &VAR_10);
 if (VAR_13)
  FUNC_0(VAR_11, "cannot create sysfs group\n");

 return 0;
err_free:
 FUNC_6(VAR_14);
 return VAR_13;
}
