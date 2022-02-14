
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct i2c_client *VAR_0, uint8_t *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0x8; VAR_2 <= 0xe; VAR_2++)
  FUNC_0(VAR_0, VAR_2, VAR_1[VAR_2]);
}
