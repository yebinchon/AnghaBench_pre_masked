
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct merge_parents {int nr; struct merge_parent* item; } ;
struct merge_parent {int commit; int given; } ;


 int FUNC_0 (int *,struct object_id*) ;

__attribute__((used)) static struct merge_parent *FUNC_1(struct merge_parents *VAR_0,
           struct object_id *VAR_1,
           struct object_id *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0->nr; VAR_3++) {
  if (VAR_1 && !FUNC_0(&VAR_0->item[VAR_3].given, VAR_1))
   continue;
  if (VAR_2 && !FUNC_0(&VAR_0->item[VAR_3].commit, VAR_2))
   continue;
  return &VAR_0->item[VAR_3];
 }
 return ((void*)0);
}
