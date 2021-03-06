
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_sensor {int name; } ;


 struct wf_sensor* backside_temp ;
 struct wf_sensor* dimms_temp ;
 int have_all_sensors ;
 int nr_chips ;
 struct wf_sensor** sens_cpu_amps ;
 struct wf_sensor** sens_cpu_temp ;
 struct wf_sensor** sens_cpu_volts ;
 struct wf_sensor* slots_temp ;
 int strcmp (int ,char*) ;

__attribute__((used)) static void rm31_new_sensor(struct wf_sensor *sr)
{
 bool all_sensors;

 if (!strcmp(sr->name, "cpu-diode-temp-0"))
  sens_cpu_temp[0] = sr;
 else if (!strcmp(sr->name, "cpu-diode-temp-1"))
  sens_cpu_temp[1] = sr;
 else if (!strcmp(sr->name, "cpu-voltage-0"))
  sens_cpu_volts[0] = sr;
 else if (!strcmp(sr->name, "cpu-voltage-1"))
  sens_cpu_volts[1] = sr;
 else if (!strcmp(sr->name, "cpu-current-0"))
  sens_cpu_amps[0] = sr;
 else if (!strcmp(sr->name, "cpu-current-1"))
  sens_cpu_amps[1] = sr;
 else if (!strcmp(sr->name, "backside-temp"))
  backside_temp = sr;
 else if (!strcmp(sr->name, "slots-temp"))
  slots_temp = sr;
 else if (!strcmp(sr->name, "dimms-temp"))
  dimms_temp = sr;

 all_sensors =
  sens_cpu_temp[0] &&
  sens_cpu_volts[0] &&
  sens_cpu_amps[0] &&
  backside_temp &&
  slots_temp &&
  dimms_temp;
 if (nr_chips > 1)
  all_sensors &=
   sens_cpu_temp[1] &&
   sens_cpu_volts[1] &&
   sens_cpu_amps[1];

 have_all_sensors = all_sensors;
}
