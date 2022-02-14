
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int * buf; int addr; } ;
struct dibx000_i2c_master {int selected_interface; int i2c_adap; int i2c_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct dibx000_i2c_master*,int *,int ,int ) ;
 int FUNC_1 (struct dibx000_i2c_master*,int ) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;

void FUNC_3(struct dibx000_i2c_master *VAR_1)
{

 u8 VAR_2[4];
 struct i2c_msg VAR_3 = {.addr = VAR_1->i2c_addr,.buf = VAR_2,.len = 4 };

 FUNC_0(VAR_1, VAR_2, 0, 0);
 FUNC_2(VAR_1->i2c_adap, &VAR_3, 1);
 VAR_1->selected_interface = 0xff;
 FUNC_1(VAR_1, VAR_0);
}
