
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i3c_master_controller {scalar_t__ wq; } ;
struct TYPE_2__ {int i3c; int i2c; } ;
struct i3c_bus {TYPE_1__ devs; } ;
struct device {int of_node; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 struct i3c_bus* FUNC_2 (struct device*) ;
 struct i3c_master_controller* FUNC_3 (struct device*) ;
 int FUNC_4 (struct i3c_bus*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_0)
{
 struct i3c_master_controller *VAR_1 = FUNC_3(VAR_0);
 struct i3c_bus *VAR_2 = FUNC_2(VAR_0);

 if (VAR_1->wq)
  FUNC_1(VAR_1->wq);

 FUNC_0(!FUNC_5(&VAR_2->devs.i2c) || !FUNC_5(&VAR_2->devs.i3c));
 FUNC_4(VAR_2);

 FUNC_6(VAR_0->of_node);
}
