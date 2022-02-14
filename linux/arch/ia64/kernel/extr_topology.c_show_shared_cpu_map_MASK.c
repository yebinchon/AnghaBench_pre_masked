
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_info {int shared_cpu_map; } ;
typedef int ssize_t ;
typedef int cpumask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct cache_info *VAR_2, char *VAR_3)
{
 cpumask_t VAR_4;

 FUNC_0(&VAR_4,
    &VAR_2->shared_cpu_map, VAR_1);
 return FUNC_2(VAR_3, VAR_0, "%*pb\n",
    FUNC_1(&VAR_4));
}
