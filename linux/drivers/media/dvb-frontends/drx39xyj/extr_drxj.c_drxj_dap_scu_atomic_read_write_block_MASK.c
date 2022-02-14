
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct i2c_device_addr {int dummy; } ;
struct drxjscu_cmd {int parameter_len; int result_len; int command; int* result; int* parameter; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct i2c_device_addr*,struct drxjscu_cmd*) ;

__attribute__((used)) static
int FUNC_3(struct i2c_device_addr *VAR_3, u32 VAR_4, u16 VAR_5,
           u8 *VAR_6, bool VAR_7)
{
 struct drxjscu_cmd VAR_8;
 int VAR_9;
 u16 VAR_10[18];
 u16 VAR_11[15];


 if (!VAR_6 || !VAR_3 || (VAR_5 % 2) || ((VAR_5 / 2) > 16))
  return -VAR_0;

 VAR_10[1] = (u16) FUNC_0(VAR_4);
 if (VAR_7) {
  VAR_10[0] = ((~(0x0080)) & VAR_5);
  VAR_8.parameter_len = 2;
  VAR_8.result_len = VAR_5 / 2 + 2;
 } else {
  int VAR_12 = 0;

  VAR_10[0] = 0x0080 | VAR_5;
  for (VAR_12 = 0; VAR_12 < (VAR_5 / 2); VAR_12++) {
   VAR_10[VAR_12 + 2] =
       (VAR_6[2 * VAR_12] | (VAR_6[(2 * VAR_12) + 1] << 8));
  }
  VAR_8.parameter_len = VAR_5 / 2 + 2;
  VAR_8.result_len = 1;
 }

 VAR_8.command =
     VAR_2 |
     VAR_1;
 VAR_8.result = VAR_11;
 VAR_8.parameter = VAR_10;
 VAR_9 = FUNC_2(VAR_3, &VAR_8);
 if (VAR_9 != 0) {
  FUNC_1("error %d\n", VAR_9);
  goto rw_error;
 }

 if (VAR_7) {
  int VAR_13 = 0;

  for (VAR_13 = 0; VAR_13 < (VAR_5 / 2); VAR_13++) {
   VAR_6[2 * VAR_13] = (u8) (VAR_8.result[VAR_13 + 2] & 0xFF);
   VAR_6[(2 * VAR_13) + 1] = (u8) (VAR_8.result[VAR_13 + 2] >> 8);
  }
 }

 return 0;

rw_error:
 return VAR_9;

}
