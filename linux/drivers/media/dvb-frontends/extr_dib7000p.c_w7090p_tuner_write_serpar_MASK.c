
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct i2c_msg {scalar_t__* buf; } ;
struct i2c_adapter {int dummy; } ;
struct dib7000p_state {int dummy; } ;


 int FUNC_0 (struct dib7000p_state*,int) ;
 int FUNC_1 (struct dib7000p_state*,int,int) ;
 int FUNC_2 (char*) ;
 struct dib7000p_state* FUNC_3 (struct i2c_adapter*) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_0, struct i2c_msg VAR_1[], int VAR_2)
{
 struct dib7000p_state *VAR_3 = FUNC_3(VAR_0);
 u8 VAR_4 = 1;
 u16 VAR_5 = 1000;
 u16 VAR_6 = VAR_1[0].buf[0];

 while (VAR_4 == 1 && VAR_5) {
  VAR_4 = (FUNC_0(VAR_3, 1984) >> 1) & 0x1;
  VAR_5--;
  if (VAR_5 == 0)
   FUNC_2("Tuner ITF: write busy (overflow)\n");
 }
 FUNC_1(VAR_3, 1985, (1 << 6) | (VAR_6 & 0x3f));
 FUNC_1(VAR_3, 1986, (VAR_1[0].buf[1] << 8) | VAR_1[0].buf[2]);

 return VAR_2;
}
