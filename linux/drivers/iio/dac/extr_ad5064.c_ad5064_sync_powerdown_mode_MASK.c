
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_chan_spec {unsigned int address; size_t channel; } ;
struct ad5064_state {unsigned int* pwr_down_mode; scalar_t__* pwr_down; TYPE_1__* chip_info; } ;
struct TYPE_2__ {scalar_t__ regmap_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ad5064_state*,int ,unsigned int,unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(struct ad5064_state *VAR_3,
 const struct iio_chan_spec *VAR_4)
{
 unsigned int VAR_5, VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 if (VAR_3->chip_info->regmap_type == VAR_2) {
  VAR_5 = 0;
  VAR_6 = VAR_4->address;
 } else {
  if (VAR_3->chip_info->regmap_type == VAR_1)
   VAR_7 = 4;
  else
   VAR_7 = 8;

  VAR_5 = (0x1 << VAR_4->address);
  VAR_6 = 0;

  if (VAR_3->pwr_down[VAR_4->channel])
   VAR_5 |= VAR_3->pwr_down_mode[VAR_4->channel] << VAR_7;
 }

 VAR_8 = FUNC_0(VAR_3, VAR_0, VAR_6, VAR_5, 0);

 return VAR_8;
}
