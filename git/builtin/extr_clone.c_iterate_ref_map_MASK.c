
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {struct ref* next; int old_oid; int peer_ref; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (struct object_id*,int *) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, struct object_id *VAR_1)
{
 struct ref **VAR_2 = VAR_0;
 struct ref *VAR_3 = *VAR_2;





 while (VAR_3 && !VAR_3->peer_ref)
  VAR_3 = VAR_3->next;

 if (!VAR_3)
  return -1;

 FUNC_0(VAR_1, &VAR_3->old_oid);
 *VAR_2 = VAR_3->next;
 return 0;
}
