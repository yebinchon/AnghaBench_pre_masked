
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_omap_reg {size_t index; scalar_t__ offset; scalar_t__ ptr; } ;
struct clk_iomap {scalar_t__ mem; scalar_t__ regmap; } ;


 struct clk_iomap** VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,int *) ;

__attribute__((used)) static u32 FUNC_2(const struct clk_omap_reg *VAR_1)
{
 u32 VAR_2;
 struct clk_iomap *VAR_3 = VAR_0[VAR_1->index];

 if (VAR_1->ptr)
  VAR_2 = FUNC_0(VAR_1->ptr);
 else if (VAR_3->regmap)
  FUNC_1(VAR_3->regmap, VAR_1->offset, &VAR_2);
 else
  VAR_2 = FUNC_0(VAR_3->mem + VAR_1->offset);

 return VAR_2;
}
