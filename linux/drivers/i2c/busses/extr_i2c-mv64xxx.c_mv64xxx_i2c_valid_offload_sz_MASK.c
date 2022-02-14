
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int len; } ;



__attribute__((used)) static bool
FUNC_0(struct i2c_msg *VAR_0)
{
 return VAR_0->len <= 8 && VAR_0->len >= 1;
}
