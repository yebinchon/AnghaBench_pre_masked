
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stv6110x_state {int * regs; TYPE_1__* config; } ;
struct TYPE_2__ {int clk_div; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct stv6110x_state *VAR_2)
{
 switch (VAR_2->config->clk_div) {
 default:
 case 1:
  FUNC_0(VAR_2->regs[VAR_1],
      VAR_0,
      0);
  break;
 case 2:
  FUNC_0(VAR_2->regs[VAR_1],
      VAR_0,
      1);
  break;
 case 4:
  FUNC_0(VAR_2->regs[VAR_1],
      VAR_0,
      2);
  break;
 case 8:
 case 0:
  FUNC_0(VAR_2->regs[VAR_1],
      VAR_0,
      3);
  break;
 }
}
