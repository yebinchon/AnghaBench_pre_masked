
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int addr; int len; int* buf; int flags; } ;
struct dib3000mc_state {int i2c_addr; int i2c_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct dib3000mc_state *VAR_3, u16 VAR_4, u16 VAR_5)
{
 struct i2c_msg VAR_6 = {
  .addr = VAR_3->i2c_addr >> 1, .flags = 0, .len = 4
 };
 int VAR_7;
 u8 *VAR_8;

 VAR_8 = FUNC_2(4, VAR_2);
 if (!VAR_8)
  return -VAR_0;

 VAR_8[0] = VAR_4 >> 8;
 VAR_8[1] = VAR_4;
 VAR_8[2] = VAR_5 >> 8;
 VAR_8[3] = VAR_5;

 VAR_6.buf = VAR_8;

 VAR_7 = FUNC_0(VAR_3->i2c_adap, &VAR_6, 1) != 1 ? -VAR_1 : 0;
 FUNC_1(VAR_8);

 return VAR_7;
}
