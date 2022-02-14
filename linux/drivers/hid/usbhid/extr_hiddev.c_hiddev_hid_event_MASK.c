
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hiddev_usage_ref {int value; int usage_code; struct hid_usage* usage_index; int field_index; int report_id; int report_type; } ;
struct hid_usage {int hid; } ;
struct hid_field {unsigned int report_type; int usage; int index; TYPE_1__* report; } ;
struct hid_device {int dummy; } ;
typedef int __s32 ;
struct TYPE_2__ {int id; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hid_device*,struct hiddev_usage_ref*) ;

void FUNC_1(struct hid_device *VAR_6, struct hid_field *VAR_7,
        struct hid_usage *VAR_8, __s32 VAR_9)
{
 unsigned VAR_10 = VAR_7->report_type;
 struct hiddev_usage_ref VAR_11;

 VAR_11.report_type =
   (VAR_10 == VAR_1) ? VAR_4 :
   ((VAR_10 == VAR_2) ? VAR_5 :
    ((VAR_10 == VAR_0) ? VAR_3 : 0));
 VAR_11.report_id = VAR_7->report->id;
 VAR_11.field_index = VAR_7->index;
 VAR_11.usage_index = (VAR_8 - VAR_7->usage);
 VAR_11.usage_code = VAR_8->hid;
 VAR_11.value = VAR_9;

 FUNC_0(VAR_6, &VAR_11);
}
