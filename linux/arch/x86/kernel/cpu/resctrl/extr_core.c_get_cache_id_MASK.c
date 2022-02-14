
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpu_cacheinfo {int num_leaves; TYPE_1__* info_list; } ;
struct TYPE_2__ {int level; int id; } ;


 struct cpu_cacheinfo* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(int VAR_0, int VAR_1)
{
 struct cpu_cacheinfo *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_leaves; VAR_3++) {
  if (VAR_2->info_list[VAR_3].level == VAR_1)
   return VAR_2->info_list[VAR_3].id;
 }

 return -1;
}
