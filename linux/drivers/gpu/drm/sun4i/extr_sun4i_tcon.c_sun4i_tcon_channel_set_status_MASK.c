
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_tcon {struct clk* sclk1; int regs; TYPE_1__* quirks; struct clk* dclk; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {int has_channel_1; int has_channel_0; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (struct clk*) ;
 int FUNC_6 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct sun4i_tcon *VAR_4, int VAR_5,
       bool VAR_6)
{
 struct clk *VAR_7;

 switch (VAR_5) {
 case 0:
  FUNC_1(!VAR_4->quirks->has_channel_0);
  FUNC_6(VAR_4->regs, VAR_0,
       VAR_1,
       VAR_6 ? VAR_1 : 0);
  VAR_7 = VAR_4->dclk;
  break;
 case 1:
  FUNC_1(!VAR_4->quirks->has_channel_1);
  FUNC_6(VAR_4->regs, VAR_2,
       VAR_3,
       VAR_6 ? VAR_3 : 0);
  VAR_7 = VAR_4->sclk1;
  break;
 default:
  FUNC_0("Unknown channel... doing nothing\n");
  return;
 }

 if (VAR_6) {
  FUNC_3(VAR_7);
  FUNC_4(VAR_7);
 } else {
  FUNC_5(VAR_7);
  FUNC_2(VAR_7);
 }
}
