
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_handler {scalar_t__ (* match ) (struct input_handler*,struct input_dev*) ;struct input_device_id* id_table; } ;
struct input_device_id {scalar_t__ driver_info; scalar_t__ flags; } ;
struct input_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct input_dev*,struct input_device_id const*) ;
 scalar_t__ FUNC_1 (struct input_handler*,struct input_dev*) ;

__attribute__((used)) static const struct input_device_id *FUNC_2(struct input_handler *VAR_0,
       struct input_dev *VAR_1)
{
 const struct input_device_id *VAR_2;

 for (VAR_2 = VAR_0->id_table; VAR_2->flags || VAR_2->driver_info; VAR_2++) {
  if (FUNC_0(VAR_1, VAR_2) &&
      (!VAR_0->match || VAR_0->match(VAR_0, VAR_1))) {
   return VAR_2;
  }
 }

 return ((void*)0);
}
