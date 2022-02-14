
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int i3c; } ;
struct device {int dummy; } ;
struct i3c_master_controller {TYPE_1__ boardinfo; int bus; struct device dev; } ;
struct i3c_dev_boardinfo {int static_addr; int pid; int init_dyn_addr; int node; int of_node; } ;
struct device_node {int dummy; } ;
typedef enum i3c_addr_slot_status { ____Placeholder_i3c_addr_slot_status } i3c_addr_slot_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 struct i3c_dev_boardinfo* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*,char*,int*) ;

__attribute__((used)) static int
FUNC_7(struct i3c_master_controller *VAR_5,
    struct device_node *VAR_6, u32 *VAR_7)
{
 struct i3c_dev_boardinfo *VAR_8;
 struct device *VAR_9 = &VAR_5->dev;
 enum i3c_addr_slot_status VAR_10;
 u32 VAR_11 = 0;

 VAR_8 = FUNC_2(VAR_9, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 if (VAR_7[0]) {
  if (VAR_7[0] > VAR_4)
   return -VAR_0;

  VAR_10 = FUNC_3(&VAR_5->bus,
         VAR_7[0]);
  if (VAR_10 != VAR_3)
   return -VAR_0;
 }

 VAR_8->static_addr = VAR_7[0];

 if (!FUNC_6(VAR_6, "assigned-address", &VAR_11)) {
  if (VAR_11 > VAR_4)
   return -VAR_0;

  VAR_10 = FUNC_3(&VAR_5->bus,
         VAR_11);
  if (VAR_10 != VAR_3)
   return -VAR_0;
 }

 VAR_8->pid = ((u64)VAR_7[1] << 32) | VAR_7[2];

 if ((VAR_8->pid & FUNC_0(63, 48)) ||
     FUNC_1(VAR_8->pid))
  return -VAR_0;

 VAR_8->init_dyn_addr = VAR_11;
 VAR_8->of_node = FUNC_5(VAR_6);
 FUNC_4(&VAR_8->node, &VAR_5->boardinfo.i3c);

 return 0;
}
