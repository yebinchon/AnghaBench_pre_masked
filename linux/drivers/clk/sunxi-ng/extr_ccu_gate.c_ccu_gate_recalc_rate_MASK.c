
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_2__ {int features; unsigned long prediv; } ;
struct ccu_gate {TYPE_1__ common; } ;


 int VAR_0 ;
 struct ccu_gate* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_hw *VAR_1,
       unsigned long VAR_2)
{
 struct ccu_gate *VAR_3 = FUNC_0(VAR_1);
 unsigned long VAR_4 = VAR_2;

 if (VAR_3->common.features & VAR_0)
  VAR_4 /= VAR_3->common.prediv;

 return VAR_4;
}
