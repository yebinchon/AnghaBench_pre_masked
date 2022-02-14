
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_msr {int msr; int (* test ) (unsigned int,void*) ;struct attribute_group* grp; int no_check; } ;
struct attribute_group {int * is_visible; } ;


 unsigned long FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (unsigned int,void*) ;

unsigned long
FUNC_3(struct perf_msr *VAR_2, int VAR_3, bool VAR_4, void *VAR_5)
{
 unsigned long VAR_6 = 0;
 unsigned int VAR_7;
 u64 VAR_8;

 if (VAR_3 >= VAR_0)
  return 0;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  if (!VAR_2[VAR_7].no_check) {
   struct attribute_group *VAR_9 = VAR_2[VAR_7].grp;

   VAR_9->is_visible = VAR_1;

   if (VAR_2[VAR_7].test && !VAR_2[VAR_7].test(VAR_7, VAR_5))
    continue;

   if (FUNC_1(VAR_2[VAR_7].msr, &VAR_8))
    continue;

   if (!VAR_4 && !VAR_8)
    continue;

   VAR_9->is_visible = ((void*)0);
  }
  VAR_6 |= FUNC_0(VAR_7);
 }

 return VAR_6;
}
