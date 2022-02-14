
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad5449 {TYPE_1__* chip_info; } ;
struct TYPE_2__ {int num_channels; } ;



__attribute__((used)) static const char *FUNC_0(struct ad5449 *VAR_0, int VAR_1)
{
 if (VAR_0->chip_info->num_channels == 1)
  return "VREF";

 if (VAR_1 == 0)
  return "VREFA";
 else
  return "VREFB";
}
