
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct composite_clk_gcfg {TYPE_6__* gate; TYPE_4__* div; TYPE_2__* mux; } ;
struct composite_clk_cfg {TYPE_5__* gate; TYPE_3__* div; TYPE_1__* mux; } ;
struct composite_cfg {struct clk_ops const* gate_ops; struct clk_hw* gate_hw; struct clk_ops const* div_ops; struct clk_hw* div_hw; struct clk_ops const* mux_ops; struct clk_hw* mux_hw; } ;
struct clk_ops {int dummy; } ;
struct clk_hw {int dummy; } ;
struct clk_mux {struct clk_hw hw; } ;
struct clk_gate {struct clk_hw hw; } ;
struct clk_divider {struct clk_hw hw; } ;
typedef int spinlock_t ;
struct TYPE_12__ {struct clk_ops* ops; int flags; } ;
struct TYPE_11__ {int bit_idx; scalar_t__ offset; } ;
struct TYPE_10__ {struct clk_ops* ops; int flags; } ;
struct TYPE_9__ {int width; int shift; scalar_t__ offset; } ;
struct TYPE_8__ {struct clk_ops* ops; int flags; } ;
struct TYPE_7__ {int width; int shift; scalar_t__ offset; } ;


 int FUNC_0 (struct clk_mux*) ;
 struct clk_mux* FUNC_1 (scalar_t__,int ,int ,int ,int *) ;
 struct clk_mux* FUNC_2 (scalar_t__,int ,int ,int *) ;
 struct clk_mux* FUNC_3 (scalar_t__,int ,int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 struct clk_ops VAR_1 ;
 struct clk_ops VAR_2 ;
 struct clk_ops VAR_3 ;

__attribute__((used)) static void FUNC_4(const struct composite_clk_gcfg *VAR_4,
  const struct composite_clk_cfg *VAR_5,
  struct composite_cfg *VAR_6, spinlock_t *VAR_7)
{
 struct clk_mux *VAR_8 = ((void*)0);
 struct clk_divider *VAR_9 = ((void*)0);
 struct clk_gate *VAR_10 = ((void*)0);
 const struct clk_ops *VAR_11, *VAR_12, *VAR_13;
 struct clk_hw *VAR_14;
 struct clk_hw *VAR_15;
 struct clk_hw *VAR_16;

 VAR_11 = VAR_12 = VAR_13 = ((void*)0);
 VAR_14 = VAR_15 = VAR_16 = ((void*)0);

 if (VAR_4->mux && VAR_5->mux) {
  VAR_8 = FUNC_3(VAR_0 + VAR_5->mux->offset,
    VAR_5->mux->shift,
    VAR_5->mux->width,
    VAR_4->mux->flags, VAR_7);

  if (!FUNC_0(VAR_8)) {
   VAR_14 = &VAR_8->hw;
   VAR_11 = VAR_4->mux->ops ?
      VAR_4->mux->ops : &VAR_3;
  }
 }

 if (VAR_4->div && VAR_5->div) {
  VAR_9 = FUNC_1(VAR_0 + VAR_5->div->offset,
    VAR_5->div->shift,
    VAR_5->div->width,
    VAR_4->div->flags, VAR_7);

  if (!FUNC_0(VAR_9)) {
   VAR_15 = &VAR_9->hw;
   VAR_12 = VAR_4->div->ops ?
      VAR_4->div->ops : &VAR_1;
  }
 }

 if (VAR_4->gate && VAR_5->gate) {
  VAR_10 = FUNC_2(VAR_0 + VAR_5->gate->offset,
    VAR_5->gate->bit_idx,
    VAR_4->gate->flags, VAR_7);

  if (!FUNC_0(VAR_10)) {
   VAR_16 = &VAR_10->hw;
   VAR_13 = VAR_4->gate->ops ?
       VAR_4->gate->ops : &VAR_2;
  }
 }

 VAR_6->mux_hw = VAR_14;
 VAR_6->mux_ops = VAR_11;

 VAR_6->div_hw = VAR_15;
 VAR_6->div_ops = VAR_12;

 VAR_6->gate_hw = VAR_16;
 VAR_6->gate_ops = VAR_13;
}
