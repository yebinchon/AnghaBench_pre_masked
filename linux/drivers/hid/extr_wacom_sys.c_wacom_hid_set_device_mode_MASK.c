
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hid_data {size_t inputmode; size_t inputmode_index; } ;
struct TYPE_4__ {struct hid_data hid_data; } ;
struct wacom {TYPE_2__ wacom_wac; } ;
struct hid_report_enum {struct hid_report** report_id_hash; } ;
struct hid_report {TYPE_1__** field; } ;
struct hid_device {struct hid_report_enum* report_enum; } ;
struct TYPE_3__ {int* value; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct wacom* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,struct hid_report*,int ) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_2)
{
 struct wacom *VAR_3 = FUNC_0(VAR_2);
 struct hid_data *VAR_4 = &VAR_3->wacom_wac.hid_data;
 struct hid_report *VAR_5;
 struct hid_report_enum *VAR_6;

 if (VAR_4->inputmode < 0)
  return 0;

 VAR_6 = &(VAR_2->report_enum[VAR_0]);
 VAR_5 = VAR_6->report_id_hash[VAR_4->inputmode];
 if (VAR_5) {
  VAR_5->field[0]->value[VAR_4->inputmode_index] = 2;
  FUNC_1(VAR_2, VAR_5, VAR_1);
 }
 return 0;
}
