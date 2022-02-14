
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct ccu_mux_internal {int dummy; } ;
struct TYPE_4__ {int features; int hw; } ;
struct TYPE_3__ {int flags; int width; int table; } ;
struct ccu_div {unsigned long fixed_post_div; TYPE_2__ common; TYPE_1__ div; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int *,struct clk_hw*,unsigned long,unsigned long*,int ,int ,int ) ;

__attribute__((used)) static unsigned long FUNC_1(struct ccu_mux_internal *VAR_1,
     struct clk_hw *VAR_2,
     unsigned long *VAR_3,
     unsigned long VAR_4,
     void *VAR_5)
{
 struct ccu_div *VAR_6 = VAR_5;

 if (VAR_6->common.features & VAR_0)
  VAR_4 *= VAR_6->fixed_post_div;

 VAR_4 = FUNC_0(&VAR_6->common.hw, VAR_2,
      VAR_4, VAR_3,
      VAR_6->div.table, VAR_6->div.width,
      VAR_6->div.flags);

 if (VAR_6->common.features & VAR_0)
  VAR_4 /= VAR_6->fixed_post_div;

 return VAR_4;
}
