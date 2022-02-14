
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int invert_x; int invert_y; scalar_t__ max_y; scalar_t__ max_x; } ;
struct goodix_ts_data {size_t int_trigger_type; int contact_size; int irq_flags; TYPE_2__* client; TYPE_3__* input_dev; void* max_touch_num; TYPE_4__ prop; int version; int id; } ;
struct TYPE_11__ {int vendor; int version; int product; int bustype; } ;
struct TYPE_13__ {char* name; char* phys; TYPE_1__ id; } ;
struct TYPE_12__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 TYPE_3__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int* VAR_16 ;
 int FUNC_4 (struct goodix_ts_data*) ;
 int FUNC_5 (struct goodix_ts_data*) ;
 int FUNC_6 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_7 (TYPE_3__*,void*,int) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int ,int ,int,int ,int ) ;
 int FUNC_10 (TYPE_3__*,int ,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_11 (TYPE_3__*,int,TYPE_4__*) ;

__attribute__((used)) static int FUNC_12(struct goodix_ts_data *VAR_19)
{
 int VAR_20;

 VAR_19->int_trigger_type = VAR_8;
 VAR_19->max_touch_num = VAR_9;

 VAR_19->input_dev = FUNC_2(&VAR_19->client->dev);
 if (!VAR_19->input_dev) {
  FUNC_1(&VAR_19->client->dev, "Failed to allocate input device.");
  return -VAR_5;
 }

 VAR_19->input_dev->name = "Goodix Capacitive TouchScreen";
 VAR_19->input_dev->phys = "input/ts";
 VAR_19->input_dev->id.bustype = VAR_4;
 VAR_19->input_dev->id.vendor = 0x0416;
 VAR_19->input_dev->id.product = VAR_19->id;
 VAR_19->input_dev->id.version = VAR_19->version;


 FUNC_10(VAR_19->input_dev, VAR_7, VAR_15);

 FUNC_10(VAR_19->input_dev, VAR_6, VAR_0);
 FUNC_10(VAR_19->input_dev, VAR_6, VAR_1);
 FUNC_9(VAR_19->input_dev, VAR_3, 0, 255, 0, 0);
 FUNC_9(VAR_19->input_dev, VAR_2, 0, 255, 0, 0);


 FUNC_4(VAR_19);


 FUNC_11(VAR_19->input_dev, 1, &VAR_19->prop);

 if (!VAR_19->prop.max_x || !VAR_19->prop.max_y || !VAR_19->max_touch_num) {
  FUNC_1(&VAR_19->client->dev,
   "Invalid config (%d, %d, %d), using defaults\n",
   VAR_19->prop.max_x, VAR_19->prop.max_y, VAR_19->max_touch_num);
  VAR_19->prop.max_x = VAR_11 - 1;
  VAR_19->prop.max_y = VAR_10 - 1;
  VAR_19->max_touch_num = VAR_9;
  FUNC_6(VAR_19->input_dev,
      VAR_0, VAR_19->prop.max_x);
  FUNC_6(VAR_19->input_dev,
      VAR_1, VAR_19->prop.max_y);
 }

 if (FUNC_3(VAR_18)) {
  VAR_19->prop.invert_x = 1;
  VAR_19->prop.invert_y = 1;
  FUNC_0(&VAR_19->client->dev,
   "Applying '180 degrees rotated screen' quirk\n");
 }

 if (FUNC_3(VAR_17)) {
  VAR_19->contact_size = 9;

  FUNC_0(&VAR_19->client->dev,
   "Non-standard 9-bytes report format quirk\n");
 }

 VAR_20 = FUNC_7(VAR_19->input_dev, VAR_19->max_touch_num,
        VAR_12 | VAR_13);
 if (VAR_20) {
  FUNC_1(&VAR_19->client->dev,
   "Failed to initialize MT slots: %d", VAR_20);
  return VAR_20;
 }

 VAR_20 = FUNC_8(VAR_19->input_dev);
 if (VAR_20) {
  FUNC_1(&VAR_19->client->dev,
   "Failed to register input device: %d", VAR_20);
  return VAR_20;
 }

 VAR_19->irq_flags = VAR_16[VAR_19->int_trigger_type] | VAR_14;
 VAR_20 = FUNC_5(VAR_19);
 if (VAR_20) {
  FUNC_1(&VAR_19->client->dev, "request IRQ failed: %d\n", VAR_20);
  return VAR_20;
 }

 return 0;
}
