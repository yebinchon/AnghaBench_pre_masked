
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int name; } ;
struct TYPE_5__ {TYPE_1__* peri; } ;
struct kona_clk {TYPE_3__ init_data; int ccu; TYPE_2__ u; } ;
struct clk_hw {int dummy; } ;
struct bcm_clk_gate {int dummy; } ;
struct TYPE_4__ {struct bcm_clk_gate gate; } ;


 int FUNC_0 (int ,int ,struct bcm_clk_gate*,int) ;
 struct kona_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_2(struct clk_hw *VAR_0)
{
 struct kona_clk *VAR_1 = FUNC_1(VAR_0);
 struct bcm_clk_gate *VAR_2 = &VAR_1->u.peri->gate;

 (void)FUNC_0(VAR_1->ccu, VAR_1->init_data.name, VAR_2, 0);
}
