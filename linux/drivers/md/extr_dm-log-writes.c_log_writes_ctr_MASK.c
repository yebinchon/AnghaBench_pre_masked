
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct per_bio_data {int dummy; } ;
struct log_writes_c {int sectorsize; int next_sector; int logging_enabled; int device_supports_discard; int end_sector; TYPE_1__* logdev; TYPE_1__* dev; int log_kthread; int sectorshift; int pending_blocks; int io_blocks; int super_done; int wait; int logging_blocks; int unflushed_blocks; int blocks_lock; } ;
struct dm_target {char* error; int num_flush_bios; int flush_supported; int num_discard_bios; int discards_supported; int per_io_data_size; struct log_writes_c* private; int table; } ;
struct dm_arg_set {unsigned int argc; char** argv; } ;
struct TYPE_3__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct dm_target*,char const*,int ,TYPE_1__**) ;
 int FUNC_6 (struct dm_target*,TYPE_1__*) ;
 char* FUNC_7 (struct dm_arg_set*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct log_writes_c*) ;
 int FUNC_13 (int ,struct log_writes_c*,char*) ;
 struct log_writes_c* FUNC_14 (int,int ) ;
 int VAR_4 ;
 int FUNC_15 (struct log_writes_c*) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct dm_target *VAR_5, unsigned int VAR_6, char **VAR_7)
{
 struct log_writes_c *VAR_8;
 struct dm_arg_set VAR_9;
 const char *VAR_10, *VAR_11;
 int VAR_12;

 VAR_9.argc = VAR_6;
 VAR_9.argv = VAR_7;

 if (VAR_6 < 2) {
  VAR_5->error = "Invalid argument count";
  return -VAR_0;
 }

 VAR_8 = FUNC_14(sizeof(struct log_writes_c), VAR_2);
 if (!VAR_8) {
  VAR_5->error = "Cannot allocate context";
  return -VAR_1;
 }
 FUNC_16(&VAR_8->blocks_lock);
 FUNC_0(&VAR_8->unflushed_blocks);
 FUNC_0(&VAR_8->logging_blocks);
 FUNC_11(&VAR_8->wait);
 FUNC_10(&VAR_8->super_done);
 FUNC_3(&VAR_8->io_blocks, 0);
 FUNC_3(&VAR_8->pending_blocks, 0);

 VAR_10 = FUNC_7(&VAR_9);
 VAR_12 = FUNC_5(VAR_5, VAR_10, FUNC_8(VAR_5->table), &VAR_8->dev);
 if (VAR_12) {
  VAR_5->error = "Device lookup failed";
  goto bad;
 }

 VAR_11 = FUNC_7(&VAR_9);
 VAR_12 = FUNC_5(VAR_5, VAR_11, FUNC_8(VAR_5->table),
       &VAR_8->logdev);
 if (VAR_12) {
  VAR_5->error = "Log device lookup failed";
  FUNC_6(VAR_5, VAR_8->dev);
  goto bad;
 }

 VAR_8->sectorsize = FUNC_4(VAR_8->dev->bdev);
 VAR_8->sectorshift = FUNC_9(VAR_8->sectorsize);
 VAR_8->log_kthread = FUNC_13(VAR_4, VAR_8, "log-write");
 if (FUNC_1(VAR_8->log_kthread)) {
  VAR_12 = FUNC_2(VAR_8->log_kthread);
  VAR_5->error = "Couldn't alloc kthread";
  FUNC_6(VAR_5, VAR_8->dev);
  FUNC_6(VAR_5, VAR_8->logdev);
  goto bad;
 }






 VAR_8->next_sector = VAR_8->sectorsize >> VAR_3;
 VAR_8->logging_enabled = 1;
 VAR_8->end_sector = FUNC_15(VAR_8);
 VAR_8->device_supports_discard = 1;

 VAR_5->num_flush_bios = 1;
 VAR_5->flush_supported = 1;
 VAR_5->num_discard_bios = 1;
 VAR_5->discards_supported = 1;
 VAR_5->per_io_data_size = sizeof(struct per_bio_data);
 VAR_5->private = VAR_8;
 return 0;

bad:
 FUNC_12(VAR_8);
 return VAR_12;
}
