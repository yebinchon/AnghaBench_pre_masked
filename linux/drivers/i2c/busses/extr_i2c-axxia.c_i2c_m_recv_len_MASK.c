
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct i2c_msg *VAR_1)
{
 return (VAR_1->flags & VAR_0) != 0;
}
