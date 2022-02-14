
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cpumask {int dummy; } ;
struct cacheinfo {struct cpumask shared_cpu_map; } ;
typedef int ssize_t ;


 int FUNC_0 (int,char*,struct cpumask const*) ;
 struct cacheinfo* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, bool VAR_1, char *VAR_2)
{
 struct cacheinfo *VAR_3 = FUNC_1(VAR_0);
 const struct cpumask *VAR_4 = &VAR_3->shared_cpu_map;

 return FUNC_0(VAR_1, VAR_2, VAR_4);
}
