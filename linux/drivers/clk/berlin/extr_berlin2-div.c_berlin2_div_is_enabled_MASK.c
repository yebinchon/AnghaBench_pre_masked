
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct berlin2_div_map {int gate_shift; scalar_t__ gate_offs; } ;
struct berlin2_div {scalar_t__ lock; scalar_t__ base; struct berlin2_div_map map; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 struct berlin2_div* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0)
{
 struct berlin2_div *VAR_1 = FUNC_3(VAR_0);
 struct berlin2_div_map *VAR_2 = &VAR_1->map;
 u32 VAR_3;

 if (VAR_1->lock)
  FUNC_1(VAR_1->lock);

 VAR_3 = FUNC_0(VAR_1->base + VAR_2->gate_offs);
 VAR_3 >>= VAR_2->gate_shift;

 if (VAR_1->lock)
  FUNC_2(VAR_1->lock);

 return (VAR_3 & 0x1);
}
