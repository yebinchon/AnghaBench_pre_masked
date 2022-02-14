
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i3c_master_controller {int bus; } ;
struct TYPE_4__ {int dyn_addr; int static_addr; } ;
struct i3c_dev_desc {TYPE_2__ info; TYPE_1__* boardinfo; } ;
struct TYPE_3__ {scalar_t__ init_dyn_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 struct i3c_master_controller* FUNC_1 (struct i3c_dev_desc*) ;

__attribute__((used)) static void FUNC_2(struct i3c_dev_desc *VAR_1)
{
 struct i3c_master_controller *VAR_2 = FUNC_1(VAR_1);

 if (VAR_1->info.static_addr)
  FUNC_0(&VAR_2->bus,
          VAR_1->info.static_addr,
          VAR_0);

 if (VAR_1->info.dyn_addr)
  FUNC_0(&VAR_2->bus, VAR_1->info.dyn_addr,
          VAR_0);

 if (VAR_1->boardinfo && VAR_1->boardinfo->init_dyn_addr)
  FUNC_0(&VAR_2->bus, VAR_1->info.dyn_addr,
          VAR_0);
}
