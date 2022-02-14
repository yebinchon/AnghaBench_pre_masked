
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct scpi_data {int clk; } ;
struct TYPE_3__ {int max_freq; } ;
struct cpufreq_policy {TYPE_1__ cpuinfo; int related_cpus; struct scpi_data* driver_data; TYPE_2__* freq_table; } ;
struct TYPE_4__ {unsigned long frequency; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct cpufreq_policy *VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3 = VAR_1->freq_table[VAR_2].frequency;
 struct scpi_data *VAR_4 = VAR_1->driver_data;
 u64 VAR_5 = VAR_3 * 1000;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_4->clk, VAR_5);

 if (VAR_6)
  return VAR_6;

 if (FUNC_1(VAR_4->clk) != VAR_5)
  return -VAR_0;

 FUNC_0(VAR_1->related_cpus, VAR_3,
       VAR_1->cpuinfo.max_freq);

 return 0;
}
