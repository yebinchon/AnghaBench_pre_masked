
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {struct ref* next; } ;


 struct ref* FUNC_0 (struct ref const*) ;

struct ref *FUNC_1(const struct ref *VAR_0)
{
 struct ref *VAR_1 = ((void*)0);
 struct ref **VAR_2 = &VAR_1;
 while (VAR_0) {
  *VAR_2 = FUNC_0(VAR_0);
  VAR_0 = VAR_0->next;
  VAR_2 = &((*VAR_2)->next);
 }
 return VAR_1;
}
