
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i3c_master_controller {int dummy; } ;
struct TYPE_2__ {scalar_t__ static_addr; scalar_t__ dyn_addr; } ;
struct i3c_dev_desc {TYPE_1__ info; } ;
struct cdns_i3c_master {scalar_t__ regs; } ;
struct cdns_i3c_i2c_dev_data {int id; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 struct i3c_master_controller* FUNC_1 (struct i3c_dev_desc*) ;
 struct cdns_i3c_i2c_dev_data* FUNC_2 (struct i3c_dev_desc*) ;
 int FUNC_3 (scalar_t__) ;
 struct cdns_i3c_master* FUNC_4 (struct i3c_master_controller*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct i3c_dev_desc *VAR_1)
{
 struct i3c_master_controller *VAR_2 = FUNC_1(VAR_1);
 struct cdns_i3c_master *VAR_3 = FUNC_4(VAR_2);
 struct cdns_i3c_i2c_dev_data *VAR_4 = FUNC_2(VAR_1);
 u32 VAR_5;

 VAR_5 = FUNC_3(VAR_1->info.dyn_addr ?
         VAR_1->info.dyn_addr :
         VAR_1->info.static_addr);
 FUNC_5(VAR_0 | VAR_5, VAR_3->regs + FUNC_0(VAR_4->id));
}
