
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int dummy; } ;
struct drxk_state {int i2c; scalar_t__ drxk_i2c_exclusive_lock; } ;


 int FUNC_0 (int ,struct i2c_msg*,unsigned int) ;
 int FUNC_1 (int ,struct i2c_msg*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct drxk_state *VAR_0, struct i2c_msg *VAR_1,
        unsigned VAR_2)
{
 if (VAR_0->drxk_i2c_exclusive_lock)
  return FUNC_0(VAR_0->i2c, VAR_1, VAR_2);
 else
  return FUNC_1(VAR_0->i2c, VAR_1, VAR_2);
}
