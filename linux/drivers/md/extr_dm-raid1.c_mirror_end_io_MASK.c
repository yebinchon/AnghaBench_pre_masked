
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mirror_set {int rh; } ;
struct mirror {TYPE_1__* dev; } ;
struct dm_target {scalar_t__ private; } ;
struct dm_bio_details {int * bi_disk; } ;
struct dm_raid1_bio_record {struct dm_bio_details details; struct mirror* m; int write_region; } ;
struct bio {int bi_opf; scalar_t__ bi_status; } ;
typedef scalar_t__ blk_status_t ;
struct TYPE_2__ {int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct bio*) ;
 scalar_t__ FUNC_3 (struct bio*) ;
 scalar_t__ FUNC_4 (struct mirror*) ;
 int FUNC_5 (struct dm_bio_details*,struct bio*) ;
 struct dm_raid1_bio_record* FUNC_6 (struct bio*,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct mirror*,int ) ;
 scalar_t__ FUNC_9 (struct mirror_set*,struct bio*) ;
 int FUNC_10 (struct mirror_set*,struct bio*,int) ;
 scalar_t__ FUNC_11 (scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct dm_target *VAR_8, struct bio *VAR_9,
  blk_status_t *VAR_10)
{
 int VAR_11 = FUNC_2(VAR_9);
 struct mirror_set *VAR_12 = (struct mirror_set *) VAR_8->private;
 struct mirror *VAR_13 = ((void*)0);
 struct dm_bio_details *VAR_14 = ((void*)0);
 struct dm_raid1_bio_record *VAR_15 =
   FUNC_6(VAR_9, sizeof(struct dm_raid1_bio_record));




 if (VAR_11 == VAR_7) {
  if (!(VAR_9->bi_opf & VAR_5) &&
      FUNC_3(VAR_9) != VAR_4)
   FUNC_7(VAR_12->rh, VAR_15->write_region);
  return VAR_1;
 }

 if (*VAR_10 == VAR_0)
  goto out;

 if (VAR_9->bi_opf & VAR_6)
  goto out;

 if (FUNC_11(*VAR_10)) {
  if (!VAR_15->details.bi_disk) {





   FUNC_1("Mirror read failed.");
   return VAR_1;
  }

  VAR_13 = VAR_15->m;

  FUNC_0("Mirror read failed from %s. Trying alternative device.",
        VAR_13->dev->name);

  FUNC_8(VAR_13, VAR_3);





  if (FUNC_4(VAR_13) || FUNC_9(VAR_12, VAR_9)) {
   VAR_14 = &VAR_15->details;

   FUNC_5(VAR_14, VAR_9);
   VAR_15->details.bi_disk = ((void*)0);
   VAR_9->bi_status = 0;

   FUNC_10(VAR_12, VAR_9, VAR_11);
   return VAR_2;
  }
  FUNC_0("All replicated volumes dead, failing I/O");
 }

out:
 VAR_15->details.bi_disk = ((void*)0);

 return VAR_1;
}
