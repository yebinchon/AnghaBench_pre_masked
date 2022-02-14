
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsi_data {int module_id; TYPE_1__* data; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_2__ {int model; } ;





 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum omap_channel FUNC_1(struct dsi_data *VAR_3)
{
 switch (VAR_3->data->model) {
 case 130:
  return VAR_0;

 case 129:
  switch (VAR_3->module_id) {
  case 0:
   return VAR_0;
  case 1:
   return VAR_1;
  default:
   FUNC_0("unsupported module id\n");
   return VAR_0;
  }

 case 128:
  switch (VAR_3->module_id) {
  case 0:
   return VAR_0;
  case 1:
   return VAR_2;
  default:
   FUNC_0("unsupported module id\n");
   return VAR_0;
  }

 default:
  FUNC_0("unsupported DSS version\n");
  return VAR_0;
 }
}
