
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_device_id {scalar_t__ flags; } ;
struct input_dev {int name; int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 scalar_t__ FUNC_1 (struct input_dev*,struct input_device_id const*) ;
 struct input_device_id* VAR_0 ;

__attribute__((used)) static bool FUNC_2(struct input_dev *VAR_1)
{
 const struct input_device_id *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->flags; VAR_2++) {
  if (FUNC_1(VAR_1, VAR_2)) {
   FUNC_0(&VAR_1->dev,
    "joydev: blacklisting '%s'\n", VAR_1->name);
   return 1;
  }
 }

 return 0;
}
