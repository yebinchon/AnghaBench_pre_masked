
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int addr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static unsigned int FUNC_1(const struct i2c_client *VAR_2)
{




 return (VAR_0 |
  ((VAR_2->addr & FUNC_0(0)) << (1)));
}
