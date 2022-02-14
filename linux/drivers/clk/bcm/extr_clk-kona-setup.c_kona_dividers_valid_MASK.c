
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int frac_width; } ;
struct TYPE_5__ {TYPE_1__ s; } ;
struct bcm_clk_div {TYPE_2__ u; } ;
struct peri_clk_data {struct bcm_clk_div pre_div; struct bcm_clk_div div; } ;
struct TYPE_6__ {struct peri_clk_data* peri; } ;
struct kona_clk {scalar_t__ type; TYPE_3__ u; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct bcm_clk_div*) ;
 scalar_t__ FUNC_2 (struct bcm_clk_div*) ;

__attribute__((used)) static bool FUNC_3(struct kona_clk *VAR_2)
{
 struct peri_clk_data *VAR_3 = VAR_2->u.peri;
 struct bcm_clk_div *VAR_4;
 struct bcm_clk_div *VAR_5;
 u32 VAR_6;

 FUNC_0(VAR_2->type != VAR_1);

 if (!FUNC_1(&VAR_3->div) || !FUNC_1(&VAR_3->pre_div))
  return 1;

 VAR_4 = &VAR_3->div;
 VAR_5 = &VAR_3->pre_div;
 if (FUNC_2(VAR_4) || FUNC_2(VAR_5))
  return 1;

 VAR_6 = VAR_0 * sizeof(u32);

 return VAR_4->u.s.frac_width + VAR_5->u.s.frac_width <= VAR_6;
}
