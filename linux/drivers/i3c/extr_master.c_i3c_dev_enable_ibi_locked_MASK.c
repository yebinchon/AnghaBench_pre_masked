
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i3c_master_controller {TYPE_1__* ops; } ;
struct i3c_dev_desc {TYPE_2__* ibi; } ;
struct TYPE_4__ {int enabled; } ;
struct TYPE_3__ {int (* enable_ibi ) (struct i3c_dev_desc*) ;} ;


 int VAR_0 ;
 struct i3c_master_controller* FUNC_0 (struct i3c_dev_desc*) ;
 int FUNC_1 (struct i3c_dev_desc*) ;

int FUNC_2(struct i3c_dev_desc *VAR_1)
{
 struct i3c_master_controller *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 if (!VAR_1->ibi)
  return -VAR_0;

 VAR_3 = VAR_2->ops->enable_ibi(VAR_1);
 if (!VAR_3)
  VAR_1->ibi->enabled = 1;

 return VAR_3;
}
