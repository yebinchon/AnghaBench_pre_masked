
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct freq_attr {int (* show ) (struct cpufreq_policy*,char*) ;} ;
struct cpufreq_policy {int rwsem; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct cpufreq_policy*,char*) ;
 struct freq_attr* FUNC_2 (struct attribute*) ;
 struct cpufreq_policy* FUNC_3 (struct kobject*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct kobject *VAR_0, struct attribute *VAR_1, char *VAR_2)
{
 struct cpufreq_policy *VAR_3 = FUNC_3(VAR_0);
 struct freq_attr *VAR_4 = FUNC_2(VAR_1);
 ssize_t VAR_5;

 FUNC_0(&VAR_3->rwsem);
 VAR_5 = VAR_4->show(VAR_3, VAR_2);
 FUNC_4(&VAR_3->rwsem);

 return VAR_5;
}
