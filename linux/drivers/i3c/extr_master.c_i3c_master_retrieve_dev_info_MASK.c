
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct i3c_master_controller {int bus; } ;
struct TYPE_8__ {int bcr; int max_ibi_len; int dyn_addr; } ;
struct i3c_dev_desc {TYPE_1__ info; } ;
typedef enum i3c_addr_slot_status { ____Placeholder_i3c_addr_slot_status } i3c_addr_slot_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 struct i3c_master_controller* FUNC_1 (struct i3c_dev_desc*) ;
 int FUNC_2 (struct i3c_master_controller*,TYPE_1__*) ;
 int FUNC_3 (struct i3c_master_controller*,TYPE_1__*) ;
 int FUNC_4 (struct i3c_master_controller*,TYPE_1__*) ;
 int FUNC_5 (struct i3c_master_controller*,TYPE_1__*) ;
 int FUNC_6 (struct i3c_master_controller*,TYPE_1__*) ;
 int FUNC_7 (struct i3c_master_controller*,TYPE_1__*) ;
 int FUNC_8 (struct i3c_master_controller*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(struct i3c_dev_desc *VAR_6)
{
 struct i3c_master_controller *VAR_7 = FUNC_1(VAR_6);
 enum i3c_addr_slot_status VAR_8;
 int VAR_9;

 if (!VAR_6->info.dyn_addr)
  return -VAR_0;

 VAR_8 = FUNC_0(&VAR_7->bus,
         VAR_6->info.dyn_addr);
 if (VAR_8 == VAR_2 ||
     VAR_8 == VAR_1)
  return -VAR_0;

 VAR_9 = FUNC_8(VAR_7, &VAR_6->info);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_7, &VAR_6->info);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_3(VAR_7, &VAR_6->info);
 if (VAR_9)
  return VAR_9;

 if (VAR_6->info.bcr & VAR_5) {
  VAR_9 = FUNC_7(VAR_7, &VAR_6->info);
  if (VAR_9)
   return VAR_9;
 }

 if (VAR_6->info.bcr & VAR_4)
  VAR_6->info.max_ibi_len = 1;

 FUNC_5(VAR_7, &VAR_6->info);
 FUNC_6(VAR_7, &VAR_6->info);

 if (VAR_6->info.bcr & VAR_3) {
  VAR_9 = FUNC_4(VAR_7, &VAR_6->info);
  if (VAR_9)
   return VAR_9;
 }

 return 0;
}
