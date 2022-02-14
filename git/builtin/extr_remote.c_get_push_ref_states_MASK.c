
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct string_list_item {struct push_info* util; } ;
struct remote {int push; scalar_t__ mirror; } ;
struct TYPE_4__ {int strdup_strings; } ;
struct ref_states {TYPE_2__ push; struct remote* remote; } ;
struct ref {int old_oid; int new_oid; int name; int force; TYPE_1__* peer_ref; struct ref* next; } ;
struct push_info {int status; int dest; int forced; } ;
struct TYPE_3__ {int name; int new_oid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 struct ref* FUNC_1 (struct ref const*) ;
 int FUNC_2 (struct ref*) ;
 struct ref* FUNC_3 () ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct ref*,struct ref**,int *,int ) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 struct string_list_item* FUNC_10 (TYPE_2__*,int ) ;
 struct push_info* FUNC_11 (int,int) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(const struct ref *VAR_6,
 struct ref_states *VAR_7)
{
 struct remote *VAR_8 = VAR_7->remote;
 struct ref *VAR_9, *VAR_10, *VAR_11;
 if (VAR_8->mirror)
  return 0;

 VAR_10 = FUNC_3();
 VAR_11 = FUNC_1(VAR_6);

 FUNC_6(VAR_10, &VAR_11, &VAR_8->push, VAR_0);

 VAR_7->push.strdup_strings = 1;
 for (VAR_9 = VAR_11; VAR_9; VAR_9 = VAR_9->next) {
  struct string_list_item *VAR_12;
  struct push_info *VAR_13;

  if (!VAR_9->peer_ref)
   continue;
  FUNC_7(&VAR_9->new_oid, &VAR_9->peer_ref->new_oid);

  VAR_12 = FUNC_10(&VAR_7->push,
       FUNC_0(VAR_9->peer_ref->name));
  VAR_12->util = FUNC_11(1, sizeof(struct push_info));
  VAR_13 = VAR_12->util;
  VAR_13->forced = VAR_9->force;
  VAR_13->dest = FUNC_12(FUNC_0(VAR_9->name));

  if (FUNC_5(&VAR_9->new_oid)) {
   VAR_13->status = VAR_2;
  } else if (FUNC_8(&VAR_9->old_oid, &VAR_9->new_oid))
   VAR_13->status = VAR_5;
  else if (FUNC_5(&VAR_9->old_oid))
   VAR_13->status = VAR_1;
  else if (FUNC_4(&VAR_9->old_oid) &&
    FUNC_9(&VAR_9->new_oid, &VAR_9->old_oid))
   VAR_13->status = VAR_3;
  else
   VAR_13->status = VAR_4;
 }
 FUNC_2(VAR_10);
 FUNC_2(VAR_11);
 return 0;
}
