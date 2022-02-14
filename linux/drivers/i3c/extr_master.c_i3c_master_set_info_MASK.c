
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct i3c_dev_desc* cur_master; } ;
struct i3c_master_controller {struct i3c_dev_desc* this; TYPE_1__ bus; scalar_t__ secondary; } ;
struct i3c_device_info {int bcr; int dyn_addr; } ;
struct i3c_dev_desc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct i3c_dev_desc*) ;
 int FUNC_2 (struct i3c_dev_desc*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 struct i3c_dev_desc* FUNC_4 (struct i3c_master_controller*,struct i3c_device_info const*) ;
 int FUNC_5 (struct i3c_master_controller*,struct i3c_dev_desc*) ;
 int FUNC_6 (struct i3c_dev_desc*) ;

int FUNC_7(struct i3c_master_controller *VAR_2,
   const struct i3c_device_info *VAR_3)
{
 struct i3c_dev_desc *VAR_4;
 int VAR_5;

 if (!FUNC_3(&VAR_2->bus, VAR_3->dyn_addr))
  return -VAR_0;

 if (FUNC_0(VAR_3->bcr) == VAR_1 &&
     VAR_2->secondary)
  return -VAR_0;

 if (VAR_2->this)
  return -VAR_0;

 VAR_4 = FUNC_4(VAR_2, VAR_3);
 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_4);

 VAR_2->this = VAR_4;
 VAR_2->bus.cur_master = VAR_2->this;

 VAR_5 = FUNC_5(VAR_2, VAR_4);
 if (VAR_5)
  goto err_free_dev;

 return 0;

err_free_dev:
 FUNC_6(VAR_4);

 return VAR_5;
}
