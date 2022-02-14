
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ,int *) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2, u8 VAR_3, u8 *VAR_4,
     int VAR_5)
{
 u8 VAR_6[VAR_1];
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_6);
 if (FUNC_2(VAR_7 < 0))
  goto abort;
 if (FUNC_2(VAR_7 == 0xff || VAR_7 != VAR_5)) {
  VAR_7 = -VAR_0;
  goto abort;
 }
 FUNC_1(VAR_4, VAR_6, VAR_5);
 VAR_7 = 0;
abort:
 return VAR_7;
}
