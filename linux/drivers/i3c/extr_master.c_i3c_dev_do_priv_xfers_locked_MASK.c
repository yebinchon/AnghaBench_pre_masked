
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i3c_priv_xfer {int dummy; } ;
struct i3c_master_controller {TYPE_1__* ops; } ;
struct i3c_dev_desc {int dummy; } ;
struct TYPE_2__ {int (* priv_xfers ) (struct i3c_dev_desc*,struct i3c_priv_xfer*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct i3c_master_controller* FUNC_0 (struct i3c_dev_desc*) ;
 int FUNC_1 (struct i3c_dev_desc*,struct i3c_priv_xfer*,int) ;

int FUNC_2(struct i3c_dev_desc *VAR_3,
     struct i3c_priv_xfer *VAR_4,
     int VAR_5)
{
 struct i3c_master_controller *VAR_6;

 if (!VAR_3)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_3);
 if (!VAR_6 || !VAR_4)
  return -VAR_0;

 if (!VAR_6->ops->priv_xfers)
  return -VAR_2;

 return VAR_6->ops->priv_xfers(VAR_3, VAR_4, VAR_5);
}
