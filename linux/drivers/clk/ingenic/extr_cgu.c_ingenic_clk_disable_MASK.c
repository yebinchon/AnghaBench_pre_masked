
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ingenic_clk {size_t idx; struct ingenic_cgu* cgu; } ;
struct ingenic_cgu_clk_info {int type; int gate; } ;
struct ingenic_cgu {int lock; struct ingenic_cgu_clk_info* clock_info; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ingenic_cgu*,int *,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct ingenic_clk* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_4(struct clk_hw *VAR_1)
{
 struct ingenic_clk *VAR_2 = FUNC_3(VAR_1);
 struct ingenic_cgu *VAR_3 = VAR_2->cgu;
 const struct ingenic_cgu_clk_info *VAR_4;
 unsigned long VAR_5;

 VAR_4 = &VAR_3->clock_info[VAR_2->idx];

 if (VAR_4->type & VAR_0) {

  FUNC_1(&VAR_3->lock, VAR_5);
  FUNC_0(VAR_3, &VAR_4->gate, 1);
  FUNC_2(&VAR_3->lock, VAR_5);
 }
}
