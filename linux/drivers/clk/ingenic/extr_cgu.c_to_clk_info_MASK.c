
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ingenic_clk {size_t idx; struct ingenic_cgu* cgu; } ;
struct ingenic_cgu_clk_info {scalar_t__ type; } ;
struct ingenic_cgu {struct ingenic_cgu_clk_info* clock_info; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline const struct ingenic_cgu_clk_info *FUNC_1(
  struct ingenic_clk *VAR_1)
{
 struct ingenic_cgu *VAR_2 = VAR_1->cgu;
 const struct ingenic_cgu_clk_info *VAR_3;

 VAR_3 = &VAR_2->clock_info[VAR_1->idx];
 FUNC_0(VAR_3->type != VAR_0);

 return VAR_3;
}
