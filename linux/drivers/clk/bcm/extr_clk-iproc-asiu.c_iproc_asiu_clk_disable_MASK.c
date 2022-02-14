
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ offset; int en_shift; } ;
struct iproc_asiu_clk {TYPE_1__ gate; struct iproc_asiu* asiu; } ;
struct iproc_asiu {scalar_t__ gate_base; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct iproc_asiu_clk* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_1)
{
 struct iproc_asiu_clk *VAR_2 = FUNC_1(VAR_1);
 struct iproc_asiu *VAR_3 = VAR_2->asiu;
 u32 VAR_4;


 if (VAR_2->gate.offset == VAR_0)
  return;

 VAR_4 = FUNC_0(VAR_3->gate_base + VAR_2->gate.offset);
 VAR_4 &= ~(1 << VAR_2->gate.en_shift);
 FUNC_2(VAR_4, VAR_3->gate_base + VAR_2->gate.offset);
}
