
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pidff_device {TYPE_2__* block_load; int hid; } ;
struct input_dev {int ffbit; } ;
struct TYPE_4__ {scalar_t__* value; TYPE_1__* field; } ;
struct TYPE_3__ {scalar_t__ logical_minimum; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct pidff_device*,int) ;
 int FUNC_3 (struct pidff_device*,scalar_t__) ;
 int FUNC_4 (struct pidff_device*,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct pidff_device *VAR_2,
      struct input_dev *VAR_3)
{
 int VAR_4;
 VAR_4 = FUNC_4(VAR_2, 1);
 if (VAR_4) {
  FUNC_0(VAR_2->hid, "upload request failed\n");
  return VAR_4;
 }

 if (VAR_2->block_load[VAR_1].value[0] ==
     VAR_2->block_load[VAR_1].field->logical_minimum + 1) {
  FUNC_2(VAR_2, 0xffff);
  FUNC_5(VAR_0, VAR_3->ffbit);
 } else {
  FUNC_1(VAR_2->hid,
      "device has unknown autocenter control method\n");
 }

 FUNC_3(VAR_2,
   VAR_2->block_load[VAR_1].value[0]);

 return 0;

}
