
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {scalar_t__ len; scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct i2c_msg*) ;

__attribute__((used)) static bool FUNC_1(struct i2c_msg VAR_2[], int VAR_3)
{
 return VAR_3 == VAR_1 && !FUNC_0(&VAR_2[0]) && FUNC_0(&VAR_2[1]) &&
        VAR_2[0].len > 0 && VAR_2[0].len <= VAR_0 &&
        VAR_2[1].len > 0 && VAR_2[0].addr == VAR_2[1].addr;
}
