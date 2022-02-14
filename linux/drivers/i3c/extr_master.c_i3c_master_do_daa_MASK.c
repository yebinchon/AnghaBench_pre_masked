
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i3c_master_controller {int bus; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* do_daa ) (struct i3c_master_controller*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct i3c_master_controller*) ;
 int FUNC_5 (struct i3c_master_controller*) ;

int FUNC_6(struct i3c_master_controller *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->bus);
 VAR_1 = VAR_0->ops->do_daa(VAR_0);
 FUNC_1(&VAR_0->bus);

 if (VAR_1)
  return VAR_1;

 FUNC_2(&VAR_0->bus);
 FUNC_4(VAR_0);
 FUNC_3(&VAR_0->bus);

 return 0;
}
