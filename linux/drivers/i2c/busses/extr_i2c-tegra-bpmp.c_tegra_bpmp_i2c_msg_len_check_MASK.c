
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static int FUNC_0(struct i2c_msg *VAR_5, unsigned int VAR_6)
{
 size_t VAR_7 = 0, VAR_8 = 0;
 unsigned int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  if (!(VAR_5[VAR_9].flags & VAR_1))
   VAR_7 += VAR_2 + VAR_5[VAR_9].len;

 if (VAR_7 > VAR_3)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  if ((VAR_5[VAR_9].flags & VAR_1))
   VAR_8 += VAR_5[VAR_9].len;

 if (VAR_8 > VAR_4)
  return -VAR_0;

 return 0;
}
