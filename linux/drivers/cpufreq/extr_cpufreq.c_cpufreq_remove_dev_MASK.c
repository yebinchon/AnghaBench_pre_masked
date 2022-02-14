
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct subsys_interface {int dummy; } ;
struct device {unsigned int id; } ;
struct cpufreq_policy {int real_cpus; } ;
struct TYPE_2__ {int (* exit ) (struct cpufreq_policy*) ;scalar_t__ offline; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct cpufreq_policy*) ;
 int FUNC_3 (unsigned int,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 struct cpufreq_policy* FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (struct cpufreq_policy*,struct device*) ;
 int FUNC_7 (struct cpufreq_policy*) ;

__attribute__((used)) static void FUNC_8(struct device *VAR_2, struct subsys_interface *VAR_3)
{
 unsigned int VAR_4 = VAR_2->id;
 struct cpufreq_policy *VAR_5 = FUNC_5(VAR_0, VAR_4);

 if (!VAR_5)
  return;

 if (FUNC_0(VAR_4))
  FUNC_1(VAR_4);

 FUNC_3(VAR_4, VAR_5->real_cpus);
 FUNC_6(VAR_5, VAR_2);

 if (FUNC_4(VAR_5->real_cpus)) {

  if (VAR_1->offline)
   VAR_1->exit(VAR_5);

  FUNC_2(VAR_5);
 }
}
