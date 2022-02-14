
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {int old_oid; struct ref* next; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (struct object_id*,int *) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, struct object_id *VAR_1)
{
 struct ref **VAR_2 = VAR_0;
 struct ref *VAR_3 = *VAR_2;

 if (!VAR_3)
  return -1;
 *VAR_2 = VAR_3->next;
 FUNC_0(VAR_1, &VAR_3->old_oid);
 return 0;
}
