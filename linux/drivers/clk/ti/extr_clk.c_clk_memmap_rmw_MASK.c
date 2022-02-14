
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_omap_reg {size_t index; scalar_t__ offset; scalar_t__ ptr; } ;
struct clk_iomap {scalar_t__ mem; scalar_t__ regmap; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 struct clk_iomap** VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_2(u32 VAR_1, u32 VAR_2, const struct clk_omap_reg *VAR_3)
{
 struct clk_iomap *VAR_4 = VAR_0[VAR_3->index];

 if (VAR_3->ptr) {
  FUNC_0(VAR_1, VAR_2, VAR_3->ptr);
 } else if (VAR_4->regmap) {
  FUNC_1(VAR_4->regmap, VAR_3->offset, VAR_2, VAR_1);
 } else {
  FUNC_0(VAR_1, VAR_2, VAR_4->mem + VAR_3->offset);
 }
}
