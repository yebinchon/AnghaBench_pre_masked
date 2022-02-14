
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct index_state {int cache_nr; TYPE_1__** cache; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_2__ {int oid; int name; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct index_state const*,char const*,int) ;
 void* FUNC_3 (int *,int*,unsigned long*) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (char const*) ;

void *FUNC_6(const struct index_state *VAR_1,
    const char *VAR_2, unsigned long *VAR_3)
{
 int VAR_4, VAR_5;
 unsigned long VAR_6;
 enum object_type VAR_7;
 void *VAR_8;

 VAR_5 = FUNC_5(VAR_2);
 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_5);
 if (VAR_4 < 0) {




  int VAR_9;
  for (VAR_9 = -VAR_4 - 1;
       (VAR_4 < 0 && VAR_9 < VAR_1->cache_nr &&
        !FUNC_4(VAR_1->cache[VAR_9]->name, VAR_2));
       VAR_9++)
   if (FUNC_0(VAR_1->cache[VAR_9]) == 2)
    VAR_4 = VAR_9;
 }
 if (VAR_4 < 0)
  return ((void*)0);
 VAR_8 = FUNC_3(&VAR_1->cache[VAR_4]->oid, &VAR_7, &VAR_6);
 if (!VAR_8 || VAR_7 != VAR_0) {
  FUNC_1(VAR_8);
  return ((void*)0);
 }
 if (VAR_3)
  *VAR_3 = VAR_6;
 return VAR_8;
}
