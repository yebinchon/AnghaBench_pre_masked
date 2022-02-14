
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int* buf; } ;
struct i2c_adapter {int dummy; } ;
struct dib8000_state {int dummy; } ;
typedef int read_word ;


 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*,int,int) ;
 int FUNC_2 (char*) ;
 struct dib8000_state* FUNC_3 (struct i2c_adapter*) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_0,
  struct i2c_msg VAR_1[], int VAR_2)
{
 struct dib8000_state *VAR_3 = FUNC_3(VAR_0);
 u8 VAR_4 = 1, VAR_5 = 1;
 u16 VAR_6 = 1000;
 u16 VAR_7 = VAR_1[0].buf[0];
 u16 VAR_8;

 while (VAR_4 == 1 && VAR_6) {
  VAR_4 = (FUNC_0(VAR_3, 1984) >> 1) & 0x1;
  VAR_6--;
  if (VAR_6 == 0)
   FUNC_2("TunerITF: read busy (overflow)\n");
 }
 FUNC_1(VAR_3, 1985, (0<<6) | (VAR_7&0x3f));

 VAR_6 = 1000;
 while (VAR_5 == 1 && VAR_6) {
  VAR_5 = FUNC_0(VAR_3, 1984)&0x1;
  VAR_6--;
  if (VAR_6 == 0)
   FUNC_2("TunerITF: read busy (empty)\n");
 }

 VAR_8 = FUNC_0(VAR_3, 1987);
 VAR_1[1].buf[0] = (VAR_8 >> 8) & 0xff;
 VAR_1[1].buf[1] = (VAR_8) & 0xff;

 return VAR_2;
}
