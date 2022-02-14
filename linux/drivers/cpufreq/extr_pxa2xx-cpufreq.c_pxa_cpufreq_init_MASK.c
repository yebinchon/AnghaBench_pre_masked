
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pxa_freqs {int dummy; } ;
struct TYPE_7__ {int transition_latency; } ;
struct cpufreq_policy {struct cpufreq_frequency_table* freq_table; TYPE_1__ cpuinfo; } ;
struct cpufreq_frequency_table {unsigned int frequency; int driver_data; } ;
struct TYPE_12__ {int driver_data; void* frequency; } ;
struct TYPE_11__ {void* khz; } ;
struct TYPE_10__ {int driver_data; void* frequency; } ;
struct TYPE_9__ {void* khz; } ;
struct TYPE_8__ {unsigned int khz; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct cpufreq_frequency_table**,struct pxa_freqs const**) ;
 int FUNC_3 (char*,...) ;
 TYPE_6__* VAR_4 ;
 TYPE_5__* VAR_5 ;
 TYPE_4__* VAR_6 ;
 TYPE_3__* VAR_7 ;
 int VAR_8 ;
 struct cpufreq_frequency_table* VAR_9 ;
 TYPE_2__* VAR_10 ;
 int FUNC_4 () ;
 unsigned int VAR_11 ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct cpufreq_policy *VAR_12)
{
 int VAR_13;
 unsigned int VAR_14;
 struct cpufreq_frequency_table *VAR_15;
 const struct pxa_freqs *VAR_16;


 if (FUNC_1())
  FUNC_4();

 FUNC_5();


 VAR_12->cpuinfo.transition_latency = 1000;


 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  VAR_4[VAR_13].frequency = VAR_5[VAR_13].khz;
  VAR_4[VAR_13].driver_data = VAR_13;
 }
 VAR_4[VAR_13].frequency = VAR_0;


 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  VAR_6[VAR_13].frequency =
   VAR_7[VAR_13].khz;
  VAR_6[VAR_13].driver_data = VAR_13;
 }
 VAR_6[VAR_13].frequency = VAR_0;

 VAR_8 = !!VAR_8;


 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  VAR_14 = VAR_10[VAR_13].khz;
  if (VAR_14 > VAR_11)
   break;
  VAR_9[VAR_13].frequency = VAR_14;
  VAR_9[VAR_13].driver_data = VAR_13;
 }
 VAR_9[VAR_13].driver_data = VAR_13;
 VAR_9[VAR_13].frequency = VAR_0;





 if (FUNC_0()) {
  FUNC_2(&VAR_15, &VAR_16);
  FUNC_3("using %s frequency table\n",
   VAR_8 ? "turbo" : "run");

  VAR_12->freq_table = VAR_15;
 }
 else if (FUNC_1()) {
  VAR_12->freq_table = VAR_9;
 }

 FUNC_3("frequency change support initialized\n");

 return 0;
}
