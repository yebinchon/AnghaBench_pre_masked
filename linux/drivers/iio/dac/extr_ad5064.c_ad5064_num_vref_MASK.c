
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad5064_state {TYPE_1__* chip_info; } ;
struct TYPE_2__ {unsigned int num_channels; scalar_t__ shared_vref; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct ad5064_state *VAR_0)
{
 return VAR_0->chip_info->shared_vref ? 1 : VAR_0->chip_info->num_channels;
}
