
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct transport {TYPE_2__* vtable; } ;
struct ref {struct ref* next; int old_oid; TYPE_1__* peer_ref; } ;
struct TYPE_4__ {int (* fetch ) (struct transport*,int,struct ref**) ;} ;
struct TYPE_3__ {int old_oid; } ;


 int FUNC_0 (struct ref**,int) ;
 int FUNC_1 (struct ref**,int,int) ;
 int FUNC_2 (struct ref**) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (struct transport*,int,struct ref**) ;

int FUNC_6(struct transport *VAR_0, struct ref *VAR_1)
{
 int VAR_2;
 int VAR_3 = 0, VAR_4 = 0, VAR_5 = 0;
 struct ref **VAR_6 = ((void*)0);
 struct ref *VAR_7;

 for (VAR_7 = VAR_1; VAR_7; VAR_7 = VAR_7->next) {
  VAR_5++;
  if (VAR_7->peer_ref &&
      !FUNC_3(&VAR_7->old_oid) &&
      FUNC_4(&VAR_7->peer_ref->old_oid, &VAR_7->old_oid))
   continue;
  FUNC_1(VAR_6, VAR_3 + 1, VAR_4);
  VAR_6[VAR_3++] = VAR_7;
 }

 if (!VAR_3) {







  FUNC_0(VAR_6, VAR_5);
  for (VAR_7 = VAR_1; VAR_7; VAR_7 = VAR_7->next)
   VAR_6[VAR_3++] = VAR_7;
 }

 VAR_2 = VAR_0->vtable->fetch(VAR_0, VAR_3, VAR_6);

 FUNC_2(VAR_6);
 return VAR_2;
}
