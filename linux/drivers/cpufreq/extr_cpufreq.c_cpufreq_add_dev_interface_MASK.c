
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct freq_attr {int attr; } ;
struct cpufreq_policy {int kobj; } ;
struct TYPE_8__ {int attr; } ;
struct TYPE_7__ {scalar_t__ bios_limit; scalar_t__ get; struct freq_attr** attr; } ;
struct TYPE_6__ {int attr; } ;
struct TYPE_5__ {int attr; } ;


 TYPE_4__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(struct cpufreq_policy *VAR_4)
{
 struct freq_attr **VAR_5;
 int VAR_6 = 0;


 VAR_5 = VAR_1->attr;
 while (VAR_5 && *VAR_5) {
  VAR_6 = FUNC_0(&VAR_4->kobj, &((*VAR_5)->attr));
  if (VAR_6)
   return VAR_6;
  VAR_5++;
 }
 if (VAR_1->get) {
  VAR_6 = FUNC_0(&VAR_4->kobj, &VAR_2.attr);
  if (VAR_6)
   return VAR_6;
 }

 VAR_6 = FUNC_0(&VAR_4->kobj, &VAR_3.attr);
 if (VAR_6)
  return VAR_6;

 if (VAR_1->bios_limit) {
  VAR_6 = FUNC_0(&VAR_4->kobj, &VAR_0.attr);
  if (VAR_6)
   return VAR_6;
 }

 return 0;
}
