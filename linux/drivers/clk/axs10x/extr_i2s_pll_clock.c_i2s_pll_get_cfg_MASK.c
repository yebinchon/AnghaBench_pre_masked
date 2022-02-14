
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2s_pll_cfg {int dummy; } ;


 struct i2s_pll_cfg const* VAR_0 ;
 struct i2s_pll_cfg const* VAR_1 ;

__attribute__((used)) static const struct i2s_pll_cfg *FUNC_0(unsigned long VAR_2)
{
 switch (VAR_2) {
 case 27000000:
  return VAR_0;
 case 28224000:
  return VAR_1;
 default:
  return ((void*)0);
 }
}
