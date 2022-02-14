
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {struct ref* next; } ;



__attribute__((used)) static void FUNC_0(struct ref *VAR_0, struct ref ***VAR_1)
{
 **VAR_1 = VAR_0;
 while (VAR_0->next)
  VAR_0 = VAR_0->next;
 *VAR_1 = &VAR_0->next;
}
