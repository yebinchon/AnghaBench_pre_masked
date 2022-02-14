
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_2)
{
 if (VAR_1)
  FUNC_1(VAR_2, VAR_0, 0x80);


 FUNC_1(VAR_2, VAR_0,
      FUNC_0(VAR_2, VAR_0) | 0x01);
}
