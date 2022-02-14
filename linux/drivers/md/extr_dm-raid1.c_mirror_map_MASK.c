
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mirror_set {int rh; } ;
struct mirror {int dummy; } ;
struct dm_target {struct mirror_set* private; } ;
struct TYPE_6__ {int * bi_disk; } ;
struct dm_raid1_bio_record {struct mirror* m; TYPE_3__ details; int write_region; } ;
struct dm_dirty_log {TYPE_1__* type; } ;
struct TYPE_5__ {int bi_sector; } ;
struct bio {int bi_opf; TYPE_2__ bi_iter; } ;
struct TYPE_4__ {int (* in_sync ) (struct dm_dirty_log*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bio*) ;
 struct mirror* FUNC_1 (struct mirror_set*,int ) ;
 int FUNC_2 (TYPE_3__*,struct bio*) ;
 struct dm_raid1_bio_record* FUNC_3 (struct bio*,int) ;
 int FUNC_4 (int ,struct bio*) ;
 struct dm_dirty_log* FUNC_5 (int ) ;
 int FUNC_6 (struct mirror*,struct bio*) ;
 int FUNC_7 (struct mirror_set*,struct bio*,int) ;
 int FUNC_8 (struct dm_dirty_log*,int ,int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct dm_target *VAR_6, struct bio *VAR_7)
{
 int VAR_8, VAR_9 = FUNC_0(VAR_7);
 struct mirror *VAR_10;
 struct mirror_set *VAR_11 = VAR_6->private;
 struct dm_dirty_log *VAR_12 = FUNC_5(VAR_11->rh);
 struct dm_raid1_bio_record *VAR_13 =
   FUNC_3(VAR_7, sizeof(struct dm_raid1_bio_record));

 VAR_13->details.bi_disk = ((void*)0);

 if (VAR_9 == VAR_5) {

  VAR_13->write_region = FUNC_4(VAR_11->rh, VAR_7);
  FUNC_7(VAR_11, VAR_7, VAR_9);
  return VAR_2;
 }

 VAR_8 = VAR_12->type->in_sync(VAR_12, FUNC_4(VAR_11->rh, VAR_7), 0);
 if (VAR_8 < 0 && VAR_8 != -VAR_3)
  return VAR_0;




 if (!VAR_8 || (VAR_8 == -VAR_3)) {
  if (VAR_7->bi_opf & VAR_4)
   return VAR_0;

  FUNC_7(VAR_11, VAR_7, VAR_9);
  return VAR_2;
 }





 VAR_10 = FUNC_1(VAR_11, VAR_7->bi_iter.bi_sector);
 if (FUNC_9(!VAR_10))
  return VAR_0;

 FUNC_2(&VAR_13->details, VAR_7);
 VAR_13->m = VAR_10;

 FUNC_6(VAR_10, VAR_7);

 return VAR_1;
}
