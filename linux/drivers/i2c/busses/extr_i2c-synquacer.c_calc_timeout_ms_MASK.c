
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synquacer_i2c {int dummy; } ;
struct i2c_msg {scalar_t__ len; } ;


 unsigned long FUNC_0 (unsigned long,int) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct synquacer_i2c *VAR_0,
         struct i2c_msg *VAR_1,
         int VAR_2)
{
 unsigned long VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++, VAR_1++)
  VAR_3 += VAR_1->len;

 return FUNC_0((VAR_3 * 9 + VAR_2 * 10) * 3, 200) + 10;
}
