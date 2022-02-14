
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ref {TYPE_1__* peer_ref; struct ref* next; } ;
struct branch {int refname; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*) ;
 struct branch* FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ref *VAR_0)
{
 struct branch *VAR_1 = FUNC_1(((void*)0));

 if (FUNC_3() || !VAR_1)
  return;

 for (; VAR_0; VAR_0 = VAR_0->next)
  if (VAR_0->peer_ref && !FUNC_4(VAR_1->refname,
     VAR_0->peer_ref->name))
   FUNC_2(FUNC_0("Refusing to fetch into current branch %s "
       "of non-bare repository"), VAR_1->refname);
}
