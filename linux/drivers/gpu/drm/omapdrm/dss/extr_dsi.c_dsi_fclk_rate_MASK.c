
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsi_data {int dss_clk; int module_id; int dss; } ;
typedef enum dss_clk_source { ____Placeholder_dss_clk_source } dss_clk_source ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct dsi_data*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static unsigned long FUNC_3(struct dsi_data *VAR_1)
{
 unsigned long VAR_2;
 enum dss_clk_source VAR_3;

 VAR_3 = FUNC_2(VAR_1->dss, VAR_1->module_id);
 if (VAR_3 == VAR_0) {

  VAR_2 = FUNC_0(VAR_1->dss_clk);
 } else {

  VAR_2 = FUNC_1(VAR_1);
 }

 return VAR_2;
}
