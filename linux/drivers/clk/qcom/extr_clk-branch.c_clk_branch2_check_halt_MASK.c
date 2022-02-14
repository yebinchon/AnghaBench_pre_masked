
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int regmap; } ;
struct clk_branch {int halt_reg; TYPE_1__ clkr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static bool FUNC_1(const struct clk_branch *VAR_4, bool VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;

 VAR_7 = VAR_1 << VAR_3;
 VAR_7 |= VAR_0;

 FUNC_0(VAR_4->clkr.regmap, VAR_4->halt_reg, &VAR_6);

 if (VAR_5) {
  VAR_6 &= VAR_7;
  return (VAR_6 & VAR_0) == 0 ||
   VAR_6 == VAR_2;
 } else {
  return VAR_6 & VAR_0;
 }
}
