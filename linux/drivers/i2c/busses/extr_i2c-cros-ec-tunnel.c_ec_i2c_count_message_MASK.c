
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; scalar_t__ len; } ;
struct ec_params_i2c_passthru_msg {int dummy; } ;
struct ec_params_i2c_passthru {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct i2c_msg VAR_1[], int VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_4 = sizeof(struct ec_params_i2c_passthru);
 VAR_4 += VAR_2 * sizeof(struct ec_params_i2c_passthru_msg);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (!(VAR_1[VAR_3].flags & VAR_0))
   VAR_4 += VAR_1[VAR_3].len;

 return VAR_4;
}
