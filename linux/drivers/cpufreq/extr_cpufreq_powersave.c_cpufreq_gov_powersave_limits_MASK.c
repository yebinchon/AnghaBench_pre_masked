
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int min; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpufreq_policy*,int ,int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct cpufreq_policy *VAR_1)
{
 FUNC_1("setting to %u kHz\n", VAR_1->min);
 FUNC_0(VAR_1, VAR_1->min, VAR_0);
}
