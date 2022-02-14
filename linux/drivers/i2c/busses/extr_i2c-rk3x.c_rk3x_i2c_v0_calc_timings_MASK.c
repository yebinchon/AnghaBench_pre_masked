
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk3x_i2c_calced_timings {unsigned long div_low; unsigned long div_high; scalar_t__ tuning; } ;
struct i2c_timings {int bus_freq_hz; unsigned long scl_rise_ns; unsigned long sda_fall_ns; unsigned long scl_fall_ns; } ;
struct i2c_spec_values {unsigned long min_high_ns; int min_setup_start_ns; unsigned long min_low_ns; int max_data_hold_ns; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,char*,unsigned long,unsigned long) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 struct i2c_spec_values* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(unsigned long VAR_1,
        struct i2c_timings *VAR_2,
        struct rk3x_i2c_calced_timings *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 unsigned long VAR_6, VAR_7;

 unsigned long VAR_8, VAR_9;

 unsigned long VAR_10, VAR_11;
 unsigned long VAR_12;

 unsigned long VAR_13, VAR_14;
 unsigned long VAR_15, VAR_16, VAR_17;

 unsigned long VAR_18 = 50;
 const struct i2c_spec_values *VAR_19;
 int VAR_20 = 0;


 if (FUNC_1(VAR_2->bus_freq_hz > 400000))
  VAR_2->bus_freq_hz = 400000;


 if (FUNC_1(VAR_2->bus_freq_hz < 1000))
  VAR_2->bus_freq_hz = 1000;
 VAR_19 = FUNC_4(VAR_2->bus_freq_hz);
 VAR_5 = VAR_2->scl_rise_ns + VAR_19->min_high_ns;
 VAR_5 = FUNC_3(VAR_5, FUNC_0(
  (VAR_2->scl_rise_ns + VAR_19->min_setup_start_ns) * 1000, 875));
 VAR_5 = FUNC_3(VAR_5, FUNC_0(
  (VAR_2->scl_rise_ns + VAR_19->min_setup_start_ns + VAR_2->sda_fall_ns +
  VAR_19->min_high_ns), 2));

 VAR_4 = VAR_2->scl_fall_ns + VAR_19->min_low_ns;
 VAR_6 = VAR_19->max_data_hold_ns * 2 - VAR_18;
 VAR_7 = VAR_4 + VAR_5;


 VAR_8 = FUNC_0(VAR_1, 1000);
 VAR_9 = VAR_2->bus_freq_hz / 1000;





 VAR_14 = FUNC_0(VAR_8, VAR_9 * 8);


 VAR_10 = FUNC_0(VAR_8 * VAR_4, 8 * 1000000);
 VAR_11 = FUNC_0(VAR_8 * VAR_5, 8 * 1000000);
 VAR_13 = (VAR_10 + VAR_11);





 VAR_12 = VAR_8 * VAR_6 / (8 * 1000000);

 if (VAR_10 > VAR_12) {
  FUNC_2(1,
     "Conflicting, min_low_div %lu, max_low_div %lu\n",
     VAR_10, VAR_12);
  VAR_12 = VAR_10;
 }

 if (VAR_13 > VAR_14) {




  VAR_3->div_low = VAR_10;
  VAR_3->div_high = VAR_11;
 } else {




  VAR_15 = VAR_14 - VAR_13;






  VAR_17 = FUNC_0(VAR_8 * VAR_4,
          VAR_9 * 8 * VAR_7);


  if (VAR_17 > VAR_12)
   VAR_17 = VAR_12;





  if (VAR_17 > VAR_10 + VAR_15)
   VAR_17 = VAR_10 + VAR_15;


  VAR_16 = VAR_17 - VAR_10;
  VAR_3->div_low = VAR_17;
  VAR_3->div_high = VAR_11 + (VAR_15 - VAR_16);
 }





 VAR_3->div_low--;
 VAR_3->div_high--;


 VAR_3->tuning = 0;

 if (VAR_3->div_low > 0xffff) {
  VAR_3->div_low = 0xffff;
  VAR_20 = -VAR_0;
 }

 if (VAR_3->div_high > 0xffff) {
  VAR_3->div_high = 0xffff;
  VAR_20 = -VAR_0;
 }

 return VAR_20;
}
