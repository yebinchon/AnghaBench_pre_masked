
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i3c_master_controller {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* bus_cleanup ) (struct i3c_master_controller*) ;} ;


 int FUNC_0 (struct i3c_master_controller*) ;
 int FUNC_1 (struct i3c_master_controller*) ;

__attribute__((used)) static void FUNC_2(struct i3c_master_controller *VAR_0)
{
 if (VAR_0->ops->bus_cleanup)
  VAR_0->ops->bus_cleanup(VAR_0);

 FUNC_0(VAR_0);
}
