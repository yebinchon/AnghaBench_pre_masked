
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hidpp_ff_private_data {int effect_ids; int wq; TYPE_1__* hidpp; } ;
struct hid_device {int dev; } ;
struct ff_device {struct hidpp_ff_private_data* private; } ;
struct TYPE_2__ {struct hid_device* hid_dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct hid_device*,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ff_device *VAR_1)
{
 struct hidpp_ff_private_data *VAR_2 = VAR_1->private;
 struct hid_device *VAR_3 = VAR_2->hidpp->hid_dev;

 FUNC_2(VAR_3, "Unloading HID++ force feedback.\n");

 FUNC_1(&VAR_3->dev, &VAR_0);
 FUNC_0(VAR_2->wq);
 FUNC_3(VAR_2->effect_ids);
}
