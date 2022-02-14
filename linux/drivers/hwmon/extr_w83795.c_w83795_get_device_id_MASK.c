
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);





 if (VAR_3 < 0 || (VAR_3 & 0xf0) != 0x50) {
  int VAR_4;

  VAR_4 = FUNC_0(VAR_2,
        VAR_1);
  if (VAR_4 == 0x50)
   VAR_3 = VAR_4;
 }

 return VAR_3;
}
