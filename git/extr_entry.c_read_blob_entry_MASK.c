
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry {int oid; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int *,int*,unsigned long*) ;

__attribute__((used)) static void *FUNC_2(const struct cache_entry *VAR_1, unsigned long *VAR_2)
{
 enum object_type VAR_3;
 void *VAR_4 = FUNC_1(&VAR_1->oid, &VAR_3, VAR_2);

 if (VAR_4) {
  if (VAR_3 == VAR_0)
   return VAR_4;
  FUNC_0(VAR_4);
 }
 return ((void*)0);
}
