
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pll_rate {int num_reg; TYPE_1__* conf; } ;
struct hdmi_pll_8960 {unsigned long pixclk; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int val; int reg; } ;


 int FUNC_0 (char*,unsigned long) ;
 struct pll_rate* FUNC_1 (unsigned long) ;
 struct hdmi_pll_8960* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (struct hdmi_pll_8960*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0, unsigned long VAR_1,
        unsigned long VAR_2)
{
 struct hdmi_pll_8960 *VAR_3 = FUNC_2(VAR_0);
 const struct pll_rate *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 FUNC_0("rate=%lu", VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_4->num_reg; VAR_5++)
  FUNC_3(VAR_3, VAR_4->conf[VAR_5].reg, VAR_4->conf[VAR_5].val);

 VAR_3->pixclk = VAR_1;

 return 0;
}
