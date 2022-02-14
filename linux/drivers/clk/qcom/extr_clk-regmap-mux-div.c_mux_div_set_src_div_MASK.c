
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int regmap; int hw; } ;
struct clk_regmap_mux_div {int hid_shift; int src_shift; scalar_t__ reg_offset; TYPE_1__ clkr; int src_width; int hid_width; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int ,scalar_t__,int*) ;
 int FUNC_4 (int ,scalar_t__,int,int) ;
 int FUNC_5 (int) ;

int FUNC_6(struct clk_regmap_mux_div *VAR_4, u32 VAR_5, u32 VAR_6)
{
 int VAR_7, VAR_8;
 u32 VAR_9, VAR_10;
 const char *VAR_11 = FUNC_1(&VAR_4->clkr.hw);

 VAR_9 = (VAR_6 << VAR_4->hid_shift) | (VAR_5 << VAR_4->src_shift);
 VAR_10 = ((FUNC_0(VAR_4->hid_width) - 1) << VAR_4->hid_shift) |
        ((FUNC_0(VAR_4->src_width) - 1) << VAR_4->src_shift);

 VAR_7 = FUNC_4(VAR_4->clkr.regmap, VAR_0 + VAR_4->reg_offset,
     VAR_10, VAR_9);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_4(VAR_4->clkr.regmap, VAR_1 + VAR_4->reg_offset,
     VAR_2, VAR_2);
 if (VAR_7)
  return VAR_7;


 for (VAR_8 = 500; VAR_8 > 0; VAR_8--) {
  VAR_7 = FUNC_3(VAR_4->clkr.regmap, VAR_1 + VAR_4->reg_offset,
      &VAR_9);
  if (VAR_7)
   return VAR_7;
  if (!(VAR_9 & VAR_2))
   return 0;
  FUNC_5(1);
 }

 FUNC_2("%s: RCG did not update its configuration", VAR_11);
 return -VAR_3;
}
