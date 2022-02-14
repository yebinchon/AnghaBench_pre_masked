
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {struct ref* next; int old_oid; } ;
struct oidset {int dummy; } ;


 int FUNC_0 (struct oidset*,int *) ;

__attribute__((used)) static void FUNC_1(struct ref **VAR_0, struct oidset *VAR_1)
{
 struct ref *VAR_2 = *VAR_0;
 while (VAR_2) {
  FUNC_0(VAR_1, &VAR_2->old_oid);
  VAR_2 = VAR_2->next;
 }
}
