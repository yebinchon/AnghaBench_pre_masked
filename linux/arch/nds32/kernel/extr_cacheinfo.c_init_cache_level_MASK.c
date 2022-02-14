
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_cacheinfo {int num_levels; int num_leaves; } ;


 struct cpu_cacheinfo* FUNC_0 (unsigned int) ;

int FUNC_1(unsigned int VAR_0)
{
 struct cpu_cacheinfo *VAR_1 = FUNC_0(VAR_0);


 VAR_1->num_levels = 1;
 VAR_1->num_leaves = 2;
 return 0;
}
