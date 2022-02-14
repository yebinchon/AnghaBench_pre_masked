
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct ad5755_state {int dummy; } ;
struct ad5755_platform_data {unsigned int dc_dc_phase; unsigned int dc_dc_freq; unsigned int dc_dc_maxv; TYPE_2__* dac; scalar_t__ ext_dc_dc_compenstation_resistor; } ;
struct TYPE_3__ {unsigned int step_size; unsigned int rate; scalar_t__ enable; } ;
struct TYPE_4__ {unsigned int mode; scalar_t__ enable_voltage_overrange; int ext_current_sense_resistor; TYPE_1__ slew; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int FUNC_0 (TYPE_2__*) ;
 int VAR_14 ;
 int FUNC_1 (struct ad5755_state*,unsigned int) ;
 int FUNC_2 (struct iio_dev*,unsigned int,unsigned int,int ) ;
 int FUNC_3 (struct iio_dev*,unsigned int,int ,unsigned int) ;
 struct ad5755_state* FUNC_4 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_15,
         const struct ad5755_platform_data *VAR_16)
{
 struct ad5755_state *VAR_17 = FUNC_4(VAR_15);
 unsigned int VAR_18;
 unsigned int VAR_19;
 int VAR_20;

 if (VAR_16->dc_dc_phase > VAR_8 ||
  VAR_16->dc_dc_freq > VAR_4 ||
  VAR_16->dc_dc_maxv > VAR_7)
  return -VAR_14;

 VAR_18 = VAR_16->dc_dc_maxv << VAR_6;
 VAR_18 |= VAR_16->dc_dc_freq << VAR_5;
 VAR_18 |= VAR_16->dc_dc_phase << VAR_9;
 if (VAR_16->ext_dc_dc_compenstation_resistor)
  VAR_18 |= VAR_10;

 VAR_20 = FUNC_3(VAR_15, 0, VAR_0, VAR_18);
 if (VAR_20 < 0)
  return VAR_20;

 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_16->dac); ++VAR_19) {
  VAR_18 = VAR_16->dac[VAR_19].slew.step_size <<
   VAR_13;
  VAR_18 |= VAR_16->dac[VAR_19].slew.rate <<
   VAR_12;
  if (VAR_16->dac[VAR_19].slew.enable)
   VAR_18 |= VAR_11;

  VAR_20 = FUNC_3(VAR_15, VAR_19,
     VAR_1, VAR_18);
  if (VAR_20 < 0)
   return VAR_20;
 }

 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_16->dac); ++VAR_19) {
  if (!FUNC_1(VAR_17, VAR_16->dac[VAR_19].mode))
   return -VAR_14;

  VAR_18 = 0;
  if (!VAR_16->dac[VAR_19].ext_current_sense_resistor)
   VAR_18 |= VAR_2;
  if (VAR_16->dac[VAR_19].enable_voltage_overrange)
   VAR_18 |= VAR_3;
  VAR_18 |= VAR_16->dac[VAR_19].mode;

  VAR_20 = FUNC_2(VAR_15, VAR_19, VAR_18, 0);
  if (VAR_20 < 0)
   return VAR_20;
 }

 return 0;
}
