
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; scalar_t__ len; } ;
struct ec_response_i2c_passthru {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct i2c_msg VAR_1[], int VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_3 = sizeof(struct ec_response_i2c_passthru);
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  if (VAR_1[VAR_4].flags & VAR_0)
   VAR_3 += VAR_1[VAR_4].len;

 return VAR_3;
}
