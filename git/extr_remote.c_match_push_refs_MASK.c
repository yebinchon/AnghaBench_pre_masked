
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list_item {struct ref* util; } ;
struct string_list {int nr; } ;
struct refspec_item {int force; scalar_t__ matching; } ;
struct refspec {int nr; } ;
struct ref {scalar_t__ peer_ref; struct ref* next; int force; int name; int new_oid; } ;
struct TYPE_2__ {struct ref* util; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct string_list VAR_6 ;
 int FUNC_0 (struct ref*,struct ref**,struct ref***) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct ref*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (struct refspec*,struct ref*,int,int ,struct refspec_item const**) ;
 struct ref* FUNC_5 (char*,struct ref***) ;
 int FUNC_6 (struct ref*,struct ref*,struct ref***,struct refspec*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct string_list*,struct ref*) ;
 int FUNC_9 (struct refspec*,char*) ;
 int FUNC_10 (struct string_list*,int ) ;
 int FUNC_11 (struct string_list*,char*) ;
 TYPE_1__* FUNC_12 (struct string_list*,int ) ;
 struct string_list_item* FUNC_13 (struct string_list*,char*) ;
 struct ref** FUNC_14 (struct ref**) ;

int FUNC_15(struct ref *VAR_7, struct ref **VAR_8,
      struct refspec *VAR_9, int VAR_10)
{
 int VAR_11 = VAR_10 & VAR_2;
 int VAR_12 = VAR_10 & VAR_4;
 int VAR_13 = VAR_10 & VAR_5;
 int VAR_14;
 struct ref *VAR_15, **VAR_16 = FUNC_14(VAR_8);
 struct string_list VAR_17 = VAR_6;


 if (!VAR_9->nr)
  FUNC_9(VAR_9, ":");

 VAR_14 = FUNC_6(VAR_7, *VAR_8, &VAR_16, VAR_9);


 for (VAR_15 = VAR_7; VAR_15; VAR_15 = VAR_15->next) {
  struct string_list_item *VAR_18;
  struct ref *VAR_19;
  const struct refspec_item *VAR_20 = ((void*)0);
  char *VAR_21;

  VAR_21 = FUNC_4(VAR_9, VAR_15, VAR_12, VAR_1, &VAR_20);
  if (!VAR_21)
   continue;

  if (!VAR_17.nr)
   FUNC_8(&VAR_17, *VAR_8);

  VAR_18 = FUNC_13(&VAR_17, VAR_21);
  VAR_19 = VAR_18 ? VAR_18->util : ((void*)0);
  if (VAR_19) {
   if (VAR_19->peer_ref)

    goto free_name;
  } else {
   if (VAR_20->matching && !(VAR_11 || VAR_12))





    goto free_name;


   VAR_19 = FUNC_5(VAR_21, &VAR_16);
   FUNC_7(&VAR_19->new_oid, &VAR_15->new_oid);
   FUNC_12(&VAR_17,
    VAR_19->name)->util = VAR_19;
  }
  VAR_19->peer_ref = FUNC_2(VAR_15);
  VAR_19->force = VAR_20->force;
 free_name:
  FUNC_3(VAR_21);
 }

 FUNC_10(&VAR_17, 0);

 if (VAR_10 & VAR_3)
  FUNC_0(VAR_7, VAR_8, &VAR_16);

 if (VAR_13) {
  struct string_list VAR_22 = VAR_6;

  for (VAR_15 = *VAR_8; VAR_15; VAR_15 = VAR_15->next) {
   char *VAR_23;

   if (VAR_15->peer_ref)

    continue;

   VAR_23 = FUNC_4(VAR_9, VAR_15, VAR_12, VAR_0, ((void*)0));
   if (VAR_23) {
    if (!VAR_22.nr)
     FUNC_8(&VAR_22, VAR_7);
    if (!FUNC_11(&VAR_22,
         VAR_23))
     VAR_15->peer_ref = FUNC_1();
    FUNC_3(VAR_23);
   }
  }
  FUNC_10(&VAR_22, 0);
 }

 if (VAR_14)
  return -1;
 return 0;
}
