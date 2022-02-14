
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_snapshot {int merge_failed; int lock; int num_merging_chunks; TYPE_2__* store; } ;
struct bio {int dummy; } ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {scalar_t__ (* commit_merge ) (TYPE_2__*,int ) ;} ;


 int FUNC_0 (char*) ;
 struct bio* FUNC_1 (struct dm_snapshot*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct dm_snapshot*) ;
 scalar_t__ FUNC_5 (struct dm_snapshot*) ;
 int FUNC_6 (struct dm_snapshot*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(int VAR_0, unsigned long VAR_1, void *VAR_2)
{
 struct dm_snapshot *VAR_3 = VAR_2;
 struct bio *VAR_4 = ((void*)0);

 if (VAR_0 || VAR_1) {
  if (VAR_0)
   FUNC_0("Read error: shutting down merge.");
  else
   FUNC_0("Write error: shutting down merge.");
  goto shut;
 }

 if (VAR_3->store->type->commit_merge(VAR_3->store,
      VAR_3->num_merging_chunks) < 0) {
  FUNC_0("Write error in exception store: shutting down merge");
  goto shut;
 }

 if (FUNC_5(VAR_3) < 0)
  goto shut;

 FUNC_6(VAR_3);

 return;

shut:
 FUNC_2(&VAR_3->lock);
 VAR_3->merge_failed = 1;
 VAR_4 = FUNC_1(VAR_3);
 FUNC_8(&VAR_3->lock);
 FUNC_3(VAR_4);

 FUNC_4(VAR_3);
}
