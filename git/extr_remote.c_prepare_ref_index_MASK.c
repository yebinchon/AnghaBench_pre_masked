
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int dummy; } ;
struct ref {int name; struct ref* next; } ;
struct TYPE_2__ {struct ref* util; } ;


 TYPE_1__* FUNC_0 (struct string_list*,int ) ;
 int FUNC_1 (struct string_list*) ;

__attribute__((used)) static void FUNC_2(struct string_list *VAR_0, struct ref *VAR_1)
{
 for ( ; VAR_1; VAR_1 = VAR_1->next)
  FUNC_0(VAR_0, VAR_1->name)->util = VAR_1;

 FUNC_1(VAR_0);
}
