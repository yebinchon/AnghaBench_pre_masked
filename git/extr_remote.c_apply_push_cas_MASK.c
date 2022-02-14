
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote {int dummy; } ;
struct ref {struct ref* next; } ;
struct push_cas_option {int dummy; } ;


 int FUNC_0 (struct push_cas_option*,struct remote*,struct ref*) ;

void FUNC_1(struct push_cas_option *VAR_0,
      struct remote *VAR_1,
      struct ref *VAR_2)
{
 struct ref *VAR_3;
 for (VAR_3 = VAR_2; VAR_3; VAR_3 = VAR_3->next)
  FUNC_0(VAR_0, VAR_1, VAR_3);
}
