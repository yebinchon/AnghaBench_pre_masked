
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raid10_info {int dummy; } ;
struct geom {int stride; int chunk_shift; scalar_t__ far_offset; } ;
struct r10conf {int copies; scalar_t__ reshape_progress; int dev_sectors; scalar_t__ reshape_safe; int bio_split; int tmppage; struct r10conf* mirrors; int r10bio_pool; struct mddev* mddev; int thread; int nr_pending; int wait_barrier; int resync_lock; int bio_end_io_list; int retry_list; int device_lock; struct geom prev; struct geom geo; } ;
struct mddev {int raid_disks; scalar_t__ reshape_position; int dev_sectors; int delta_disks; int new_layout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct r10conf* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (struct r10conf*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *) ;
 struct r10conf* FUNC_8 (scalar_t__,int,int ) ;
 int FUNC_9 (struct r10conf*) ;
 struct r10conf* FUNC_10 (int,int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,struct mddev*,char*) ;
 int FUNC_13 (struct mddev*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,int ,int ,struct r10conf*) ;
 int FUNC_16 (char*,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct geom*,struct mddev*,int ) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static struct r10conf *FUNC_20(struct mddev *VAR_12)
{
 struct r10conf *VAR_13 = ((void*)0);
 int VAR_14 = -VAR_1;
 struct geom VAR_15;
 int VAR_16;

 VAR_16 = FUNC_18(&VAR_15, VAR_12, VAR_7);

 if (VAR_16 == -2) {
  FUNC_16("md/raid10:%s: chunk size must be at least PAGE_SIZE(%ld) and be a power of 2.\n",
   FUNC_13(VAR_12), VAR_6);
  goto out;
 }

 if (VAR_16 < 2 || VAR_16 > VAR_12->raid_disks) {
  FUNC_16("md/raid10:%s: unsupported raid10 layout: 0x%8x\n",
   FUNC_13(VAR_12), VAR_12->new_layout);
  goto out;
 }

 VAR_14 = -VAR_2;
 VAR_13 = FUNC_10(sizeof(struct r10conf), VAR_3);
 if (!VAR_13)
  goto out;


 VAR_13->mirrors = FUNC_8(VAR_12->raid_disks + FUNC_11(0, -VAR_12->delta_disks),
    sizeof(struct raid10_info),
    VAR_3);
 if (!VAR_13->mirrors)
  goto out;

 VAR_13->tmppage = FUNC_2(VAR_3);
 if (!VAR_13->tmppage)
  goto out;

 VAR_13->geo = VAR_15;
 VAR_13->copies = VAR_16;
 VAR_14 = FUNC_15(&VAR_13->r10bio_pool, VAR_5, VAR_9,
      VAR_11, VAR_13);
 if (VAR_14)
  goto out;

 VAR_14 = FUNC_5(&VAR_13->bio_split, VAR_0, 0, 0);
 if (VAR_14)
  goto out;

 FUNC_6(VAR_13, VAR_12->dev_sectors);
 if (VAR_12->reshape_position == VAR_4) {
  VAR_13->prev = VAR_13->geo;
  VAR_13->reshape_progress = VAR_4;
 } else {
  if (FUNC_18(&VAR_13->prev, VAR_12, VAR_8) != VAR_13->copies) {
   VAR_14 = -VAR_1;
   goto out;
  }
  VAR_13->reshape_progress = VAR_12->reshape_position;
  if (VAR_13->prev.far_offset)
   VAR_13->prev.stride = 1 << VAR_13->prev.chunk_shift;
  else

   VAR_13->prev.stride = VAR_13->dev_sectors;
 }
 VAR_13->reshape_safe = VAR_13->reshape_progress;
 FUNC_19(&VAR_13->device_lock);
 FUNC_1(&VAR_13->retry_list);
 FUNC_1(&VAR_13->bio_end_io_list);

 FUNC_19(&VAR_13->resync_lock);
 FUNC_7(&VAR_13->wait_barrier);
 FUNC_3(&VAR_13->nr_pending, 0);

 VAR_14 = -VAR_2;
 VAR_13->thread = FUNC_12(VAR_10, VAR_12, "raid10");
 if (!VAR_13->thread)
  goto out;

 VAR_13->mddev = VAR_12;
 return VAR_13;

 out:
 if (VAR_13) {
  FUNC_14(&VAR_13->r10bio_pool);
  FUNC_9(VAR_13->mirrors);
  FUNC_17(VAR_13->tmppage);
  FUNC_4(&VAR_13->bio_split);
  FUNC_9(VAR_13);
 }
 return FUNC_0(VAR_14);
}
