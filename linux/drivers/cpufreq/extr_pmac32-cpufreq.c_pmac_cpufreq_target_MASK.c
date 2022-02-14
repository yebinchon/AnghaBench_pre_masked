
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct cpufreq_policy*,unsigned int) ;
 unsigned long VAR_1 ;

__attribute__((used)) static int FUNC_1( struct cpufreq_policy *VAR_2,
     unsigned int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);

 VAR_1 = VAR_0 * 1000ul;
 return VAR_4;
}
