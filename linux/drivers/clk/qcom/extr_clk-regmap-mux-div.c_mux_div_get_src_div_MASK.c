
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int regmap; int hw; } ;
struct clk_regmap_mux_div {int src_shift; int hid_shift; int hid_width; int src_width; scalar_t__ reg_offset; TYPE_1__ clkr; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int ,scalar_t__,int*) ;

__attribute__((used)) static void FUNC_4(struct clk_regmap_mux_div *VAR_3, u32 *VAR_4,
    u32 *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;
 const char *VAR_9 = FUNC_1(&VAR_3->clkr.hw);

 FUNC_3(VAR_3->clkr.regmap, VAR_1 + VAR_3->reg_offset, &VAR_6);

 if (VAR_6 & VAR_2) {
  FUNC_2("%s: RCG configuration is pending\n", VAR_9);
  return;
 }

 FUNC_3(VAR_3->clkr.regmap, VAR_0 + VAR_3->reg_offset, &VAR_6);
 VAR_8 = (VAR_6 >> VAR_3->src_shift);
 VAR_8 &= FUNC_0(VAR_3->src_width) - 1;
 *VAR_4 = VAR_8;

 VAR_7 = (VAR_6 >> VAR_3->hid_shift);
 VAR_7 &= FUNC_0(VAR_3->hid_width) - 1;
 *VAR_5 = VAR_7;
}
