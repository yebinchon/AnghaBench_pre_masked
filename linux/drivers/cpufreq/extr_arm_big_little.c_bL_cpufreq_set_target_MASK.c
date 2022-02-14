
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {int max_freq; } ;
struct cpufreq_policy {size_t cpu; TYPE_1__ cpuinfo; int related_cpus; } ;
struct TYPE_4__ {unsigned int frequency; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,unsigned int,int ) ;
 int FUNC_1 (size_t,size_t,size_t,unsigned int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 size_t FUNC_2 (size_t) ;
 TYPE_2__** VAR_4 ;
 scalar_t__ FUNC_3 () ;
 size_t FUNC_4 (int ,size_t) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct cpufreq_policy *VAR_6,
  unsigned int VAR_7)
{
 u32 VAR_8 = VAR_6->cpu, VAR_9, VAR_10, VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 VAR_9 = FUNC_2(VAR_8);
 VAR_10 = VAR_11 = FUNC_4(VAR_5, VAR_8);

 VAR_12 = VAR_4[VAR_9][VAR_7].frequency;

 if (FUNC_3()) {
  if ((VAR_11 == VAR_0) &&
    (VAR_12 < VAR_2)) {
   VAR_10 = VAR_1;
  } else if ((VAR_11 == VAR_1) &&
    (VAR_12 > VAR_3)) {
   VAR_10 = VAR_0;
  }
 }

 VAR_13 = FUNC_1(VAR_8, VAR_11, VAR_10, VAR_12);

 if (!VAR_13) {
  FUNC_0(VAR_6->related_cpus, VAR_12,
        VAR_6->cpuinfo.max_freq);
 }

 return VAR_13;
}
