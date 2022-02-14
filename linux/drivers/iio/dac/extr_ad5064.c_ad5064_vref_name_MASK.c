
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad5064_state {TYPE_1__* chip_info; } ;
struct TYPE_2__ {scalar_t__ shared_vref; } ;


 char const* const* VAR_0 ;

__attribute__((used)) static const char * const FUNC_0(struct ad5064_state *VAR_1,
 unsigned int VAR_2)
{
 return VAR_1->chip_info->shared_vref ? "vref" : VAR_0[VAR_2];
}
