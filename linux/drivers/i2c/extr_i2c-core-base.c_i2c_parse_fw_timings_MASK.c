
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_timings {int bus_freq_hz; int scl_rise_ns; int scl_fall_ns; int scl_int_delay_ns; int sda_fall_ns; int sda_hold_ns; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int*) ;
 int FUNC_1 (struct i2c_timings*,int ,int) ;

void FUNC_2(struct device *VAR_0, struct i2c_timings *VAR_1, bool VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_1, 0, sizeof(*VAR_1));

 VAR_3 = FUNC_0(VAR_0, "clock-frequency", &VAR_1->bus_freq_hz);
 if (VAR_3 && VAR_2)
  VAR_1->bus_freq_hz = 100000;

 VAR_3 = FUNC_0(VAR_0, "i2c-scl-rising-time-ns", &VAR_1->scl_rise_ns);
 if (VAR_3 && VAR_2) {
  if (VAR_1->bus_freq_hz <= 100000)
   VAR_1->scl_rise_ns = 1000;
  else if (VAR_1->bus_freq_hz <= 400000)
   VAR_1->scl_rise_ns = 300;
  else
   VAR_1->scl_rise_ns = 120;
 }

 VAR_3 = FUNC_0(VAR_0, "i2c-scl-falling-time-ns", &VAR_1->scl_fall_ns);
 if (VAR_3 && VAR_2) {
  if (VAR_1->bus_freq_hz <= 400000)
   VAR_1->scl_fall_ns = 300;
  else
   VAR_1->scl_fall_ns = 120;
 }

 FUNC_0(VAR_0, "i2c-scl-internal-delay-ns", &VAR_1->scl_int_delay_ns);

 VAR_3 = FUNC_0(VAR_0, "i2c-sda-falling-time-ns", &VAR_1->sda_fall_ns);
 if (VAR_3 && VAR_2)
  VAR_1->sda_fall_ns = VAR_1->scl_fall_ns;

 FUNC_0(VAR_0, "i2c-sda-hold-time-ns", &VAR_1->sda_hold_ns);
}
