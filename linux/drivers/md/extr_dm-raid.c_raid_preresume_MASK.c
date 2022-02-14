
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ chunksize; } ;
struct mddev {scalar_t__ recovery_cp; scalar_t__ resync_min; int recovery; int dev_sectors; scalar_t__ bitmap; TYPE_1__ bitmap_info; } ;
struct raid_set {int runtime_flags; int requested_bitmap_chunk_sectors; struct mddev md; } ;
struct dm_target {struct raid_set* private; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct raid_set*) ;
 int FUNC_3 (scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_4 (struct mddev*) ;
 int FUNC_5 (struct mddev*) ;
 int FUNC_6 (struct raid_set*) ;
 int FUNC_7 (struct raid_set*) ;
 int FUNC_8 (struct raid_set*) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct dm_target *VAR_7)
{
 int VAR_8;
 struct raid_set *VAR_9 = VAR_7->private;
 struct mddev *VAR_10 = &VAR_9->md;


 if (FUNC_10(VAR_5, &VAR_9->runtime_flags))
  return 0;







 if (FUNC_11(VAR_6, &VAR_9->runtime_flags))
  FUNC_8(VAR_9);


 VAR_8 = FUNC_2(VAR_9);
 if (VAR_8)
  return VAR_8;


 if (FUNC_11(VAR_4, &VAR_9->runtime_flags) && VAR_10->bitmap &&
     VAR_10->bitmap_info.chunksize != FUNC_12(VAR_9->requested_bitmap_chunk_sectors)) {
  VAR_8 = FUNC_3(VAR_10->bitmap, VAR_10->dev_sectors,
         FUNC_12(VAR_9->requested_bitmap_chunk_sectors), 0);
  if (VAR_8)
   FUNC_0("Failed to resize bitmap");
 }



 FUNC_9(VAR_0, &VAR_10->recovery);
 if (VAR_10->recovery_cp && VAR_10->recovery_cp < VAR_2) {
  FUNC_9(VAR_1, &VAR_10->recovery);
  VAR_10->resync_min = VAR_10->recovery_cp;
 }


 if (FUNC_11(VAR_3, &VAR_9->runtime_flags)) {

  FUNC_6(VAR_9);
  FUNC_4(VAR_10);
  VAR_8 = FUNC_7(VAR_9);
  FUNC_5(VAR_10);
  if (VAR_8)
   FUNC_1("Failed to check/start reshape, continuing without change");
  VAR_8 = 0;
 }

 return VAR_8;
}
