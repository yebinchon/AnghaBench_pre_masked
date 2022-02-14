
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_handler {int (* connect ) (struct input_handler*,struct input_dev*,struct input_device_id const*) ;int name; } ;
struct input_device_id {int dummy; } ;
struct TYPE_2__ {int kobj; } ;
struct input_dev {TYPE_1__ dev; } ;


 int VAR_0 ;
 struct input_device_id* FUNC_0 (struct input_handler*,struct input_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ,int) ;
 int FUNC_3 (struct input_handler*,struct input_dev*,struct input_device_id const*) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_1, struct input_handler *VAR_2)
{
 const struct input_device_id *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = VAR_2->connect(VAR_2, VAR_1, VAR_3);
 if (VAR_4 && VAR_4 != -VAR_0)
  FUNC_2("failed to attach handler %s to device %s, error: %d\n",
         VAR_2->name, FUNC_1(&VAR_1->dev.kobj), VAR_4);

 return VAR_4;
}
