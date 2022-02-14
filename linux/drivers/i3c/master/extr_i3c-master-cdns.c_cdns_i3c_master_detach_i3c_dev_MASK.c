
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i3c_master_controller {int dummy; } ;
struct i3c_dev_desc {int dummy; } ;
struct cdns_i3c_master {int free_rr_slots; scalar_t__ regs; } ;
struct cdns_i3c_i2c_dev_data {int id; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 struct i3c_master_controller* FUNC_2 (struct i3c_dev_desc*) ;
 struct cdns_i3c_i2c_dev_data* FUNC_3 (struct i3c_dev_desc*) ;
 int FUNC_4 (struct i3c_dev_desc*,int *) ;
 int FUNC_5 (struct cdns_i3c_i2c_dev_data*) ;
 int FUNC_6 (scalar_t__) ;
 struct cdns_i3c_master* FUNC_7 (struct i3c_master_controller*) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct i3c_dev_desc *VAR_1)
{
 struct i3c_master_controller *VAR_2 = FUNC_2(VAR_1);
 struct cdns_i3c_master *VAR_3 = FUNC_7(VAR_2);
 struct cdns_i3c_i2c_dev_data *VAR_4 = FUNC_3(VAR_1);

 FUNC_8(FUNC_6(VAR_3->regs + VAR_0) |
        FUNC_1(VAR_4->id),
        VAR_3->regs + VAR_0);

 FUNC_4(VAR_1, ((void*)0));
 VAR_3->free_rr_slots |= FUNC_0(VAR_4->id);
 FUNC_5(VAR_4);
}
