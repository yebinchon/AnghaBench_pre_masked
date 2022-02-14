
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_frontend {int regs; int reset; int ram_clk; int mod_clk; int bus_clk; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct device*,char*) ;
 struct sun4i_frontend* FUNC_3 (struct device*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sun4i_frontend*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_2)
{
 struct sun4i_frontend *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 FUNC_1(VAR_3->mod_clk, 300000000);

 FUNC_0(VAR_3->bus_clk);
 FUNC_0(VAR_3->mod_clk);
 FUNC_0(VAR_3->ram_clk);

 VAR_4 = FUNC_5(VAR_3->reset);
 if (VAR_4) {
  FUNC_2(VAR_2, "Couldn't reset our device\n");
  return VAR_4;
 }

 FUNC_4(VAR_3->regs, VAR_1,
      VAR_0,
      VAR_0);

 FUNC_6(VAR_3);

 return 0;
}
