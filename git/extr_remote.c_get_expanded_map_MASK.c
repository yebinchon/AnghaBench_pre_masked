
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct refspec_item {scalar_t__ force; int dst; int src; } ;
struct ref {struct ref* next; TYPE_1__* peer_ref; int name; } ;
struct TYPE_2__ {int force; } ;


 TYPE_1__* FUNC_0 (char*) ;
 struct ref* FUNC_1 (struct ref const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int ,int ,char**) ;
 scalar_t__ FUNC_5 (int ,char) ;

__attribute__((used)) static struct ref *FUNC_6(const struct ref *VAR_0,
        const struct refspec_item *VAR_1)
{
 const struct ref *VAR_2;
 struct ref *VAR_3 = ((void*)0);
 struct ref **VAR_4 = &VAR_3;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next) {
  char *VAR_5 = ((void*)0);

  if (FUNC_5(VAR_2->name, '^'))
   continue;
  if (FUNC_4(VAR_1->src, VAR_2->name,
         VAR_1->dst, &VAR_5) &&
      !FUNC_3(VAR_5)) {
   struct ref *VAR_6 = FUNC_1(VAR_2);

   VAR_6->peer_ref = FUNC_0(VAR_5);
   if (VAR_1->force)
    VAR_6->peer_ref->force = 1;
   *VAR_4 = VAR_6;
   VAR_4 = &VAR_6->next;
  }
  FUNC_2(VAR_5);
 }

 return VAR_3;
}
