
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {int hw; } ;
struct clk_busy_mux {int shift; int reg; TYPE_2__ mux; TYPE_1__* mux_ops; } ;
struct TYPE_3__ {int (* set_parent ) (int *,int ) ;} ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 struct clk_busy_mux* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct clk_busy_mux *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 VAR_3 = VAR_2->mux_ops->set_parent(&VAR_2->mux.hw, VAR_1);
 if (!VAR_3)
  VAR_3 = FUNC_0(VAR_2->reg, VAR_2->shift);

 return VAR_3;
}
