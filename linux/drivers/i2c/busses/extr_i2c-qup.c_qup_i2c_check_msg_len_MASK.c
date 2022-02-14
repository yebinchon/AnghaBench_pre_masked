
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct i2c_msg *VAR_2)
{
 return ((VAR_2->flags & VAR_0) && (VAR_2->flags & VAR_1));
}
