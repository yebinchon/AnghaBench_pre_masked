
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int i3c; } ;
struct TYPE_9__ {TYPE_3__ devs; } ;
struct i3c_master_controller {TYPE_4__ bus; TYPE_1__* ops; struct i3c_dev_desc* this; } ;
struct TYPE_7__ {int node; } ;
struct TYPE_10__ {int dyn_addr; int static_addr; } ;
struct i3c_dev_desc {TYPE_2__ common; TYPE_5__ info; } ;
struct TYPE_6__ {int (* attach_i3c_dev ) (struct i3c_dev_desc*) ;} ;


 int FUNC_0 (struct i3c_dev_desc*) ;
 int FUNC_1 (struct i3c_dev_desc*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct i3c_dev_desc*) ;

__attribute__((used)) static int FUNC_4(struct i3c_master_controller *VAR_0,
         struct i3c_dev_desc *VAR_1)
{
 int VAR_2;





 if (!VAR_1->info.static_addr && !VAR_1->info.dyn_addr)
  return 0;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;


 if (VAR_0->this != VAR_1 && VAR_0->ops->attach_i3c_dev) {
  VAR_2 = VAR_0->ops->attach_i3c_dev(VAR_1);
  if (VAR_2) {
   FUNC_1(VAR_1);
   return VAR_2;
  }
 }

 FUNC_2(&VAR_1->common.node, &VAR_0->bus.devs.i3c);

 return 0;
}
