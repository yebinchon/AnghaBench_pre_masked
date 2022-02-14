
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct hid_device {int dummy; } ;
struct TYPE_5__ {int weak_magnitude; int strong_magnitude; } ;
struct TYPE_6__ {TYPE_1__ rumble; } ;
struct ff_effect {TYPE_2__ u; } ;
struct emsff_device {TYPE_4__* report; } ;
struct TYPE_8__ {TYPE_3__** field; } ;
struct TYPE_7__ {int* value; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct hid_device*,TYPE_4__*,int ) ;
 struct hid_device* FUNC_2 (struct input_dev*) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_1, void *VAR_2,
    struct ff_effect *VAR_3)
{
 struct hid_device *VAR_4 = FUNC_2(VAR_1);
 struct emsff_device *VAR_5 = VAR_2;
 int VAR_6, VAR_7;

 VAR_6 = VAR_3->u.rumble.weak_magnitude;
 VAR_7 = VAR_3->u.rumble.strong_magnitude;

 FUNC_0("called with 0x%04x 0x%04x\n", VAR_7, VAR_6);

 VAR_6 = VAR_6 * 0xff / 0xffff;
 VAR_7 = VAR_7 * 0xff / 0xffff;

 VAR_5->report->field[0]->value[1] = VAR_6;
 VAR_5->report->field[0]->value[2] = VAR_7;

 FUNC_0("running with 0x%02x 0x%02x\n", VAR_7, VAR_6);
 FUNC_1(VAR_4, VAR_5->report, VAR_0);

 return 0;
}
