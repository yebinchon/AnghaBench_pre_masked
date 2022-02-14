
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_report_enum {struct hid_report** report_id_hash; } ;
struct hid_report {TYPE_1__** field; } ;
struct hid_device {struct hid_report_enum* report_enum; } ;
struct TYPE_2__ {int report_count; } ;


 size_t VAR_0 ;

__attribute__((used)) static int FUNC_0(struct hid_device *VAR_1, int VAR_2)
{
 struct hid_report_enum *VAR_3;
 struct hid_report *VAR_4;

 VAR_3 = &(VAR_1->report_enum[VAR_0]);
 VAR_4 = VAR_3->report_id_hash[VAR_2];
 if (!VAR_4)
  return 0;

 return VAR_4->field[0]->report_count + 1;
}
