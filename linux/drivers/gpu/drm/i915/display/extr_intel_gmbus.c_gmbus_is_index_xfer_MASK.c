
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {scalar_t__ addr; int flags; int len; } ;


 int VAR_0 ;

__attribute__((used)) static bool
FUNC_0(struct i2c_msg *VAR_1, int VAR_2, int VAR_3)
{
 return (VAR_2 + 1 < VAR_3 &&
  VAR_1[VAR_2].addr == VAR_1[VAR_2 + 1].addr &&
  !(VAR_1[VAR_2].flags & VAR_0) &&
  (VAR_1[VAR_2].len == 1 || VAR_1[VAR_2].len == 2) &&
  VAR_1[VAR_2 + 1].len > 0);
}
