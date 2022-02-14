
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct clk_core {int num_parents; int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_parent ) (int ) ;} ;


 struct clk_core* FUNC_0 (struct clk_core*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static struct clk_core *FUNC_2(struct clk_core *VAR_0)
{
 u8 VAR_1 = 0;

 if (VAR_0->num_parents > 1 && VAR_0->ops->get_parent)
  VAR_1 = VAR_0->ops->get_parent(VAR_0->hw);

 return FUNC_0(VAR_0, VAR_1);
}
