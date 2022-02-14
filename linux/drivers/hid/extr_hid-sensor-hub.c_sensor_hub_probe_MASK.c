
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sensor_hub_data {size_t hid_sensor_client_cnt; TYPE_1__* hid_sensor_hub_client_devs; int dyn_callback_list; int mutex; int dyn_callback_lock; int lock; int quirks; } ;
struct mutex {int dummy; } ;
struct mfd_cell {int dummy; } ;
struct hid_sensor_hub_device {scalar_t__ usage; int start_collection_index; int end_collection_index; int * mutex_ptr; int product_id; int vendor_id; struct hid_device* hdev; } ;
struct hid_device_id {int driver_data; } ;
struct hid_device {int maxcollection; int dev; int product; int vendor; struct hid_collection* collection; int inputs; } ;
struct hid_collection {scalar_t__ type; scalar_t__ usage; } ;
struct TYPE_3__ {char* name; int pdata_size; struct hid_sensor_hub_device* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,int ,char*,scalar_t__) ;
 TYPE_1__* FUNC_2 (int *,int,int,int ) ;
 void* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct hid_device*,char*,char*,int) ;
 int FUNC_5 (struct hid_device*,char*) ;
 int FUNC_6 (struct hid_device*,int ) ;
 int FUNC_7 (struct hid_device*) ;
 int FUNC_8 (struct hid_device*) ;
 int FUNC_9 (struct hid_device*,struct sensor_hub_data*) ;
 int FUNC_10 (int *,TYPE_1__*,size_t) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct hid_device*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct hid_device *VAR_7,
    const struct hid_device_id *VAR_8)
{
 int VAR_9;
 struct sensor_hub_data *VAR_10;
 int VAR_11;
 char *VAR_12;
 int VAR_13;
 struct hid_sensor_hub_device *VAR_14;
 struct hid_sensor_hub_device *VAR_15 = ((void*)0);
 struct hid_sensor_hub_device *VAR_16 = ((void*)0);

 VAR_10 = FUNC_3(&VAR_7->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10) {
  FUNC_5(VAR_7, "cannot allocate Sensor data\n");
  return -VAR_1;
 }

 FUNC_9(VAR_7, VAR_10);
 VAR_10->quirks = VAR_8->driver_data;

 FUNC_13(&VAR_10->lock);
 FUNC_13(&VAR_10->dyn_callback_lock);
 FUNC_11(&VAR_10->mutex);
 VAR_9 = FUNC_8(VAR_7);
 if (VAR_9) {
  FUNC_5(VAR_7, "parse failed\n");
  return VAR_9;
 }
 FUNC_0(&VAR_7->inputs);

 VAR_9 = FUNC_6(VAR_7, 0);
 if (VAR_9) {
  FUNC_5(VAR_7, "hw start failed\n");
  return VAR_9;
 }
 FUNC_0(&VAR_10->dyn_callback_list);
 VAR_10->hid_sensor_client_cnt = 0;

 VAR_13 = FUNC_12(VAR_7);
 if (VAR_13 > VAR_5) {
  FUNC_5(VAR_7, "Invalid Physical device count\n");
  VAR_9 = -VAR_0;
  goto err_stop_hw;
 }
 VAR_10->hid_sensor_hub_client_devs = FUNC_2(&VAR_7->dev,
            VAR_13,
            sizeof(struct mfd_cell),
            VAR_2);
 if (VAR_10->hid_sensor_hub_client_devs == ((void*)0)) {
  FUNC_5(VAR_7, "Failed to allocate memory for mfd cells\n");
  VAR_9 = -VAR_1;
  goto err_stop_hw;
 }

 for (VAR_11 = 0; VAR_11 < VAR_7->maxcollection; ++VAR_11) {
  struct hid_collection *VAR_17 = &VAR_7->collection[VAR_11];

  if (VAR_17->type == VAR_4 ||
      VAR_17->type == VAR_3) {

   VAR_14 = FUNC_3(&VAR_7->dev, sizeof(*VAR_14),
          VAR_2);
   if (!VAR_14) {
    FUNC_5(VAR_7, "cannot allocate hid_sensor_hub_device\n");
    VAR_9 = -VAR_1;
    goto err_stop_hw;
   }
   VAR_14->hdev = VAR_7;
   VAR_14->vendor_id = VAR_7->vendor;
   VAR_14->product_id = VAR_7->product;
   VAR_14->usage = VAR_17->usage;
   VAR_14->mutex_ptr = FUNC_3(&VAR_7->dev,
       sizeof(struct mutex),
       VAR_2);
   if (!VAR_14->mutex_ptr) {
    VAR_9 = -VAR_1;
    goto err_stop_hw;
   }
   FUNC_11(VAR_14->mutex_ptr);
   VAR_14->start_collection_index = VAR_11;
   if (VAR_15)
    VAR_15->end_collection_index = VAR_11;
   VAR_15 = VAR_14;
   VAR_12 = FUNC_1(&VAR_7->dev, VAR_2,
           "HID-SENSOR-%x",
           VAR_17->usage);
   if (VAR_12 == ((void*)0)) {
    FUNC_5(VAR_7, "Failed MFD device name\n");
    VAR_9 = -VAR_1;
    goto err_stop_hw;
   }
   VAR_10->hid_sensor_hub_client_devs[
    VAR_10->hid_sensor_client_cnt].name = VAR_12;
   VAR_10->hid_sensor_hub_client_devs[
    VAR_10->hid_sensor_client_cnt].platform_data =
       VAR_14;
   VAR_10->hid_sensor_hub_client_devs[
    VAR_10->hid_sensor_client_cnt].pdata_size =
       sizeof(*VAR_14);
   FUNC_4(VAR_7, "Adding %s:%d\n", VAR_12,
     VAR_14->start_collection_index);
   VAR_10->hid_sensor_client_cnt++;
   if (VAR_16)
    VAR_16->end_collection_index = VAR_11;
   if (VAR_17->type == VAR_3 &&
       VAR_17->usage == VAR_6)
    VAR_16 = VAR_14;
  }
 }
 if (VAR_15)
  VAR_15->end_collection_index = VAR_11;
 if (VAR_16)
  VAR_16->end_collection_index = VAR_11;

 VAR_9 = FUNC_10(&VAR_7->dev,
   VAR_10->hid_sensor_hub_client_devs,
   VAR_10->hid_sensor_client_cnt);
 if (VAR_9 < 0)
  goto err_stop_hw;

 return VAR_9;

err_stop_hw:
 FUNC_7(VAR_7);

 return VAR_9;
}
