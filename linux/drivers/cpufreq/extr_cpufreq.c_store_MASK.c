
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct freq_attr {int (* store ) (struct cpufreq_policy*,char const*,size_t) ;} ;
struct cpufreq_policy {int rwsem; int cpu; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cpufreq_policy*,char const*,size_t) ;
 struct freq_attr* FUNC_5 (struct attribute*) ;
 struct cpufreq_policy* FUNC_6 (struct kobject*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static ssize_t FUNC_8(struct kobject *VAR_2, struct attribute *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 struct cpufreq_policy *VAR_6 = FUNC_6(VAR_2);
 struct freq_attr *VAR_7 = FUNC_5(VAR_3);
 ssize_t VAR_8 = -VAR_1;





 if (!FUNC_1())
  return -VAR_0;

 if (FUNC_0(VAR_6->cpu)) {
  FUNC_3(&VAR_6->rwsem);
  VAR_8 = VAR_7->store(VAR_6, VAR_4, VAR_5);
  FUNC_7(&VAR_6->rwsem);
 }

 FUNC_2();

 return VAR_8;
}
