
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i3c_master_controller_ops {int recycle_ibi_slot; int free_ibi; int disable_ibi; int enable_ibi; scalar_t__ request_ibi; int i2c_xfers; int do_daa; int send_ccc_cmd; int priv_xfers; int bus_init; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct i3c_master_controller_ops *VAR_1)
{
 if (!VAR_1 || !VAR_1->bus_init || !VAR_1->priv_xfers ||
     !VAR_1->send_ccc_cmd || !VAR_1->do_daa || !VAR_1->i2c_xfers)
  return -VAR_0;

 if (VAR_1->request_ibi &&
     (!VAR_1->enable_ibi || !VAR_1->disable_ibi || !VAR_1->free_ibi ||
      !VAR_1->recycle_ibi_slot))
  return -VAR_0;

 return 0;
}
