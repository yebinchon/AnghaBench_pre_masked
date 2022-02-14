
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* peri; } ;
struct kona_clk {TYPE_2__ u; int ccu; } ;
struct clk_hw {int dummy; } ;
struct bcm_clk_div {int dummy; } ;
struct TYPE_3__ {int pre_div; struct bcm_clk_div div; } ;


 long FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct bcm_clk_div*) ;
 long FUNC_2 (int ,struct bcm_clk_div*,int *,unsigned long,unsigned long,int *) ;
 struct kona_clk* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_4(struct clk_hw *VAR_0, unsigned long VAR_1,
   unsigned long *VAR_2)
{
 struct kona_clk *VAR_3 = FUNC_3(VAR_0);
 struct bcm_clk_div *VAR_4 = &VAR_3->u.peri->div;

 if (!FUNC_1(VAR_4))
  return FUNC_0(VAR_0);


 return FUNC_2(VAR_3->ccu, VAR_4, &VAR_3->u.peri->pre_div,
    VAR_1 ? VAR_1 : 1, *VAR_2, ((void*)0));
}
