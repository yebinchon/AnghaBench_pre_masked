
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct i2c_device_addr {int i2c_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct i2c_device_addr*,int,scalar_t__*,struct i2c_device_addr*,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(struct i2c_device_addr *VAR_8,
      u32 VAR_9,
      u16 VAR_10,
      u8 *VAR_11, u32 VAR_12)
{
 u8 VAR_13[4];
 u16 VAR_14;
 int VAR_15;
 u16 VAR_16 = 0;


 if (VAR_8 == ((void*)0))
  return -VAR_7;

 VAR_16 = (FUNC_2(VAR_8->i2c_addr) ? 2 : 1) +
     (FUNC_0(VAR_9) ? 4 : 2);

 if ((FUNC_1(VAR_9)) ||
     ((!(VAR_0)) &&
      FUNC_0(VAR_9)) ||
     (VAR_16 > (VAR_6)) ||
     ((VAR_10 != 0) && (VAR_11 == ((void*)0))) || ((VAR_10 & 1) == 1)) {
  return -VAR_7;
 }


 VAR_12 &= (~VAR_3 & ~VAR_2);





 do {
  u16 VAR_17 = (VAR_10 < VAR_5 ?
         VAR_10 : VAR_5);

  VAR_14 = 0;

  VAR_9 &= ~VAR_1;
  VAR_9 |= VAR_12;
  VAR_15 = FUNC_3(VAR_8, VAR_14, VAR_13, VAR_8, VAR_17,
       VAR_11);

  VAR_11 += VAR_17;
  VAR_9 += (VAR_17 >> 1);
  VAR_10 -= VAR_17;
 } while (VAR_10 && VAR_15 == 0);

 return VAR_15;
}
