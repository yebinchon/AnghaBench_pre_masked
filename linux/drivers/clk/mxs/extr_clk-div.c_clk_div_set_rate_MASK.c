
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_4__ {int hw; } ;
struct clk_div {int busy; int reg; TYPE_2__ divider; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_rate ) (int *,unsigned long,unsigned long) ;} ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,unsigned long,unsigned long) ;
 struct clk_div* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0, unsigned long VAR_1,
       unsigned long VAR_2)
{
 struct clk_div *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 VAR_4 = VAR_3->ops->set_rate(&VAR_3->divider.hw, VAR_1, VAR_2);
 if (!VAR_4)
  VAR_4 = FUNC_0(VAR_3->reg, VAR_3->busy);

 return VAR_4;
}
