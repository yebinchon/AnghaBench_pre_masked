
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fatLightmapCols; int fatLightmapRows; scalar_t__ worldDeluxeMapping; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static float FUNC_0(float VAR_1, int VAR_2)
{
 if (VAR_2 < 0)
  return VAR_1;

 if (VAR_0.worldDeluxeMapping)
  VAR_2 >>= 1;

 if (VAR_0.fatLightmapCols > 0)
 {
  VAR_2 %= (VAR_0.fatLightmapCols * VAR_0.fatLightmapRows);
  return (VAR_1 + (VAR_2 / VAR_0.fatLightmapCols)) / (float)(VAR_0.fatLightmapRows);
 }

 return VAR_1;
}
