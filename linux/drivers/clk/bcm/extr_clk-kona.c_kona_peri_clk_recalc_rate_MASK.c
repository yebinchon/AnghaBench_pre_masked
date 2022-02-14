
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct peri_clk_data {int pre_div; int div; } ;
struct TYPE_2__ {struct peri_clk_data* peri; } ;
struct kona_clk {int ccu; TYPE_1__ u; } ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (int ,int *,int *,unsigned long) ;
 struct kona_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
   unsigned long VAR_1)
{
 struct kona_clk *VAR_2 = FUNC_1(VAR_0);
 struct peri_clk_data *VAR_3 = VAR_2->u.peri;

 return FUNC_0(VAR_2->ccu, &VAR_3->div, &VAR_3->pre_div,
    VAR_1);
}
