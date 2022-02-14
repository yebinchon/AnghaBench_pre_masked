
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dss_device {void** lcd_clk_source; void* dispc_clk_source; void** dsi_clk_source; int dss_clk; int dss_clk_rate; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct dss_device*,int ,int,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dss_device*,int ) ;
 int FUNC_4 (struct dss_device*) ;
 int FUNC_5 (struct dss_device*) ;
 int FUNC_6 (struct dss_device*,void*) ;
 int FUNC_7 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct dss_device *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_3->dss_clk_rate = FUNC_2(VAR_3->dss_clk);


 FUNC_1(VAR_3, VAR_1, 0, 0, 0);

 FUNC_6(VAR_3, VAR_0);






 VAR_3->dsi_clk_source[0] = VAR_0;
 VAR_3->dsi_clk_source[1] = VAR_0;
 VAR_3->dispc_clk_source = VAR_0;
 VAR_3->lcd_clk_source[0] = VAR_0;
 VAR_3->lcd_clk_source[1] = VAR_0;

 VAR_4 = FUNC_3(VAR_3, VAR_2);
 FUNC_7("OMAP DSS rev %d.%d\n", FUNC_0(VAR_4, 7, 4), FUNC_0(VAR_4, 3, 0));

 FUNC_5(VAR_3);

 return 0;
}
