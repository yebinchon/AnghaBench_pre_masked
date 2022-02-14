
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_regmap_mux_div {int* parent_map; int div; int src; int hid_width; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct clk_hw*) ;
 struct clk_hw* FUNC_2 (struct clk_hw*,unsigned int) ;
 unsigned long FUNC_3 (struct clk_hw*) ;
 unsigned long FUNC_4 (struct clk_hw*,unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_6 (unsigned long,int,int) ;
 int FUNC_7 (struct clk_regmap_mux_div*,int,int) ;
 struct clk_regmap_mux_div* FUNC_8 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_9(struct clk_hw *VAR_0, unsigned long VAR_1,
      unsigned long VAR_2, u32 VAR_3)
{
 struct clk_regmap_mux_div *VAR_4 = FUNC_8(VAR_0);
 int VAR_5;
 u32 VAR_6, VAR_7, VAR_8 = 0, VAR_9 = 0;
 unsigned int VAR_10;
 unsigned long VAR_11, VAR_12 = 0;

 for (VAR_10 = 0; VAR_10 < FUNC_1(VAR_0); VAR_10++) {
  struct clk_hw *VAR_13 = FUNC_2(VAR_0, VAR_10);
  unsigned long VAR_14 = FUNC_3(VAR_13);

  VAR_7 = FUNC_0(VAR_4->hid_width) - 1;
  for (VAR_6 = 1; VAR_6 < VAR_7; VAR_6++) {
   VAR_14 = FUNC_6(VAR_1, VAR_6, 2);
   VAR_14 = FUNC_4(VAR_13, VAR_14);
   VAR_11 = FUNC_6(VAR_14, 2, VAR_6);

   if (FUNC_5(VAR_1, VAR_12, VAR_11)) {
    VAR_12 = VAR_11;
    VAR_8 = VAR_4->parent_map[VAR_10];
    VAR_9 = VAR_6 - 1;
   }

   if (VAR_11 < VAR_1 || VAR_12 <= VAR_1)
    break;
  }
 }

 VAR_5 = FUNC_7(VAR_4, VAR_8, VAR_9);
 if (!VAR_5) {
  VAR_4->div = VAR_9;
  VAR_4->src = VAR_8;
 }

 return VAR_5;
}
