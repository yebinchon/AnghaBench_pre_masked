
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_chan_spec {unsigned int channel; } ;
struct ad5064_state {TYPE_2__* vref_reg; TYPE_1__* chip_info; scalar_t__ use_internal_vref; } ;
struct TYPE_4__ {int consumer; } ;
struct TYPE_3__ {int internal_vref; scalar_t__ shared_vref; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ad5064_state *VAR_0,
 struct iio_chan_spec const *VAR_1)
{
 unsigned int VAR_2;

 if (VAR_0->use_internal_vref)
  return VAR_0->chip_info->internal_vref;

 VAR_2 = VAR_0->chip_info->shared_vref ? 0 : VAR_1->channel;
 return FUNC_0(VAR_0->vref_reg[VAR_2].consumer);
}
