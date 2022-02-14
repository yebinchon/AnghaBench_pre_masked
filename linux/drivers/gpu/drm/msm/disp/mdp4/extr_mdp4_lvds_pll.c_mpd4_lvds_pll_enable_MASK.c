
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pll_rate {TYPE_1__* conf; int rate; } ;
struct mdp4_lvds_pll {int pixclk; } ;
struct mdp4_kms {int dummy; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int val; scalar_t__ reg; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 struct pll_rate* FUNC_3 (int ) ;
 struct mdp4_kms* FUNC_4 (struct mdp4_lvds_pll*) ;
 int FUNC_5 (struct mdp4_kms*,int ) ;
 int FUNC_6 (struct mdp4_kms*,scalar_t__,int) ;
 struct mdp4_lvds_pll* FUNC_7 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_4)
{
 struct mdp4_lvds_pll *VAR_5 = FUNC_7(VAR_4);
 struct mdp4_kms *VAR_6 = FUNC_4(VAR_5);
 const struct pll_rate *VAR_7 = FUNC_3(VAR_5->pixclk);
 int VAR_8;

 FUNC_0("pixclk=%lu (%lu)", VAR_5->pixclk, VAR_7->rate);

 if (FUNC_1(!VAR_7))
  return -VAR_0;

 FUNC_6(VAR_6, VAR_1, 0x33);

 for (VAR_8 = 0; VAR_7->conf[VAR_8].reg; VAR_8++)
  FUNC_6(VAR_6, VAR_7->conf[VAR_8].reg, VAR_7->conf[VAR_8].val);

 FUNC_6(VAR_6, VAR_2, 0x01);


 while (!FUNC_5(VAR_6, VAR_3))
  FUNC_2();

 return 0;
}
