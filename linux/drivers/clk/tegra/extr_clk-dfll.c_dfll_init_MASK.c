
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_dfll {scalar_t__ ref_rate; int dvco_rst; int ref_clk; int soc_clk; int dev; TYPE_1__* soc; scalar_t__ last_unrounded_rate; int i2c_clk; } ;
struct TYPE_2__ {int (* init_clock_trimmers ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct tegra_dfll*) ;
 int FUNC_5 (struct tegra_dfll*) ;
 int FUNC_6 (struct tegra_dfll*,int ) ;
 int FUNC_7 (struct tegra_dfll*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;

__attribute__((used)) static int FUNC_14(struct tegra_dfll *VAR_3)
{
 int VAR_4;

 VAR_3->ref_rate = FUNC_0(VAR_3->ref_clk);
 if (VAR_3->ref_rate != VAR_2) {
  FUNC_3(VAR_3->dev, "unexpected ref clk rate %lu, expecting %lu",
   VAR_3->ref_rate, VAR_2);
  return -VAR_1;
 }

 FUNC_12(VAR_3->dvco_rst);

 VAR_4 = FUNC_1(VAR_3->ref_clk);
 if (VAR_4) {
  FUNC_3(VAR_3->dev, "failed to prepare ref_clk\n");
  return VAR_4;
 }

 VAR_4 = FUNC_1(VAR_3->soc_clk);
 if (VAR_4) {
  FUNC_3(VAR_3->dev, "failed to prepare soc_clk\n");
  goto di_err1;
 }

 VAR_4 = FUNC_1(VAR_3->i2c_clk);
 if (VAR_4) {
  FUNC_3(VAR_3->dev, "failed to prepare i2c_clk\n");
  goto di_err2;
 }

 VAR_3->last_unrounded_rate = 0;

 FUNC_8(VAR_3->dev);
 FUNC_9(VAR_3->dev);

 FUNC_6(VAR_3, VAR_0);
 FUNC_5(VAR_3);

 if (VAR_3->soc->init_clock_trimmers)
  VAR_3->soc->init_clock_trimmers();

 FUNC_7(VAR_3);

 FUNC_4(VAR_3);

 FUNC_10(VAR_3->dev);

 return 0;

di_err2:
 FUNC_2(VAR_3->soc_clk);
di_err1:
 FUNC_2(VAR_3->ref_clk);

 FUNC_11(VAR_3->dvco_rst);

 return VAR_4;
}
