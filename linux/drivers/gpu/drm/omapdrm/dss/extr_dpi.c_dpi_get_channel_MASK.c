
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpi_data {int dss_model; int id; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int FUNC_0 (char*) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum omap_channel FUNC_1(struct dpi_data *VAR_3)
{
 switch (VAR_3->dss_model) {
 case 131:
 case 130:
  return VAR_0;

 case 132:
  switch (VAR_3->id) {
  case 2:
   return VAR_2;
  case 1:
   return VAR_1;
  case 0:
  default:
   return VAR_0;
  }

 case 129:
  return VAR_1;

 case 128:
  return VAR_2;

 default:
  FUNC_0("unsupported DSS version\n");
  return VAR_0;
 }
}
