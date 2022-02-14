
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
typedef int u16 ;
struct sensor_hub_data {int mutex; int lock; } ;
struct TYPE_2__ {int raw_size; int status; scalar_t__ raw_data; int ready; void* attr_usage_id; void* usage_id; } ;
struct hid_sensor_hub_device {int * mutex_ptr; TYPE_1__ pending; int hdev; } ;
struct hid_report {int dummy; } ;
typedef int s8 ;
typedef int s16 ;
typedef enum sensor_hub_read_flags { ____Placeholder_sensor_hub_read_flags } sensor_hub_read_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sensor_hub_data* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct hid_report*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct hid_report* FUNC_7 (void*,int ,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,int) ;

int FUNC_11(struct hid_sensor_hub_device *VAR_5,
     u32 VAR_6,
     u32 VAR_7, u32 VAR_8,
     enum sensor_hub_read_flags VAR_9,
     bool VAR_10)
{
 struct sensor_hub_data *VAR_11 = FUNC_0(VAR_5->hdev);
 unsigned long VAR_12;
 struct hid_report *VAR_13;
 int VAR_14 = 0;

 VAR_13 = FUNC_7(VAR_8, VAR_5->hdev,
       VAR_1);
 if (!VAR_13)
  return -VAR_0;

 FUNC_5(VAR_5->mutex_ptr);
 if (VAR_9 == VAR_4) {
  FUNC_4(&VAR_5->pending, 0, sizeof(VAR_5->pending));
  FUNC_2(&VAR_5->pending.ready);
  VAR_5->pending.usage_id = VAR_6;
  VAR_5->pending.attr_usage_id = VAR_7;
  VAR_5->pending.raw_size = 0;

  FUNC_8(&VAR_11->lock, VAR_12);
  VAR_5->pending.status = 1;
  FUNC_9(&VAR_11->lock, VAR_12);
 }
 FUNC_5(&VAR_11->mutex);
 FUNC_1(VAR_5->hdev, VAR_13, VAR_2);
 FUNC_6(&VAR_11->mutex);
 if (VAR_9 == VAR_4) {
  FUNC_10(
      &VAR_5->pending.ready, VAR_3*5);
  switch (VAR_5->pending.raw_size) {
  case 1:
   if (VAR_10)
    VAR_14 = *(s8 *)VAR_5->pending.raw_data;
   else
    VAR_14 = *(u8 *)VAR_5->pending.raw_data;
   break;
  case 2:
   if (VAR_10)
    VAR_14 = *(s16 *)VAR_5->pending.raw_data;
   else
    VAR_14 = *(u16 *)VAR_5->pending.raw_data;
   break;
  case 4:
   VAR_14 = *(u32 *)VAR_5->pending.raw_data;
   break;
  default:
   VAR_14 = 0;
  }
  FUNC_3(VAR_5->pending.raw_data);
  VAR_5->pending.status = 0;
 }
 FUNC_6(VAR_5->mutex_ptr);

 return VAR_14;
}
