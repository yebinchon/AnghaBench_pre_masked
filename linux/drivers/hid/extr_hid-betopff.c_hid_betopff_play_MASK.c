
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
struct TYPE_5__ {int strong_magnitude; int weak_magnitude; } ;
struct TYPE_6__ {TYPE_1__ rumble; } ;
struct ff_effect {TYPE_2__ u; } ;
struct betopff_device {TYPE_4__* report; } ;
typedef int __u16 ;
struct TYPE_8__ {TYPE_3__** field; } ;
struct TYPE_7__ {int* value; } ;


 int VAR_0 ;
 int FUNC_0 (struct hid_device*,TYPE_4__*,int ) ;
 struct hid_device* FUNC_1 (struct input_dev*) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_1, void *VAR_2,
    struct ff_effect *VAR_3)
{
 struct hid_device *VAR_4 = FUNC_1(VAR_1);
 struct betopff_device *VAR_5 = VAR_2;
 __u16 VAR_6, VAR_7;

 VAR_6 = VAR_3->u.rumble.strong_magnitude;
 VAR_7 = VAR_3->u.rumble.weak_magnitude;

 VAR_5->report->field[2]->value[0] = VAR_6 / 256;
 VAR_5->report->field[3]->value[0] = VAR_7 / 256;

 FUNC_0(VAR_4, VAR_5->report, VAR_0);

 return 0;
}
