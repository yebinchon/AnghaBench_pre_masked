
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {int hw; } ;
struct clk_fixup_mux {TYPE_2__ mux; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_parent ) (int *) ;} ;


 int FUNC_0 (int *) ;
 struct clk_fixup_mux* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_2(struct clk_hw *VAR_0)
{
 struct clk_fixup_mux *VAR_1 = FUNC_1(VAR_0);

 return VAR_1->ops->get_parent(&VAR_1->mux.hw);
}
