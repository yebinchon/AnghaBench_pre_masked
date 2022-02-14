
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_sensor_hub_attribute_info {int size; int logical_maximum; int logical_minimum; int unit_expo; int units; void* report_id; void* index; } ;
struct hid_field {int report_size; int report_count; int logical_maximum; int logical_minimum; int unit_exponent; int unit; } ;
typedef void* s32 ;



__attribute__((used)) static void FUNC_0(
  struct hid_sensor_hub_attribute_info *VAR_0,
  s32 VAR_1, s32 VAR_2, struct hid_field *VAR_3)
{
 VAR_0->index = VAR_1;
 VAR_0->report_id = VAR_2;
 VAR_0->units = VAR_3->unit;
 VAR_0->unit_expo = VAR_3->unit_exponent;
 VAR_0->size = (VAR_3->report_size * VAR_3->report_count)/8;
 VAR_0->logical_minimum = VAR_3->logical_minimum;
 VAR_0->logical_maximum = VAR_3->logical_maximum;
}
