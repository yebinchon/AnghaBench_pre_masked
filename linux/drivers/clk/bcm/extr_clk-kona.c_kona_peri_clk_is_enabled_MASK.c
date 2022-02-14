
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* peri; } ;
struct kona_clk {int ccu; TYPE_2__ u; } ;
struct clk_hw {int dummy; } ;
struct bcm_clk_gate {int dummy; } ;
struct TYPE_3__ {struct bcm_clk_gate gate; } ;


 scalar_t__ FUNC_0 (int ,struct bcm_clk_gate*) ;
 struct kona_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0)
{
 struct kona_clk *VAR_1 = FUNC_1(VAR_0);
 struct bcm_clk_gate *VAR_2 = &VAR_1->u.peri->gate;

 return FUNC_0(VAR_1->ccu, VAR_2) ? 1 : 0;
}
