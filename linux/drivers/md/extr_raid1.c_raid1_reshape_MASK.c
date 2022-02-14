
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raid1_info {int raid_disks; struct md_rdev* rdev; struct mddev* mddev; } ;
struct r1conf {int raid_disks; int device_lock; struct raid1_info* poolinfo; struct raid1_info* mirrors; int r1bio_pool; } ;
struct pool_info {int raid_disks; struct md_rdev* rdev; struct mddev* mddev; } ;
struct mddev {scalar_t__ chunk_sectors; scalar_t__ new_chunk_sectors; scalar_t__ layout; scalar_t__ new_layout; scalar_t__ level; scalar_t__ new_level; int raid_disks; int delta_disks; int degraded; int thread; int recovery; struct r1conf* private; } ;
struct md_rdev {int raid_disk; } ;
typedef int oldpool ;
typedef int newpool ;
typedef int mempool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct r1conf*,int ) ;
 int FUNC_2 (struct raid1_info*) ;
 struct raid1_info* FUNC_3 (int,int ) ;
 struct raid1_info* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct mddev*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mddev*) ;
 int FUNC_8 (struct mddev*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ,int ,struct raid1_info*) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (char*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 scalar_t__ FUNC_16 (struct mddev*,struct md_rdev*) ;
 int FUNC_17 (struct mddev*,struct md_rdev*) ;
 int FUNC_18 (struct r1conf*) ;

__attribute__((used)) static int FUNC_19(struct mddev *VAR_9)
{
 mempool_t VAR_10, VAR_11;
 struct pool_info *VAR_12;
 struct raid1_info *VAR_13;
 struct r1conf *VAR_14 = VAR_9->private;
 int VAR_15, VAR_16;
 unsigned long VAR_17;
 int VAR_18, VAR_19;
 int VAR_20;

 FUNC_11(&VAR_10, 0, sizeof(VAR_10));
 FUNC_11(&VAR_11, 0, sizeof(VAR_11));


 if (VAR_9->chunk_sectors != VAR_9->new_chunk_sectors ||
     VAR_9->layout != VAR_9->new_layout ||
     VAR_9->level != VAR_9->new_level) {
  VAR_9->new_chunk_sectors = VAR_9->chunk_sectors;
  VAR_9->new_layout = VAR_9->layout;
  VAR_9->new_level = VAR_9->level;
  return -VAR_1;
 }

 if (!FUNC_7(VAR_9))
  FUNC_5(VAR_9);

 VAR_16 = VAR_9->raid_disks + VAR_9->delta_disks;

 if (VAR_16 < VAR_14->raid_disks) {
  VAR_15=0;
  for (VAR_18= 0; VAR_18 < VAR_14->raid_disks; VAR_18++)
   if (VAR_14->mirrors[VAR_18].rdev)
    VAR_15++;
  if (VAR_15 > VAR_16)
   return -VAR_0;
 }

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;
 VAR_12->mddev = VAR_9;
 VAR_12->raid_disks = VAR_16 * 2;

 VAR_20 = FUNC_10(&VAR_10, VAR_6, VAR_7,
      VAR_8, VAR_12);
 if (VAR_20) {
  FUNC_2(VAR_12);
  return VAR_20;
 }
 VAR_13 = FUNC_4(FUNC_0(sizeof(struct raid1_info),
      VAR_16, 2),
        VAR_3);
 if (!VAR_13) {
  FUNC_2(VAR_12);
  FUNC_9(&VAR_10);
  return -VAR_2;
 }

 FUNC_1(VAR_14, 0);


 VAR_11 = VAR_14->r1bio_pool;
 VAR_14->r1bio_pool = VAR_10;

 for (VAR_18 = VAR_19 = 0; VAR_18 < VAR_14->raid_disks; VAR_18++) {
  struct md_rdev *VAR_21 = VAR_14->mirrors[VAR_18].rdev;
  if (VAR_21 && VAR_21->raid_disk != VAR_19) {
   FUNC_17(VAR_9, VAR_21);
   VAR_21->raid_disk = VAR_19;
   FUNC_17(VAR_9, VAR_21);
   if (FUNC_16(VAR_9, VAR_21))
    FUNC_12("md/raid1:%s: cannot register rd%d\n",
     FUNC_8(VAR_9), VAR_21->raid_disk);
  }
  if (VAR_21)
   VAR_13[VAR_19++].rdev = VAR_21;
 }
 FUNC_2(VAR_14->mirrors);
 VAR_14->mirrors = VAR_13;
 FUNC_2(VAR_14->poolinfo);
 VAR_14->poolinfo = VAR_12;

 FUNC_14(&VAR_14->device_lock, VAR_17);
 VAR_9->degraded += (VAR_16 - VAR_14->raid_disks);
 FUNC_15(&VAR_14->device_lock, VAR_17);
 VAR_14->raid_disks = VAR_9->raid_disks = VAR_16;
 VAR_9->delta_disks = 0;

 FUNC_18(VAR_14);

 FUNC_13(VAR_5, &VAR_9->recovery);
 FUNC_13(VAR_4, &VAR_9->recovery);
 FUNC_6(VAR_9->thread);

 FUNC_9(&VAR_11);
 return 0;
}
