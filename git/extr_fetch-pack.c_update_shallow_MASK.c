
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shallow_info {int nr_ours; int nr_theirs; size_t* ours; size_t* theirs; TYPE_1__* shallow; struct oid_array* ref; } ;
struct object_id {int dummy; } ;
struct ref {int status; struct object_id old_oid; } ;
struct oid_array {scalar_t__ nr; } ;
struct fetch_pack_args {scalar_t__ update_shallow; scalar_t__ cloning; scalar_t__ deepen; } ;
struct TYPE_2__ {int nr; struct object_id* oid; } ;


 struct oid_array VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (struct shallow_info*,int *,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct object_id*) ;
 int FUNC_5 (struct oid_array*,struct object_id*) ;
 int FUNC_6 (struct oid_array*) ;
 int FUNC_7 (struct shallow_info*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char**,struct oid_array*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int ) ;
 int* FUNC_11 (int,int) ;

__attribute__((used)) static void FUNC_12(struct fetch_pack_args *VAR_5,
      struct ref **VAR_6, int VAR_7,
      struct shallow_info *VAR_8)
{
 struct oid_array VAR_9 = VAR_0;
 int *VAR_10;
 int VAR_11;

 if (VAR_5->deepen && VAR_2) {
  if (*VAR_2 == '\0') {
   FUNC_10(FUNC_3(VAR_4));
   FUNC_8(&VAR_3);
  } else
   FUNC_1(&VAR_3);
  VAR_2 = ((void*)0);
  return;
 }

 if (!VAR_8->shallow || !VAR_8->shallow->nr)
  return;

 if (VAR_5->cloning) {






  struct oid_array VAR_12 = VAR_0;
  struct object_id *VAR_13 = VAR_8->shallow->oid;
  for (VAR_11 = 0; VAR_11 < VAR_8->shallow->nr; VAR_11++)
   if (FUNC_4(&VAR_13[VAR_11]))
    FUNC_5(&VAR_12, &VAR_13[VAR_11]);
  if (VAR_12.nr) {
   FUNC_9(&VAR_3,
      &VAR_2,
      &VAR_12);
   FUNC_1(&VAR_3);
   VAR_2 = ((void*)0);
  }
  FUNC_6(&VAR_12);
  return;
 }

 if (!VAR_8->nr_ours && !VAR_8->nr_theirs)
  return;

 FUNC_7(VAR_8);
 if (!VAR_8->nr_ours && !VAR_8->nr_theirs)
  return;
 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
  FUNC_5(&VAR_9, &VAR_6[VAR_11]->old_oid);
 VAR_8->ref = &VAR_9;

 if (VAR_5->update_shallow) {






  struct oid_array VAR_14 = VAR_0;
  struct object_id *VAR_15 = VAR_8->shallow->oid;
  FUNC_0(VAR_8, ((void*)0), ((void*)0));
  if (!VAR_8->nr_ours && !VAR_8->nr_theirs) {
   FUNC_6(&VAR_9);
   return;
  }
  for (VAR_11 = 0; VAR_11 < VAR_8->nr_ours; VAR_11++)
   FUNC_5(&VAR_14, &VAR_15[VAR_8->ours[VAR_11]]);
  for (VAR_11 = 0; VAR_11 < VAR_8->nr_theirs; VAR_11++)
   FUNC_5(&VAR_14, &VAR_15[VAR_8->theirs[VAR_11]]);
  FUNC_9(&VAR_3,
     &VAR_2,
     &VAR_14);
  FUNC_1(&VAR_3);
  FUNC_6(&VAR_14);
  FUNC_6(&VAR_9);
  VAR_2 = ((void*)0);
  return;
 }





 VAR_10 = FUNC_11(VAR_7, sizeof(*VAR_10));
 FUNC_0(VAR_8, ((void*)0), VAR_10);
 if (VAR_8->nr_ours || VAR_8->nr_theirs) {
  for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
   if (VAR_10[VAR_11])
    VAR_6[VAR_11]->status = VAR_1;
 }
 FUNC_2(VAR_10);
 FUNC_6(&VAR_9);
}
