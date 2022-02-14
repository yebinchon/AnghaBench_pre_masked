
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int transition_latency; } ;
struct cpufreq_policy {int freq_table; TYPE_1__ cpuinfo; int clk; } ;
struct TYPE_6__ {TYPE_2__* info; } ;
struct TYPE_5__ {int latency; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct cpufreq_policy *VAR_3)
{
 VAR_3->clk = VAR_0;
 VAR_3->cpuinfo.transition_latency = VAR_1.info->latency;
 VAR_3->freq_table = VAR_2;

 return 0;
}
