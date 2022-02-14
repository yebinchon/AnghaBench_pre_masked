
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mstp_clock {int index; struct cpg_mssr_priv* priv; } ;
struct cpg_mssr_priv {scalar_t__ base; scalar_t__ stbyctrl; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 struct mstp_clock* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_0)
{
 struct mstp_clock *VAR_1 = FUNC_5(VAR_0);
 struct cpg_mssr_priv *VAR_2 = VAR_1->priv;
 u32 VAR_3;

 if (VAR_2->stbyctrl)
  VAR_3 = FUNC_3(VAR_2->base + FUNC_2(VAR_1->index / 32));
 else
  VAR_3 = FUNC_4(VAR_2->base + FUNC_1(VAR_1->index / 32));

 return !(VAR_3 & FUNC_0(VAR_1->index % 32));
}
