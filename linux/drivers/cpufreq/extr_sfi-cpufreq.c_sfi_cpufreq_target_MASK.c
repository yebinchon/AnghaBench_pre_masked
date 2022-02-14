
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct cpufreq_policy {int cpu; TYPE_1__* freq_table; } ;
struct TYPE_4__ {scalar_t__ ctrl_val; } ;
struct TYPE_3__ {unsigned int driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*,int*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct cpufreq_policy *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = 0;
 u32 VAR_6, VAR_7;

 VAR_5 = VAR_3->freq_table[VAR_4].driver_data;

 FUNC_0(VAR_3->cpu, VAR_1, &VAR_6, &VAR_7);
 VAR_6 = (VAR_6 & ~VAR_0) |
  ((u32) VAR_2[VAR_5].ctrl_val &
  VAR_0);
 FUNC_1(VAR_3->cpu, VAR_1, VAR_6, VAR_7);

 return 0;
}
