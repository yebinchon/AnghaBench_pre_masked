
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct i2c_adapter {TYPE_1__* algo; } ;
struct TYPE_2__ {scalar_t__ reg_slave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static uint32_t FUNC_0(struct i2c_adapter *VAR_4)
{
 u32 VAR_5;


 VAR_5 = VAR_0 | (VAR_2 & ~VAR_3);

 if (VAR_4->algo->reg_slave)
  VAR_5 |= VAR_1;

 return VAR_5;
}
