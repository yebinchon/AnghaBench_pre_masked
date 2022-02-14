
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct hid_sensor_hub_device {struct hid_device* hdev; } ;
struct hid_sensor_custom {int sensor_field_count; TYPE_4__* fields; TYPE_4__* report_state; TYPE_4__* power_state; TYPE_2__* pdev; struct hid_sensor_hub_device* hsdev; } ;
struct hid_device {int * report_enum; } ;
struct TYPE_13__ {char* name; int mode; } ;
struct device_attribute {TYPE_6__ attr; int store; int show; } ;
struct TYPE_14__ {char* name; int mode; } ;
struct TYPE_12__ {char* name; TYPE_6__** attrs; } ;
struct TYPE_10__ {scalar_t__ attrib_id; } ;
struct TYPE_11__ {char* group_name; TYPE_3__ attribute; TYPE_5__ hid_custom_attribute_group; TYPE_6__** attrs; int * attr_name; struct device_attribute* sd_attrs; } ;
struct TYPE_8__ {int kobj; } ;
struct TYPE_9__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_7__* VAR_7 ;
 int FUNC_0 (struct hid_sensor_custom*,int *,int) ;
 int VAR_8 ;
 int FUNC_1 (char*,int ,char*,char*,char*) ;
 int VAR_9 ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int *,TYPE_5__*) ;

__attribute__((used)) static int FUNC_4(struct hid_sensor_custom
        *VAR_10)
{
 struct hid_sensor_hub_device *VAR_11 = VAR_10->hsdev;
 struct hid_device *VAR_12 = VAR_11->hdev;
 int VAR_13 = -1;
 int VAR_14, VAR_15;

 for (VAR_15 = 0; VAR_15 < VAR_3; ++VAR_15) {
  if (VAR_15 == VAR_2)
   continue;

  VAR_13 = FUNC_0(VAR_10,
         &VAR_12->report_enum[VAR_15], VAR_15);
  if (VAR_13)
   return VAR_13;

 }


 for (VAR_14 = 0; VAR_14 < VAR_10->sensor_field_count; ++VAR_14) {
  VAR_15 = 0;
  while (VAR_15 < VAR_1 &&
         VAR_7[VAR_15].name) {
   struct device_attribute *VAR_16;

   VAR_16 = &VAR_10->fields[VAR_14].sd_attrs[VAR_15];

   FUNC_1((char *)&VAR_10->fields[VAR_14].attr_name[VAR_15],
     VAR_0, "%s-%s",
     VAR_10->fields[VAR_14].group_name,
     VAR_7[VAR_15].name);
   FUNC_2(&VAR_16->attr);
   VAR_16->attr.name =
    (char *)&VAR_10->fields[VAR_14].attr_name[VAR_15];
   VAR_16->attr.mode = VAR_7[VAR_15].mode;
   VAR_16->show = VAR_8;
   if (VAR_7[VAR_15].mode & VAR_6)
    VAR_16->store = VAR_9;
   VAR_10->fields[VAR_14].attrs[VAR_15] = &VAR_16->attr;
   ++VAR_15;
  }
  VAR_10->fields[VAR_14].attrs[VAR_15] = ((void*)0);
  VAR_10->fields[VAR_14].hid_custom_attribute_group.attrs =
      VAR_10->fields[VAR_14].attrs;
  VAR_10->fields[VAR_14].hid_custom_attribute_group.name =
     VAR_10->fields[VAR_14].group_name;
  VAR_13 = FUNC_3(&VAR_10->pdev->dev.kobj,
      &VAR_10->fields[VAR_14].
      hid_custom_attribute_group);
  if (VAR_13)
   break;


  if (VAR_10->fields[VAR_14].attribute.attrib_id ==
     VAR_5)
   VAR_10->power_state = &VAR_10->fields[VAR_14];
  else if (VAR_10->fields[VAR_14].attribute.attrib_id ==
     VAR_4)
   VAR_10->report_state = &VAR_10->fields[VAR_14];
 }

 return VAR_13;
}
