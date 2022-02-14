
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dispc_channel; } ;
struct dpi_data {int dss_model; TYPE_1__ output; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
typedef enum dss_clk_source { ____Placeholder_dss_clk_source } dss_clk_source ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dpi_data*,int) ;

__attribute__((used)) static enum dss_clk_source FUNC_1(struct dpi_data *VAR_3)
{
 enum omap_channel VAR_4 = VAR_3->output.dispc_channel;






 switch (VAR_3->dss_model) {
 case 134:
 case 133:
  return VAR_0;

 case 132:
  switch (VAR_4) {
  case 130:
   return VAR_1;
  case 129:
   return VAR_2;
  default:
   return VAR_0;
  }

 case 131:
  switch (VAR_4) {
  case 130:
   return VAR_1;
  case 128:
   return VAR_2;
  case 129:
  default:
   return VAR_0;
  }

 case 135:
  return FUNC_0(VAR_3, VAR_4);

 default:
  return VAR_0;
 }
}
