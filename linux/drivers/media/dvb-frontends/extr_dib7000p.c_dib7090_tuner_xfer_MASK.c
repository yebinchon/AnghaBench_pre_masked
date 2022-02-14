
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int word ;
typedef int u16 ;
struct i2c_msg {int* buf; } ;
struct i2c_adapter {int dummy; } ;
struct dib7000p_state {int dummy; } ;


 int FUNC_0 (struct dib7000p_state*,int) ;
 int FUNC_1 (struct dib7000p_state*,int,int) ;
 int FUNC_2 (struct i2c_adapter*,struct i2c_msg*,int,int) ;
 struct dib7000p_state* FUNC_3 (struct i2c_adapter*) ;
 int FUNC_4 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_0, struct i2c_msg VAR_1[], int VAR_2)
{
 struct dib7000p_state *VAR_3 = FUNC_3(VAR_0);

 u16 VAR_4 = 0, VAR_5;
 int VAR_6 = 0;
 switch (VAR_1[0].buf[0]) {
 case 0x12:
  VAR_4 = 1920;
  break;
 case 0x14:
  VAR_4 = 1921;
  break;
 case 0x24:
  VAR_4 = 1922;
  break;
 case 0x1a:
  VAR_4 = 1923;
  break;
 case 0x22:
  VAR_4 = 1924;
  break;
 case 0x33:
  VAR_4 = 1926;
  break;
 case 0x34:
  VAR_4 = 1927;
  break;
 case 0x35:
  VAR_4 = 1928;
  break;
 case 0x36:
  VAR_4 = 1929;
  break;
 case 0x37:
  VAR_4 = 1930;
  break;
 case 0x38:
  VAR_4 = 1931;
  break;
 case 0x39:
  VAR_4 = 1932;
  break;
 case 0x2a:
  VAR_4 = 1935;
  break;
 case 0x2b:
  VAR_4 = 1936;
  break;
 case 0x2c:
  VAR_4 = 1937;
  break;
 case 0x2d:
  VAR_4 = 1938;
  break;
 case 0x2e:
  VAR_4 = 1939;
  break;
 case 0x2f:
  VAR_4 = 1940;
  break;
 case 0x30:
  VAR_4 = 1941;
  break;
 case 0x31:
  VAR_4 = 1942;
  break;
 case 0x32:
  VAR_4 = 1943;
  break;
 case 0x3e:
  VAR_4 = 1944;
  break;
 case 0x3f:
  VAR_4 = 1945;
  break;
 case 0x40:
  VAR_4 = 1948;
  break;
 case 0x25:
  VAR_4 = 914;
  break;
 case 0x26:
  VAR_4 = 915;
  break;
 case 0x27:
  VAR_4 = 917;
  break;
 case 0x28:
  VAR_4 = 916;
  break;
 case 0x1d:
  VAR_6 = ((FUNC_0(VAR_3, 72) >> 12) & 0x3);
  VAR_5 = FUNC_0(VAR_3, 384 + VAR_6);
  VAR_1[1].buf[0] = (VAR_5 >> 8) & 0xff;
  VAR_1[1].buf[1] = (VAR_5) & 0xff;
  return VAR_2;
 case 0x1f:
  if (VAR_2 == 1) {
   VAR_5 = (u16) ((VAR_1[0].buf[1] << 8) | VAR_1[0].buf[2]);
   VAR_5 &= 0x3;
   VAR_5 = (FUNC_0(VAR_3, 72) & ~(3 << 12)) | (VAR_5 << 12);
   FUNC_1(VAR_3, 72, VAR_5);
   return VAR_2;
  }
 }

 if (VAR_4 != 0)
  return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_4);
 else
  return FUNC_4(VAR_0, VAR_1, VAR_2);

 return 0;
}
