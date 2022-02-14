
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {scalar_t__ status; int old_oid; struct ref* next; } ;
struct object_id {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct object_id*,int *) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, struct object_id *VAR_2)
{
 struct ref **VAR_3 = VAR_1;
 struct ref *VAR_4 = *VAR_3;

 while (VAR_4 && VAR_4->status == VAR_0)
  VAR_4 = VAR_4->next;
 if (!VAR_4)
  return -1;
 *VAR_3 = VAR_4->next;
 FUNC_0(VAR_2, &VAR_4->old_oid);
 return 0;
}
