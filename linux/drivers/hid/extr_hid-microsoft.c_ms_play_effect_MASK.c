
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ms_data {int strong; int weak; int ff_worker; } ;
struct input_dev {int dummy; } ;
struct hid_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ weak_magnitude; scalar_t__ strong_magnitude; } ;
struct TYPE_4__ {TYPE_1__ rumble; } ;
struct ff_effect {scalar_t__ type; TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ms_data* FUNC_0 (struct hid_device*) ;
 struct hid_device* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_2, void *VAR_3,
     struct ff_effect *VAR_4)
{
 struct hid_device *VAR_5 = FUNC_1(VAR_2);
 struct ms_data *VAR_6 = FUNC_0(VAR_5);

 if (VAR_4->type != VAR_0)
  return 0;




 VAR_6->strong = ((u32) VAR_4->u.rumble.strong_magnitude * 100) / VAR_1;
 VAR_6->weak = ((u32) VAR_4->u.rumble.weak_magnitude * 100) / VAR_1;

 FUNC_2(&VAR_6->ff_worker);
 return 0;
}
