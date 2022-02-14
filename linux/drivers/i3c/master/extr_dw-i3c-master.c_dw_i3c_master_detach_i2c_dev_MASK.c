
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i3c_master_controller {int dummy; } ;
struct i2c_dev_desc {int dummy; } ;
struct dw_i3c_master {int free_pos; scalar_t__* addrs; int datstartaddr; scalar_t__ regs; } ;
struct dw_i3c_i2c_dev_data {size_t index; } ;


 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (int ,size_t) ;
 struct i3c_master_controller* FUNC_2 (struct i2c_dev_desc*) ;
 struct dw_i3c_i2c_dev_data* FUNC_3 (struct i2c_dev_desc*) ;
 int FUNC_4 (struct i2c_dev_desc*,int *) ;
 int FUNC_5 (struct dw_i3c_i2c_dev_data*) ;
 struct dw_i3c_master* FUNC_6 (struct i3c_master_controller*) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct i2c_dev_desc *VAR_0)
{
 struct dw_i3c_i2c_dev_data *VAR_1 = FUNC_3(VAR_0);
 struct i3c_master_controller *VAR_2 = FUNC_2(VAR_0);
 struct dw_i3c_master *VAR_3 = FUNC_6(VAR_2);

 FUNC_7(0,
        VAR_3->regs +
        FUNC_1(VAR_3->datstartaddr, VAR_1->index));

 FUNC_4(VAR_0, ((void*)0));
 VAR_3->addrs[VAR_1->index] = 0;
 VAR_3->free_pos |= FUNC_0(VAR_1->index);
 FUNC_5(VAR_1);
}
