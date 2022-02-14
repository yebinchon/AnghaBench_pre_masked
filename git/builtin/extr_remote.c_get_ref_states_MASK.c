
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct string_list_item {int util; } ;
struct TYPE_8__ {int strdup_strings; } ;
struct ref_states {TYPE_3__ stale; TYPE_3__ tracked; TYPE_3__ new_refs; TYPE_2__* remote; } ;
struct ref {int name; struct ref* next; TYPE_1__* peer_ref; } ;
struct TYPE_9__ {int nr; int * raw; int * items; } ;
struct TYPE_7__ {TYPE_5__ fetch; } ;
struct TYPE_6__ {int name; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ref*) ;
 scalar_t__ FUNC_4 (struct ref const*,int *,struct ref***,int) ;
 struct ref* FUNC_5 (TYPE_5__*,struct ref*) ;
 int FUNC_6 (int ) ;
 struct string_list_item* FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(const struct ref *VAR_0, struct ref_states *VAR_1)
{
 struct ref *VAR_2 = ((void*)0), **VAR_3 = &VAR_2;
 struct ref *VAR_4, *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1->remote->fetch.nr; VAR_6++)
  if (FUNC_4(VAR_0, &VAR_1->remote->fetch.items[VAR_6], &VAR_3, 1))
   FUNC_2(FUNC_0("Could not get fetch map for refspec %s"),
    VAR_1->remote->fetch.raw[VAR_6]);

 VAR_1->new_refs.strdup_strings = 1;
 VAR_1->tracked.strdup_strings = 1;
 VAR_1->stale.strdup_strings = 1;
 for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next) {
  if (!VAR_4->peer_ref || !FUNC_6(VAR_4->peer_ref->name))
   FUNC_7(&VAR_1->new_refs, FUNC_1(VAR_4->name));
  else
   FUNC_7(&VAR_1->tracked, FUNC_1(VAR_4->name));
 }
 VAR_5 = FUNC_5(&VAR_1->remote->fetch, VAR_2);
 for (VAR_4 = VAR_5; VAR_4; VAR_4 = VAR_4->next) {
  struct string_list_item *VAR_7 =
   FUNC_7(&VAR_1->stale, FUNC_1(VAR_4->name));
  VAR_7->util = FUNC_9(VAR_4->name);
 }
 FUNC_3(VAR_5);
 FUNC_3(VAR_2);

 FUNC_8(&VAR_1->new_refs);
 FUNC_8(&VAR_1->tracked);
 FUNC_8(&VAR_1->stale);

 return 0;
}
