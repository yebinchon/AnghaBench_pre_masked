
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
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;

__attribute__((used)) static u16 FUNC_4(struct dib3000mc_state *VAR_2, u16 VAR_3)
{
 struct i2c_msg VAR_4[2] = {
  { .addr = VAR_2->i2c_addr >> 1, .flags = 0, .len = 2 },
  { .addr = VAR_2->i2c_addr >> 1, .flags = VAR_1, .len = 2 },
 };
 u16 VAR_5;
 u8 *VAR_6;

 VAR_6 = FUNC_3(4, VAR_0);
 if (!VAR_6)
  return 0;

 VAR_6[0] = (VAR_3 >> 8) | 0x80;
 VAR_6[1] = VAR_3;
 VAR_6[2] = 0;
 VAR_6[3] = 0;

 VAR_4[0].buf = VAR_6;
 VAR_4[1].buf = VAR_6 + 2;

 if (FUNC_1(VAR_2->i2c_adap, VAR_4, 2) != 2)
  FUNC_0("i2c read error on %d\n",VAR_3);

 VAR_5 = (VAR_6[2] << 8) | VAR_6[3];
 FUNC_2(VAR_6);

 return VAR_5;
}
