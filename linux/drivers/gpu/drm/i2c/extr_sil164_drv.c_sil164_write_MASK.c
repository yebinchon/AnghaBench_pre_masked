
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct i2c_client*,int *,int ) ;
 int FUNC_2 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct i2c_client *VAR_0, uint8_t VAR_1, uint8_t VAR_2)
{
 uint8_t VAR_3[] = {VAR_1, VAR_2};
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_3, FUNC_0(VAR_3));
 if (VAR_4 < 0)
  FUNC_2(VAR_0, "Error %d writing to subaddress 0x%x\n",
      VAR_4, VAR_1);
}
