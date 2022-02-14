
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsi_data {int num_lanes_supported; TYPE_1__* lanes; } ;
struct TYPE_2__ {scalar_t__ function; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(struct dsi_data *VAR_1)
{
 unsigned int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_lanes_supported; ++VAR_3) {
  if (VAR_1->lanes[VAR_3].function != VAR_0)
   VAR_2 |= 1 << VAR_3;
 }

 return VAR_2;
}
