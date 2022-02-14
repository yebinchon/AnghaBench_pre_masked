
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lenovo_drvdata_tpkbd {int sensitivity; int press_speed; scalar_t__ select_right; scalar_t__ release_to_select; scalar_t__ dragging; scalar_t__ press_to_select; } ;
struct hid_report {TYPE_2__** field; } ;
struct hid_device {TYPE_1__* report_enum; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_3__ {struct hid_report** report_id_hash; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct lenovo_drvdata_tpkbd* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,struct hid_report*,int ) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_2)
{
 struct hid_report *VAR_3;
 struct lenovo_drvdata_tpkbd *VAR_4 = FUNC_0(VAR_2);

 VAR_3 = VAR_2->report_enum[VAR_0].report_id_hash[4];

 VAR_3->field[0]->value[0] = VAR_4->press_to_select ? 0x01 : 0x02;
 VAR_3->field[0]->value[0] |= VAR_4->dragging ? 0x04 : 0x08;
 VAR_3->field[0]->value[0] |= VAR_4->release_to_select ? 0x10 : 0x20;
 VAR_3->field[0]->value[0] |= VAR_4->select_right ? 0x80 : 0x40;
 VAR_3->field[1]->value[0] = 0x03;
 VAR_3->field[2]->value[0] = VAR_4->sensitivity;
 VAR_3->field[3]->value[0] = VAR_4->press_speed;

 FUNC_1(VAR_2, VAR_3, VAR_1);
 return 0;
}
