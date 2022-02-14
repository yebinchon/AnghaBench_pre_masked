
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i3c_master_controller {TYPE_1__* ops; } ;
struct i3c_dev_desc {TYPE_2__* ibi; } ;
struct TYPE_4__ {int enabled; int all_ibis_handled; int pending_ibis; } ;
struct TYPE_3__ {int (* disable_ibi ) (struct i3c_dev_desc*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct i3c_master_controller* FUNC_1 (struct i3c_dev_desc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct i3c_dev_desc*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct i3c_dev_desc *VAR_1)
{
 struct i3c_master_controller *VAR_2;
 int VAR_3;

 if (!VAR_1->ibi)
  return -VAR_0;

 VAR_2 = FUNC_1(VAR_1);
 VAR_3 = VAR_2->ops->disable_ibi(VAR_1);
 if (VAR_3)
  return VAR_3;

 FUNC_2(&VAR_1->ibi->all_ibis_handled);
 if (FUNC_0(&VAR_1->ibi->pending_ibis))
  FUNC_4(&VAR_1->ibi->all_ibis_handled);

 VAR_1->ibi->enabled = 0;

 return 0;
}
