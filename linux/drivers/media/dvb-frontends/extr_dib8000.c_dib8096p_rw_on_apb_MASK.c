
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int word ;
typedef int u16 ;
struct i2c_msg {int* buf; } ;
struct i2c_adapter {int dummy; } ;
struct dib8000_state {int dummy; } ;


 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*,int,int) ;
 struct dib8000_state* FUNC_2 (struct i2c_adapter*) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_0,
  struct i2c_msg VAR_1[], int VAR_2, u16 VAR_3)
{
 struct dib8000_state *VAR_4 = FUNC_2(VAR_0);
 u16 VAR_5;

 if (VAR_2 == 1) {
  FUNC_1(VAR_4, VAR_3,
    ((VAR_1[0].buf[1] << 8) | (VAR_1[0].buf[2])));
 } else {
  VAR_5 = FUNC_0(VAR_4, VAR_3);
  VAR_1[1].buf[0] = (VAR_5 >> 8) & 0xff;
  VAR_1[1].buf[1] = (VAR_5) & 0xff;
 }
 return VAR_2;
}
