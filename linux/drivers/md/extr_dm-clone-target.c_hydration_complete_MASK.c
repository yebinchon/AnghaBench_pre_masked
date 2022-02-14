
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_clone_region_hydration {scalar_t__ status; int deferred_bios; scalar_t__ overwrite_bio; struct clone* clone; } ;
struct clone {int hydrations_in_flight; } ;
typedef scalar_t__ blk_status_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct clone*,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (struct dm_clone_region_hydration*) ;
 int FUNC_5 (struct dm_clone_region_hydration*) ;
 int FUNC_6 (struct clone*,int *) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct clone*) ;

__attribute__((used)) static void FUNC_9(struct dm_clone_region_hydration *VAR_2)
{
 int VAR_3;
 blk_status_t VAR_4;
 struct clone *VAR_5 = VAR_2->clone;

 VAR_3 = FUNC_5(VAR_2);

 if (VAR_2->status == VAR_1 && FUNC_7(!VAR_3)) {
  if (VAR_2->overwrite_bio)
   FUNC_2(VAR_5, VAR_2->overwrite_bio);

  FUNC_6(VAR_5, &VAR_2->deferred_bios);
 } else {
  VAR_4 = VAR_3 ? VAR_0 : VAR_2->status;

  if (VAR_2->overwrite_bio)
   FUNC_1(&VAR_2->deferred_bios, VAR_2->overwrite_bio);

  FUNC_3(&VAR_2->deferred_bios, VAR_4);
 }

 FUNC_4(VAR_2);

 if (FUNC_0(&VAR_5->hydrations_in_flight))
  FUNC_8(VAR_5);
}
