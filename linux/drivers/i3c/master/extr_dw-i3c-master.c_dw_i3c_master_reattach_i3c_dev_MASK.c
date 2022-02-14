
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i3c_master_controller {int dummy; } ;
struct TYPE_2__ {int dyn_addr; } ;
struct i3c_dev_desc {TYPE_1__ info; } ;
struct dw_i3c_master {int * addrs; int datstartaddr; scalar_t__ regs; } ;
struct dw_i3c_i2c_dev_data {size_t index; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,size_t) ;
 struct i3c_master_controller* FUNC_2 (struct i3c_dev_desc*) ;
 struct dw_i3c_i2c_dev_data* FUNC_3 (struct i3c_dev_desc*) ;
 struct dw_i3c_master* FUNC_4 (struct i3c_master_controller*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct i3c_dev_desc *VAR_0,
       u8 VAR_1)
{
 struct dw_i3c_i2c_dev_data *VAR_2 = FUNC_3(VAR_0);
 struct i3c_master_controller *VAR_3 = FUNC_2(VAR_0);
 struct dw_i3c_master *VAR_4 = FUNC_4(VAR_3);

 FUNC_5(FUNC_0(VAR_0->info.dyn_addr),
        VAR_4->regs +
        FUNC_1(VAR_4->datstartaddr, VAR_2->index));

 VAR_4->addrs[VAR_2->index] = VAR_0->info.dyn_addr;

 return 0;
}
