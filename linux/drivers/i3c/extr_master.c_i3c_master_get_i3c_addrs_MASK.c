
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i3c_master_controller {int bus; } ;
struct TYPE_4__ {int static_addr; int dyn_addr; } ;
struct i3c_dev_desc {TYPE_2__ info; TYPE_1__* boardinfo; } ;
typedef enum i3c_addr_slot_status { ____Placeholder_i3c_addr_slot_status } i3c_addr_slot_status ;
struct TYPE_3__ {int init_dyn_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 struct i3c_master_controller* FUNC_2 (struct i3c_dev_desc*) ;

__attribute__((used)) static int FUNC_3(struct i3c_dev_desc *VAR_3)
{
 struct i3c_master_controller *VAR_4 = FUNC_2(VAR_3);
 enum i3c_addr_slot_status VAR_5;

 if (!VAR_3->info.static_addr && !VAR_3->info.dyn_addr)
  return 0;

 if (VAR_3->info.static_addr) {
  VAR_5 = FUNC_0(&VAR_4->bus,
            VAR_3->info.static_addr);
  if (VAR_5 != VAR_1)
   return -VAR_0;

  FUNC_1(&VAR_4->bus,
          VAR_3->info.static_addr,
          VAR_2);
 }






 if (VAR_3->info.dyn_addr &&
     (!VAR_3->boardinfo ||
      VAR_3->boardinfo->init_dyn_addr != VAR_3->info.dyn_addr)) {
  VAR_5 = FUNC_0(&VAR_4->bus,
            VAR_3->info.dyn_addr);
  if (VAR_5 != VAR_1)
   goto err_release_static_addr;

  FUNC_1(&VAR_4->bus, VAR_3->info.dyn_addr,
          VAR_2);
 }

 return 0;

err_release_static_addr:
 if (VAR_3->info.static_addr)
  FUNC_1(&VAR_4->bus,
          VAR_3->info.static_addr,
          VAR_1);

 return -VAR_0;
}
