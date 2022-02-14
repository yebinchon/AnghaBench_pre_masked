
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reg; } ;
struct sd_clock {TYPE_1__ csn; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 struct sd_clock* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_2(struct clk_hw *VAR_1)
{
 struct sd_clock *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->csn.reg, 0, VAR_0);
}
