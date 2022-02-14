
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i3c_bus {int dummy; } ;
struct i3c_master_controller {struct i3c_bus bus; } ;
struct device {int * type; } ;
struct TYPE_2__ {struct i3c_bus* bus; } ;


 TYPE_1__* FUNC_0 (struct device*) ;
 struct i3c_master_controller* FUNC_1 (struct device*) ;
 int VAR_0 ;

__attribute__((used)) static struct i3c_bus *FUNC_2(struct device *VAR_1)
{
 struct i3c_master_controller *VAR_2;

 if (VAR_1->type == &VAR_0)
  return FUNC_0(VAR_1)->bus;

 VAR_2 = FUNC_1(VAR_1);

 return &VAR_2->bus;
}
