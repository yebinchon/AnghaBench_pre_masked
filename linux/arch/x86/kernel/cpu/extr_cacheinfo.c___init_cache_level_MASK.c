
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_cacheinfo {int num_levels; scalar_t__ num_leaves; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cpu_cacheinfo* FUNC_0 (unsigned int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_3)
{
 struct cpu_cacheinfo *VAR_4 = FUNC_0(VAR_3);

 if (!VAR_2)
  return -VAR_1;
 if (!VAR_4)
  return -VAR_0;
 VAR_4->num_levels = 3;
 VAR_4->num_leaves = VAR_2;
 return 0;
}
