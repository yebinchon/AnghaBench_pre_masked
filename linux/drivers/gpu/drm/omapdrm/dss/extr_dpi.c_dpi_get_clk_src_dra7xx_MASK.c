
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpi_data {int dss; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
typedef enum dss_clk_source { ____Placeholder_dss_clk_source } dss_clk_source ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int ,int) ;

__attribute__((used)) static enum dss_clk_source FUNC_1(struct dpi_data *VAR_5,
        enum omap_channel VAR_6)
{







 switch (VAR_6) {
 case 130:
 {
  if (FUNC_0(VAR_5->dss, VAR_1))
   return VAR_1;
  break;
 }
 case 129:
 {
  if (FUNC_0(VAR_5->dss, VAR_2))
   return VAR_2;
  if (FUNC_0(VAR_5->dss, VAR_4))
   return VAR_4;
  break;
 }
 case 128:
 {
  if (FUNC_0(VAR_5->dss, VAR_3))
   return VAR_3;
  if (FUNC_0(VAR_5->dss, VAR_2))
   return VAR_2;
  break;
 }
 default:
  break;
 }

 return VAR_0;
}
