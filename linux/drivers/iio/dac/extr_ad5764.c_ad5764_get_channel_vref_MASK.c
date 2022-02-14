
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ad5764_state {TYPE_2__* vref_reg; TYPE_1__* chip_info; } ;
struct TYPE_4__ {int consumer; } ;
struct TYPE_3__ {int int_vref; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ad5764_state *VAR_0,
 unsigned int VAR_1)
{
 if (VAR_0->chip_info->int_vref)
  return VAR_0->chip_info->int_vref;
 else
  return FUNC_0(VAR_0->vref_reg[VAR_1 / 2].consumer);
}
