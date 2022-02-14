
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i3c_master_controller {int dummy; } ;
struct TYPE_3__ {int dyn_addr; int static_addr; } ;
struct i3c_dev_desc {TYPE_2__* boardinfo; TYPE_1__ info; } ;
struct TYPE_4__ {int init_dyn_addr; int static_addr; } ;


 struct i3c_master_controller* FUNC_0 (struct i3c_dev_desc*) ;
 int FUNC_1 (struct i3c_dev_desc*,int ) ;
 int FUNC_2 (struct i3c_dev_desc*) ;
 int FUNC_3 (struct i3c_master_controller*,int ) ;
 int FUNC_4 (struct i3c_master_controller*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct i3c_dev_desc *VAR_0)
{
 struct i3c_master_controller *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 if (!VAR_0->boardinfo || !VAR_0->boardinfo->init_dyn_addr ||
     !VAR_0->boardinfo->static_addr)
  return;

 VAR_2 = FUNC_4(VAR_1, VAR_0->info.static_addr,
     VAR_0->boardinfo->init_dyn_addr);
 if (VAR_2)
  return;

 VAR_0->info.dyn_addr = VAR_0->boardinfo->init_dyn_addr;
 VAR_2 = FUNC_1(VAR_0, 0);
 if (VAR_2)
  goto err_rstdaa;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  goto err_rstdaa;

 return;

err_rstdaa:
 FUNC_3(VAR_1, VAR_0->boardinfo->init_dyn_addr);
}
