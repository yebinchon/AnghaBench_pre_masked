
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pbase_tree_cache {int ref; int temporary; void* tree_data; unsigned long tree_size; int oid; } ;
struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int *,struct object_id const*) ;
 scalar_t__ FUNC_2 (int *,struct object_id const*) ;
 struct pbase_tree_cache** VAR_1 ;
 int FUNC_3 (struct object_id const*) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (struct object_id const*,int*,unsigned long*) ;
 struct pbase_tree_cache* FUNC_6 (int) ;

__attribute__((used)) static struct pbase_tree_cache *FUNC_7(const struct object_id *VAR_2)
{
 struct pbase_tree_cache *VAR_3, *VAR_4;
 void *VAR_5;
 unsigned long VAR_6;
 enum object_type VAR_7;
 int VAR_8;
 int VAR_9 = FUNC_3(VAR_2);
 int VAR_10 = -1;





 for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
  VAR_3 = VAR_1[VAR_9];
  if (VAR_3 && FUNC_2(&VAR_3->oid, VAR_2)) {
   VAR_3->ref++;
   return VAR_3;
  }
  else if (((VAR_10 < 0) && (!VAR_3 || !VAR_3->ref)) ||
    ((0 <= VAR_10) &&
     (!VAR_3 && VAR_1[VAR_10])))
   VAR_10 = VAR_9;
  if (!VAR_3)
   break;
  VAR_9 = FUNC_4(VAR_9);
 }




 VAR_5 = FUNC_5(VAR_2, &VAR_7, &VAR_6);
 if (!VAR_5)
  return ((void*)0);
 if (VAR_7 != VAR_0) {
  FUNC_0(VAR_5);
  return ((void*)0);
 }



 if (VAR_10 < 0)
  VAR_3 = ((void*)0);
 else {
  VAR_3 = VAR_1[VAR_10];
  VAR_9 = VAR_10;
 }

 if (!VAR_3) {
  VAR_4 = FUNC_6(sizeof(*VAR_4));
  VAR_4->temporary = (VAR_10 < 0);
 }
 else {

  FUNC_0(VAR_3->tree_data);
  VAR_4 = VAR_3;
 }
 FUNC_1(&VAR_4->oid, VAR_2);
 VAR_4->tree_data = VAR_5;
 VAR_4->tree_size = VAR_6;
 VAR_4->ref = 1;
 if (!VAR_4->temporary)
  VAR_1[VAR_9] = VAR_4;
 return VAR_4;
}
