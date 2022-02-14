
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_target {int metadata; int bio_set; int chunk_lock; int chunk_wq; int flush_wq; int reclaim; int flush_work; int flush_list; int flush_lock; int chunk_rxtree; struct dmz_dev* dev; int * ddev; } ;
struct dmz_dev {int zone_nr_sectors; int zone_nr_sectors_shift; int name; } ;
struct dmz_bioctx {int dummy; } ;
struct dm_target {char* error; int max_io_len; int num_flush_bios; int num_discard_bios; int num_write_zeroes_bios; int per_io_data_size; int flush_supported; int discards_supported; int len; struct dmz_target* private; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (char*,int,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct dmz_dev*,int *) ;
 int FUNC_9 (struct dmz_dev*,int ,int *) ;
 int FUNC_10 (struct dmz_dev*,char*,unsigned long long,unsigned long long) ;
 int FUNC_11 (int ) ;
 int VAR_8 ;
 int FUNC_12 (struct dm_target*,char*) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct dm_target*) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (struct dmz_target*) ;
 struct dmz_target* FUNC_17 (int,int ) ;
 int FUNC_18 (int ,int *,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int FUNC_22(struct dm_target *VAR_9, unsigned int VAR_10, char **VAR_11)
{
 struct dmz_target *VAR_12;
 struct dmz_dev *VAR_13;
 int VAR_14;


 if (VAR_10 != 1) {
  VAR_9->error = "Invalid argument count";
  return -VAR_2;
 }


 VAR_12 = FUNC_17(sizeof(struct dmz_target), VAR_4);
 if (!VAR_12) {
  VAR_9->error = "Unable to allocate the zoned target descriptor";
  return -VAR_3;
 }
 VAR_9->private = VAR_12;


 VAR_14 = FUNC_12(VAR_9, VAR_11[0]);
 if (VAR_14) {
  VAR_12->ddev = ((void*)0);
  goto err;
 }


 VAR_13 = VAR_12->dev;
 VAR_14 = FUNC_8(VAR_13, &VAR_12->metadata);
 if (VAR_14) {
  VAR_9->error = "Metadata initialization failed";
  goto err_dev;
 }


 VAR_9->max_io_len = VAR_13->zone_nr_sectors << 9;
 VAR_9->num_flush_bios = 1;
 VAR_9->num_discard_bios = 1;
 VAR_9->num_write_zeroes_bios = 1;
 VAR_9->per_io_data_size = sizeof(struct dmz_bioctx);
 VAR_9->flush_supported = 1;
 VAR_9->discards_supported = 1;


 VAR_9->len = (sector_t)FUNC_13(VAR_12->metadata) << VAR_13->zone_nr_sectors_shift;


 VAR_14 = FUNC_6(&VAR_12->bio_set, VAR_1, 0, 0);
 if (VAR_14) {
  VAR_9->error = "Create BIO set failed";
  goto err_meta;
 }


 FUNC_20(&VAR_12->chunk_lock);
 FUNC_1(&VAR_12->chunk_rxtree, VAR_5);
 VAR_12->chunk_wq = FUNC_3("dmz_cwq_%s", VAR_6 | VAR_7,
     0, VAR_13->name);
 if (!VAR_12->chunk_wq) {
  VAR_9->error = "Create chunk workqueue failed";
  VAR_14 = -VAR_3;
  goto err_bio;
 }


 FUNC_21(&VAR_12->flush_lock);
 FUNC_4(&VAR_12->flush_list);
 FUNC_0(&VAR_12->flush_work, VAR_8);
 VAR_12->flush_wq = FUNC_2("dmz_fwq_%s", VAR_6,
      VAR_13->name);
 if (!VAR_12->flush_wq) {
  VAR_9->error = "Create flush workqueue failed";
  VAR_14 = -VAR_3;
  goto err_cwq;
 }
 FUNC_18(VAR_12->flush_wq, &VAR_12->flush_work, VAR_0);


 VAR_14 = FUNC_9(VAR_13, VAR_12->metadata, &VAR_12->reclaim);
 if (VAR_14) {
  VAR_9->error = "Zone reclaim initialization failed";
  goto err_fwq;
 }

 FUNC_10(VAR_13, "Target device: %llu 512-byte logical sectors (%llu blocks)",
       (unsigned long long)VAR_9->len,
       (unsigned long long)FUNC_15(VAR_9->len));

 return 0;
err_fwq:
 FUNC_7(VAR_12->flush_wq);
err_cwq:
 FUNC_7(VAR_12->chunk_wq);
err_bio:
 FUNC_19(&VAR_12->chunk_lock);
 FUNC_5(&VAR_12->bio_set);
err_meta:
 FUNC_11(VAR_12->metadata);
err_dev:
 FUNC_14(VAR_9);
err:
 FUNC_16(VAR_12);

 return VAR_14;
}
