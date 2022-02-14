
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct berlin2_div_map {scalar_t__ gate_offs; int gate_shift; } ;
struct berlin2_div {scalar_t__ lock; scalar_t__ base; struct berlin2_div_map map; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 struct berlin2_div* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_0)
{
 struct berlin2_div *VAR_1 = FUNC_4(VAR_0);
 struct berlin2_div_map *VAR_2 = &VAR_1->map;
 u32 VAR_3;

 if (VAR_1->lock)
  FUNC_2(VAR_1->lock);

 VAR_3 = FUNC_1(VAR_1->base + VAR_2->gate_offs);
 VAR_3 |= FUNC_0(VAR_2->gate_shift);
 FUNC_5(VAR_3, VAR_1->base + VAR_2->gate_offs);

 if (VAR_1->lock)
  FUNC_3(VAR_1->lock);

 return 0;
}
