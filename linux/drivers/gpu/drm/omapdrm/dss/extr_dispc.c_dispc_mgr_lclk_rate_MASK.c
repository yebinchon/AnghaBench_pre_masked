
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* clkout; } ;
struct dss_pll {TYPE_1__ cinfo; } ;
struct dispc_device {int dss; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
typedef enum dss_clk_source { ____Placeholder_dss_clk_source } dss_clk_source ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct dispc_device*,int ,int,int) ;
 unsigned long FUNC_2 (struct dispc_device*) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;
 struct dss_pll* FUNC_6 (int ,int) ;
 unsigned int FUNC_7 (int) ;

__attribute__((used)) static unsigned long FUNC_8(struct dispc_device *VAR_1,
      enum omap_channel VAR_2)
{
 int VAR_3;
 unsigned long VAR_4;
 enum dss_clk_source VAR_5;


 if (!FUNC_5(VAR_2))
  return FUNC_2(VAR_1);

 VAR_5 = FUNC_4(VAR_1->dss, VAR_2);

 if (VAR_5 == VAR_0) {
  VAR_4 = FUNC_3(VAR_1->dss);
 } else {
  struct dss_pll *VAR_6;
  unsigned int VAR_7;

  VAR_6 = FUNC_6(VAR_1->dss, VAR_5);
  VAR_7 = FUNC_7(VAR_5);

  VAR_4 = VAR_6->cinfo.clkout[VAR_7];
 }

 VAR_3 = FUNC_1(VAR_1, FUNC_0(VAR_2), 23, 16);

 return VAR_4 / VAR_3;
}
