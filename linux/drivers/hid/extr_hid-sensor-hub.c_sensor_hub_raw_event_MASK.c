
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sensor_hub_data {int lock; } ;
struct TYPE_4__ {scalar_t__ attr_usage_id; int raw_size; int ready; scalar_t__ raw_data; scalar_t__ status; } ;
struct hid_sensor_hub_device {TYPE_1__ pending; } ;
struct hid_sensor_hub_callbacks {int pdev; int (* send_event ) (struct hid_sensor_hub_device*,int ,int ) ;int (* capture_sample ) (struct hid_sensor_hub_device*,scalar_t__,int,int *,int ) ;} ;
struct hid_report {scalar_t__ type; int maxfield; TYPE_3__** field; int id; } ;
struct hid_device {struct hid_collection* collection; } ;
struct hid_collection {int usage; } ;
struct TYPE_6__ {int report_size; int report_count; scalar_t__ logical; TYPE_2__* usage; int physical; } ;
struct TYPE_5__ {size_t collection_index; scalar_t__ hid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct hid_device*,char*,...) ;
 struct sensor_hub_data* FUNC_2 (struct hid_device*) ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 struct hid_sensor_hub_callbacks* FUNC_4 (struct hid_device*,int ,size_t,struct hid_sensor_hub_device**,void**) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct hid_sensor_hub_device*,scalar_t__,int,int *,int ) ;
 int FUNC_8 (struct hid_sensor_hub_device*,scalar_t__,int,int *,int ) ;
 int FUNC_9 (struct hid_sensor_hub_device*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct hid_device *VAR_2,
  struct hid_report *VAR_3, u8 *VAR_4, int VAR_5)
{
 int VAR_6;
 u8 *VAR_7;
 int VAR_8;
 struct sensor_hub_data *VAR_9 = FUNC_2(VAR_2);
 unsigned long VAR_10;
 struct hid_sensor_hub_callbacks *VAR_11 = ((void*)0);
 struct hid_collection *VAR_12 = ((void*)0);
 void *VAR_13 = ((void*)0);
 struct hid_sensor_hub_device *VAR_14 = ((void*)0);

 FUNC_1(VAR_2, "sensor_hub_raw_event report id:0x%x size:%d type:%d\n",
    VAR_3->id, VAR_5, VAR_3->type);
 FUNC_1(VAR_2, "maxfield:%d\n", VAR_3->maxfield);
 if (VAR_3->type != VAR_1)
  return 1;

 VAR_7 = VAR_4;
 VAR_7++;

 FUNC_5(&VAR_9->lock, VAR_10);

 for (VAR_6 = 0; VAR_6 < VAR_3->maxfield; ++VAR_6) {
  FUNC_1(VAR_2, "%d collection_index:%x hid:%x sz:%x\n",
    VAR_6, VAR_3->field[VAR_6]->usage->collection_index,
    VAR_3->field[VAR_6]->usage->hid,
    (VAR_3->field[VAR_6]->report_size *
     VAR_3->field[VAR_6]->report_count)/8);
  VAR_8 = (VAR_3->field[VAR_6]->report_size *
     VAR_3->field[VAR_6]->report_count)/8;
  VAR_12 = &VAR_2->collection[
    VAR_3->field[VAR_6]->usage->collection_index];
  FUNC_1(VAR_2, "collection->usage %x\n",
     VAR_12->usage);

  VAR_11 = FUNC_4(VAR_2,
    VAR_3->field[VAR_6]->physical,
    VAR_3->field[VAR_6]->usage[0].collection_index,
    &VAR_14, &VAR_13);
  if (!VAR_11) {
   VAR_7 += VAR_8;
   continue;
  }
  if (VAR_14->pending.status && (VAR_14->pending.attr_usage_id ==
           VAR_3->field[VAR_6]->usage->hid ||
           VAR_14->pending.attr_usage_id ==
           VAR_3->field[VAR_6]->logical)) {
   FUNC_1(VAR_2, "data was pending ...\n");
   VAR_14->pending.raw_data = FUNC_3(VAR_7, VAR_8, VAR_0);
   if (VAR_14->pending.raw_data)
    VAR_14->pending.raw_size = VAR_8;
   else
    VAR_14->pending.raw_size = 0;
   FUNC_0(&VAR_14->pending.ready);
  }
  if (VAR_11->capture_sample) {
   if (VAR_3->field[VAR_6]->logical)
    VAR_11->capture_sample(VAR_14,
     VAR_3->field[VAR_6]->logical, VAR_8, VAR_7,
     VAR_11->pdev);
   else
    VAR_11->capture_sample(VAR_14,
     VAR_3->field[VAR_6]->usage->hid, VAR_8, VAR_7,
     VAR_11->pdev);
  }
  VAR_7 += VAR_8;
 }
 if (VAR_11 && VAR_12 && VAR_11->send_event)
  VAR_11->send_event(VAR_14, VAR_12->usage,
    VAR_11->pdev);
 FUNC_6(&VAR_9->lock, VAR_10);

 return 1;
}
