
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcm_clk_div {int dummy; } ;
struct bcm_clk_sel {scalar_t__ parent_count; } ;
struct peri_clk_data {struct bcm_clk_div pre_div; struct bcm_clk_div div; struct bcm_clk_sel sel; } ;
struct TYPE_2__ {struct peri_clk_data* peri; } ;
struct kona_clk {scalar_t__ type; TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bcm_clk_div*) ;
 int FUNC_1 (struct bcm_clk_div*) ;
 scalar_t__ FUNC_2 (struct bcm_clk_sel*) ;

__attribute__((used)) static bool FUNC_3(struct kona_clk *VAR_1)
{
 struct peri_clk_data *VAR_2 = VAR_1->u.peri;
 struct bcm_clk_sel *VAR_3;
 struct bcm_clk_div *VAR_4;

 if (VAR_1->type != VAR_0)
  return 0;

 VAR_3 = &VAR_2->sel;
 if (VAR_3->parent_count && FUNC_2(VAR_3))
  return 1;

 VAR_4 = &VAR_2->div;
 if (!FUNC_0(VAR_4))
  return 0;


 if (!FUNC_1(VAR_4))
  return 1;

 VAR_4 = &VAR_2->pre_div;

 return FUNC_0(VAR_4) && !FUNC_1(VAR_4);
}
