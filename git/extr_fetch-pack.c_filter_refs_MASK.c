
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {void* match_status; struct ref* next; int old_oid; int name; } ;
struct oidset {int dummy; } ;
struct fetch_pack_args {int deepen; scalar_t__ fetch_all; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct oidset VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (struct oidset*,struct ref*) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct ref* FUNC_2 (struct ref*) ;
 int FUNC_3 (struct ref*) ;
 int FUNC_4 (struct ref*) ;
 int FUNC_5 (struct ref*) ;
 int FUNC_6 (struct oidset*) ;
 scalar_t__ FUNC_7 (struct oidset*,int *) ;
 scalar_t__ FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(struct fetch_pack_args *VAR_6,
   struct ref **VAR_7,
   struct ref **VAR_8, int VAR_9)
{
 struct ref *VAR_10 = ((void*)0);
 struct ref **VAR_11 = &VAR_10;
 struct ref *VAR_12 = ((void*)0);
 struct ref *VAR_13, *VAR_14;
 struct oidset VAR_15 = VAR_2;
 int VAR_16;
 int VAR_17 = !(VAR_5 &
         (VAR_1 | VAR_0));

 VAR_16 = 0;
 for (VAR_13 = *VAR_7; VAR_13; VAR_13 = VAR_14) {
  int VAR_18 = 0;
  VAR_14 = VAR_13->next;

  if (FUNC_8(VAR_13->name, "refs/") &&
      FUNC_1(VAR_13->name, 0)) {




   FUNC_3(VAR_13);
   continue;
  } else {
   while (VAR_16 < VAR_9) {
    int VAR_19 = FUNC_9(VAR_13->name, VAR_8[VAR_16]->name);
    if (VAR_19 < 0)
     break;
    else if (VAR_19 == 0) {
     VAR_18 = 1;
     VAR_8[VAR_16]->match_status = VAR_3;
    }
    VAR_16++;
   }

   if (!VAR_18 && VAR_6->fetch_all &&
       (!VAR_6->deepen || !FUNC_8(VAR_13->name, "refs/tags/")))
    VAR_18 = 1;
  }

  if (VAR_18) {
   *VAR_11 = VAR_13;
   VAR_13->next = ((void*)0);
   VAR_11 = &VAR_13->next;
  } else {
   VAR_13->next = VAR_12;
   VAR_12 = VAR_13;
  }
 }

 if (VAR_17) {
  for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++) {
   VAR_13 = VAR_8[VAR_16];
   if (!FUNC_5(VAR_13))
    continue;

   FUNC_0(&VAR_15, VAR_12);
   FUNC_0(&VAR_15, VAR_10);
   break;
  }
 }


 for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++) {
  VAR_13 = VAR_8[VAR_16];
  if (!FUNC_5(VAR_13))
   continue;

  if (!VAR_17 || FUNC_7(&VAR_15, &VAR_13->old_oid)) {
   VAR_13->match_status = VAR_3;
   *VAR_11 = FUNC_2(VAR_13);
   VAR_11 = &(*VAR_11)->next;
  } else {
   VAR_13->match_status = VAR_4;
  }
 }

 FUNC_6(&VAR_15);
 FUNC_4(VAR_12);

 *VAR_7 = VAR_10;
}
