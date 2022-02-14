
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {int old_oid; struct ref* next; } ;
struct oidset {int dummy; } ;


 int FUNC_0 (struct oidset*,int *) ;

__attribute__((used)) static void FUNC_1(struct oidset *VAR_0, struct ref *VAR_1)
{
 for (; VAR_1; VAR_1 = VAR_1->next)
  FUNC_0(VAR_0, &VAR_1->old_oid);
}
