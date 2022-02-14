
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv64xxx_i2c_data {int num_msgs; int offload_enabled; struct i2c_msg* msgs; } ;
struct i2c_msg {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct i2c_msg*) ;

__attribute__((used)) static bool
FUNC_1(struct mv64xxx_i2c_data *VAR_1)
{
 struct i2c_msg *VAR_2 = VAR_1->msgs;
 int VAR_3 = VAR_1->num_msgs;

 if (!VAR_1->offload_enabled)
  return 0;






 if (VAR_3 == 1 && FUNC_0(VAR_2))
  return 1;






 if (VAR_3 == 2 &&
     FUNC_0(VAR_2) &&
     FUNC_0(VAR_2 + 1) &&
     !(VAR_2[0].flags & VAR_0) &&
     VAR_2[1].flags & VAR_0)
  return 1;

 return 0;
}
