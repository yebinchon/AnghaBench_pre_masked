
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i3c_master_controller {TYPE_2__* ops; } ;
struct TYPE_3__ {int node; } ;
struct i2c_dev_desc {TYPE_1__ common; } ;
struct TYPE_4__ {int (* detach_i2c_dev ) (struct i2c_dev_desc*) ;} ;


 struct i3c_master_controller* FUNC_0 (struct i2c_dev_desc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct i2c_dev_desc*) ;

__attribute__((used)) static void FUNC_3(struct i2c_dev_desc *VAR_0)
{
 struct i3c_master_controller *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_0->common.node);

 if (VAR_1->ops->detach_i2c_dev)
  VAR_1->ops->detach_i2c_dev(VAR_0);
}
