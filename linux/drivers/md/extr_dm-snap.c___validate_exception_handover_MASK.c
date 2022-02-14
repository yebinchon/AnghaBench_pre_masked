
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dm_snapshot {TYPE_3__* ti; TYPE_2__* store; } ;
struct TYPE_6__ {char* error; } ;
struct TYPE_5__ {TYPE_1__* type; } ;
struct TYPE_4__ {int commit_merge; int prepare_merge; } ;


 int VAR_0 ;
 int FUNC_0 (struct dm_snapshot*,struct dm_snapshot**,struct dm_snapshot**,struct dm_snapshot**) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(struct dm_snapshot *VAR_1)
{
 struct dm_snapshot *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
 struct dm_snapshot *VAR_4 = ((void*)0);


 if ((FUNC_0(VAR_1, &VAR_2, &VAR_3,
       &VAR_4) == 2) ||
     VAR_3) {
  VAR_1->ti->error = "Snapshot cow pairing for exception "
      "table handover failed";
  return -VAR_0;
 }





 if (!VAR_2)
  return 0;




 if (!FUNC_1(VAR_1->ti))
  return 1;




 if (VAR_4) {
  VAR_1->ti->error = "A snapshot is already merging.";
  return -VAR_0;
 }

 if (!VAR_2->store->type->prepare_merge ||
     !VAR_2->store->type->commit_merge) {
  VAR_1->ti->error = "Snapshot exception store does not "
      "support snapshot-merge.";
  return -VAR_0;
 }

 return 1;
}
