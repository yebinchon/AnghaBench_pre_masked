
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct clk_hw {int dummy; } ;
struct berlin2_div_map {int div_switch_shift; int div3_switch_shift; size_t div_select_shift; scalar_t__ div_select_offs; scalar_t__ div3_switch_offs; scalar_t__ div_switch_offs; } ;
struct berlin2_div {scalar_t__ lock; scalar_t__ base; struct berlin2_div_map map; } ;


 size_t VAR_0 ;
 size_t* VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 struct berlin2_div* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_2,
          unsigned long VAR_3)
{
 struct berlin2_div *VAR_4 = FUNC_3(VAR_2);
 struct berlin2_div_map *VAR_5 = &VAR_4->map;
 u32 VAR_6, VAR_7, VAR_8 = 1;

 if (VAR_4->lock)
  FUNC_1(VAR_4->lock);

 VAR_6 = FUNC_0(VAR_4->base + VAR_5->div_switch_offs) &
  (1 << VAR_5->div_switch_shift);
 VAR_7 = FUNC_0(VAR_4->base + VAR_5->div3_switch_offs) &
  (1 << VAR_5->div3_switch_shift);


 if (VAR_7 != 0) {
  VAR_8 = 3;

 } else if (VAR_6 == 0) {
  VAR_8 = 1;

 } else {
  u32 VAR_9;
  VAR_9 = FUNC_0(VAR_4->base + VAR_5->div_select_offs);
  VAR_9 >>= VAR_5->div_select_shift;
  VAR_9 &= VAR_0;
  VAR_8 = VAR_1[VAR_9];
 }

 if (VAR_4->lock)
  FUNC_2(VAR_4->lock);

 return VAR_3 / VAR_8;
}
