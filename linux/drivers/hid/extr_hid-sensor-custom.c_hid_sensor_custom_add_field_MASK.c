
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int attrib_id; int index; int size; int logical_maximum; int logical_minimum; int unit_expo; int units; int report_id; int usage_id; } ;
struct hid_sensor_custom_field {int hid_custom_attribute_group; TYPE_3__ attribute; int group_name; } ;
struct hid_sensor_custom {int sensor_field_count; int input_report_size; int input_field_count; TYPE_1__* hsdev; struct hid_sensor_custom_field* fields; } ;
struct hid_report {int id; } ;
struct hid_field {int logical; int report_size; int report_count; int logical_maximum; int logical_minimum; int unit_exponent; int unit; TYPE_2__* usage; } ;
struct attribute_group {int dummy; } ;
struct TYPE_5__ {int hid; } ;
struct TYPE_4__ {int usage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hid_sensor_custom_field*) ;
 void* FUNC_1 (struct hid_sensor_custom_field*,int,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,int,char*,int,int) ;

__attribute__((used)) static int FUNC_4(struct hid_sensor_custom *VAR_4,
           int VAR_5, int VAR_6,
           struct hid_report *VAR_7,
           struct hid_field *VAR_8)
{
 struct hid_sensor_custom_field *VAR_9;
 void *VAR_10;

 VAR_10 = FUNC_1(VAR_4->fields,
     (VAR_4->sensor_field_count + 1) *
      sizeof(struct hid_sensor_custom_field), VAR_1);
 if (!VAR_10) {
  FUNC_0(VAR_4->fields);
  return -VAR_0;
 }
 VAR_4->fields = VAR_10;
 VAR_9 = &VAR_4->fields[VAR_4->sensor_field_count];
 VAR_9->attribute.usage_id = VAR_4->hsdev->usage;
 if (VAR_8->logical)
  VAR_9->attribute.attrib_id = VAR_8->logical;
 else
  VAR_9->attribute.attrib_id = VAR_8->usage[0].hid;

 VAR_9->attribute.index = VAR_5;
 VAR_9->attribute.report_id = VAR_7->id;
 VAR_9->attribute.units = VAR_8->unit;
 VAR_9->attribute.unit_expo = VAR_8->unit_exponent;
 VAR_9->attribute.size = (VAR_8->report_size / 8);
 VAR_9->attribute.logical_minimum = VAR_8->logical_minimum;
 VAR_9->attribute.logical_maximum = VAR_8->logical_maximum;

 if (VAR_6 == VAR_2)
  FUNC_3(VAR_9->group_name,
    sizeof(VAR_9->group_name), "feature-%x-%x",
    VAR_9->attribute.index,
    VAR_9->attribute.attrib_id);
 else if (VAR_6 == VAR_3) {
  FUNC_3(VAR_9->group_name,
    sizeof(VAR_9->group_name),
    "input-%x-%x", VAR_9->attribute.index,
    VAR_9->attribute.attrib_id);
  VAR_4->input_field_count++;
  VAR_4->input_report_size += (VAR_8->report_size *
         VAR_8->report_count) / 8;
 }

 FUNC_2(&VAR_9->hid_custom_attribute_group, 0,
        sizeof(struct attribute_group));
 VAR_4->sensor_field_count++;

 return 0;
}
