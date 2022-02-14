
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i3c_master_controller {TYPE_1__* ops; struct i3c_dev_desc* this; } ;
struct TYPE_4__ {int node; } ;
struct i3c_dev_desc {TYPE_2__ common; } ;
struct TYPE_3__ {int (* detach_i3c_dev ) (struct i3c_dev_desc*) ;} ;


 struct i3c_master_controller* FUNC_0 (struct i3c_dev_desc*) ;
 int FUNC_1 (struct i3c_dev_desc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct i3c_dev_desc*) ;

__attribute__((used)) static void FUNC_4(struct i3c_dev_desc *VAR_0)
{
 struct i3c_master_controller *VAR_1 = FUNC_0(VAR_0);


 if (VAR_1->this != VAR_0 && VAR_1->ops->detach_i3c_dev)
  VAR_1->ops->detach_i3c_dev(VAR_0);

 FUNC_1(VAR_0);
 FUNC_2(&VAR_0->common.node);
}
