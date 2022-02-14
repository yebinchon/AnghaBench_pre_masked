
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk3x_i2c_calced_timings {unsigned long div_low; unsigned long div_high; int tuning; } ;
struct i2c_timings {int bus_freq_hz; unsigned long scl_rise_ns; unsigned long scl_fall_ns; } ;
struct i2c_spec_values {unsigned long min_high_ns; unsigned long min_low_ns; unsigned long max_data_hold_ns; unsigned long min_data_setup_ns; unsigned long min_setup_start_ns; unsigned long min_setup_stop_ns; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (int) ;
 struct i2c_spec_values* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(unsigned long VAR_1,
        struct i2c_timings *VAR_2,
        struct rk3x_i2c_calced_timings *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 unsigned long VAR_6, VAR_7;
 unsigned long VAR_8, VAR_9;

 unsigned long VAR_10, VAR_11;

 unsigned long VAR_12, VAR_13;

 unsigned long VAR_14, VAR_15;
 unsigned long VAR_16, VAR_17;
 unsigned long VAR_18, VAR_19, VAR_20;

 const struct i2c_spec_values *VAR_21;
 int VAR_22 = 0;


 if (FUNC_4(VAR_2->bus_freq_hz > 1000000))
  VAR_2->bus_freq_hz = 1000000;


 if (FUNC_4(VAR_2->bus_freq_hz < 1000))
  VAR_2->bus_freq_hz = 1000;







 VAR_21 = FUNC_5(VAR_2->bus_freq_hz);


 VAR_10 = FUNC_0(VAR_1, 1000);
 VAR_11 = VAR_2->bus_freq_hz / 1000;
 VAR_15 = FUNC_0(VAR_10, VAR_11 * 8);

 VAR_5 = VAR_2->scl_rise_ns + VAR_21->min_high_ns;
 VAR_13 = FUNC_0(VAR_10 * VAR_5, 8 * 1000000);

 VAR_4 = VAR_2->scl_fall_ns + VAR_21->min_low_ns;
 VAR_12 = FUNC_0(VAR_10 * VAR_4, 8 * 1000000);





 VAR_13 = (VAR_13 < 1) ? 2 : VAR_13;
 VAR_12 = (VAR_12 < 1) ? 2 : VAR_12;


 VAR_14 = (VAR_12 + VAR_13);





 if (VAR_14 >= VAR_15) {




  VAR_3->div_low = VAR_12;
  VAR_3->div_high = VAR_13;
 } else {







  VAR_16 = VAR_15 - VAR_14;
  VAR_17 = FUNC_0(VAR_12 * VAR_16,
          VAR_14);

  VAR_3->div_low = VAR_12 + VAR_17;
  VAR_3->div_high = VAR_13 + (VAR_16 - VAR_17);
 }





 for (VAR_18 = 3; VAR_18 > 0; VAR_18--) {
  VAR_9 = FUNC_0((VAR_18
       * (VAR_3->div_low) + 1)
       * 1000000, VAR_10);
  VAR_7 = FUNC_0(((8 - VAR_18)
       * (VAR_3->div_low) + 1)
       * 1000000, VAR_10);
  if ((VAR_9 < VAR_21->max_data_hold_ns) &&
      (VAR_7 > VAR_21->min_data_setup_ns))
   break;
 }


 VAR_6 = VAR_2->scl_rise_ns + VAR_21->min_setup_start_ns;
 VAR_19 = FUNC_0(VAR_10 * VAR_6
      - 1000000, 8 * 1000000 * (VAR_3->div_high));


 VAR_8 = VAR_2->scl_rise_ns + VAR_21->min_setup_stop_ns;
 VAR_20 = FUNC_0(VAR_10 * VAR_8
      - 1000000, 8 * 1000000 * (VAR_3->div_high));

 VAR_3->tuning = FUNC_1(--VAR_18) |
    FUNC_2(--VAR_19) |
    FUNC_3(--VAR_20);

 VAR_3->div_low--;
 VAR_3->div_high--;


 if (VAR_3->div_low > 0xffff) {
  VAR_3->div_low = 0xffff;
  VAR_22 = -VAR_0;
 }

 if (VAR_3->div_high > 0xffff) {
  VAR_3->div_high = 0xffff;
  VAR_22 = -VAR_0;
 }

 return VAR_22;
}
