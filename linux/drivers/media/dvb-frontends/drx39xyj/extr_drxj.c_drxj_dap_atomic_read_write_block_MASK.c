
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct i2c_device_addr {int dummy; } ;
struct drxj_hi_cmd {int param1; int param2; int param3; int param4; int param5; int cmd; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct i2c_device_addr*,scalar_t__,int*,int ) ;
 int FUNC_4 (struct i2c_device_addr*,scalar_t__,int,int ) ;
 int FUNC_5 (struct i2c_device_addr*,struct drxj_hi_cmd*,int*) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static
int FUNC_7(struct i2c_device_addr *VAR_5,
       u32 VAR_6,
       u16 VAR_7,
       u8 *VAR_8, bool VAR_9)
{
 struct drxj_hi_cmd VAR_10;
 int VAR_11;
 u16 VAR_12;
 u16 VAR_13 = 0;
 u16 VAR_14 = 0;


 if (!VAR_8 || !VAR_5 || ((VAR_7 % 2)) || ((VAR_7 / 2) > 8))
  return -VAR_3;


 VAR_10.cmd = VAR_4;
 VAR_10.param1 =
     (u16) ((FUNC_1(VAR_0) << 6) +
       FUNC_0(VAR_0));
 VAR_10.param2 =
     (u16) FUNC_2(VAR_0);
 VAR_10.param3 = (u16) ((VAR_7 / 2) - 1);
 if (!VAR_9)
  VAR_10.param3 |= VAR_2;
 else
  VAR_10.param3 |= VAR_1;
 VAR_10.param4 = (u16) ((FUNC_1(VAR_6) << 6) +
    FUNC_0(VAR_6));
 VAR_10.param5 = (u16) FUNC_2(VAR_6);

 if (!VAR_9) {

  for (VAR_14 = 0; VAR_14 < (VAR_7 / 2); VAR_14++) {

   VAR_12 = ((u16) VAR_8[2 * VAR_14]);
   VAR_12 += (((u16) VAR_8[(2 * VAR_14) + 1]) << 8);
   FUNC_4(VAR_5,
          (VAR_0 + VAR_14),
         VAR_12, 0);
  }
 }

 VAR_11 = FUNC_5(VAR_5, &VAR_10, &VAR_13);
 if (VAR_11 != 0) {
  FUNC_6("error %d\n", VAR_11);
  goto rw_error;
 }

 if (VAR_9) {

  for (VAR_14 = 0; VAR_14 < (VAR_7 / 2); VAR_14++) {
   VAR_11 = FUNC_3(VAR_5,
       (VAR_0 + VAR_14),
       &VAR_12, 0);
   if (VAR_11) {
    FUNC_6("error %d\n", VAR_11);
    goto rw_error;
   }
   VAR_8[2 * VAR_14] = (u8) (VAR_12 & 0xFF);
   VAR_8[(2 * VAR_14) + 1] = (u8) (VAR_12 >> 8);
  }
 }

 return 0;

rw_error:
 return VAR_11;

}
