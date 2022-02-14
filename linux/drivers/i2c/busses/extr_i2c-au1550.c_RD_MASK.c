
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_au1550_data {scalar_t__ psc_base; } ;


 unsigned long FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct i2c_au1550_data *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0->psc_base + VAR_1);
}
