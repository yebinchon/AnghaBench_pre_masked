
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i3c_master_controller {TYPE_1__* ops; } ;
struct i3c_dev_desc {TYPE_2__* ibi; } ;
struct TYPE_4__ {int enabled; } ;
struct TYPE_3__ {int (* free_ibi ) (struct i3c_dev_desc*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct i3c_dev_desc*) ;
 struct i3c_master_controller* FUNC_2 (struct i3c_dev_desc*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct i3c_dev_desc*) ;

void FUNC_5(struct i3c_dev_desc *VAR_0)
{
 struct i3c_master_controller *VAR_1 = FUNC_2(VAR_0);

 if (!VAR_0->ibi)
  return;

 if (FUNC_0(VAR_0->ibi->enabled))
  FUNC_0(FUNC_1(VAR_0));

 VAR_1->ops->free_ibi(VAR_0);
 FUNC_3(VAR_0->ibi);
 VAR_0->ibi = ((void*)0);
}
