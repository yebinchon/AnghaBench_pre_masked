
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int array_mode; } ;
union dc_tiling_info {TYPE_1__ gfx8; } ;
typedef enum mi_tiling_format { ____Placeholder_mi_tiling_format } mi_tiling_format ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum mi_tiling_format FUNC_0(
  union dc_tiling_info *VAR_3)
{
 switch (VAR_3->gfx8.array_mode) {
 case 136:
 case 137:
 case 128:
  return VAR_0;
 case 134:
 case 135:
 case 133:
 case 129:
 case 130:
  return VAR_1;
 case 131:
 case 132:
  return VAR_2;
 default:
  return VAR_1;
 }
}
