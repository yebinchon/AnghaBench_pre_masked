
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* clkout; } ;
struct dss_pll {TYPE_1__ cinfo; } ;
struct dispc_device {int dss; } ;
typedef enum dss_clk_source { ____Placeholder_dss_clk_source } dss_clk_source ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct dss_pll* FUNC_2 (int ,int) ;
 unsigned int FUNC_3 (int) ;

__attribute__((used)) static unsigned long FUNC_4(struct dispc_device *VAR_1)
{
 unsigned long VAR_2;
 enum dss_clk_source VAR_3;

 VAR_3 = FUNC_1(VAR_1->dss);

 if (VAR_3 == VAR_0) {
  VAR_2 = FUNC_0(VAR_1->dss);
 } else {
  struct dss_pll *VAR_4;
  unsigned int VAR_5;

  VAR_4 = FUNC_2(VAR_1->dss, VAR_3);
  VAR_5 = FUNC_3(VAR_3);

  VAR_2 = VAR_4->cinfo.clkout[VAR_5];
 }

 return VAR_2;
}
