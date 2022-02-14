
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct dm_writecache {int n_blocks; char* max_writeback_jobs; char* autocommit_blocks; int writeback_fua; int writeback_fua_set; int autocommit_jiffies; int autocommit_time_set; int autocommit_blocks_set; int max_writeback_jobs_set; int freelist_low_watermark; int low_wm_percent_set; int freelist_high_watermark; int high_wm_percent_set; scalar_t__ start_sector; int block_size; TYPE_2__* ssd_dev; TYPE_1__* dev; scalar_t__ writeback_size; scalar_t__ freelist_size; } ;
struct dm_target {struct dm_writecache* private; } ;
typedef int status_type_t ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (char*,...) ;


 int FUNC_1 (struct dm_writecache*) ;
 int FUNC_2 (int,size_t) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (struct dm_writecache*) ;

__attribute__((used)) static void FUNC_5(struct dm_target *VAR_0, status_type_t VAR_1,
         unsigned VAR_2, char *VAR_3, unsigned VAR_4)
{
 struct dm_writecache *VAR_5 = VAR_0->private;
 unsigned VAR_6;
 unsigned VAR_7 = 0;
 uint64_t VAR_8;

 switch (VAR_1) {
 case 129:
  FUNC_0("%ld %llu %llu %llu", FUNC_4(VAR_5),
         (unsigned long long)VAR_5->n_blocks, (unsigned long long)VAR_5->freelist_size,
         (unsigned long long)VAR_5->writeback_size);
  break;
 case 128:
  FUNC_0("%c %s %s %u ", FUNC_1(VAR_5) ? 'p' : 's',
    VAR_5->dev->name, VAR_5->ssd_dev->name, VAR_5->block_size);
  VAR_6 = 0;
  if (VAR_5->start_sector)
   VAR_6 += 2;
  if (VAR_5->high_wm_percent_set)
   VAR_6 += 2;
  if (VAR_5->low_wm_percent_set)
   VAR_6 += 2;
  if (VAR_5->max_writeback_jobs_set)
   VAR_6 += 2;
  if (VAR_5->autocommit_blocks_set)
   VAR_6 += 2;
  if (VAR_5->autocommit_time_set)
   VAR_6 += 2;
  if (VAR_5->writeback_fua_set)
   VAR_6++;

  FUNC_0("%u", VAR_6);
  if (VAR_5->start_sector)
   FUNC_0(" start_sector %llu", (unsigned long long)VAR_5->start_sector);
  if (VAR_5->high_wm_percent_set) {
   VAR_8 = (uint64_t)VAR_5->freelist_high_watermark * 100;
   VAR_8 += VAR_5->n_blocks / 2;
   FUNC_2(VAR_8, (size_t)VAR_5->n_blocks);
   FUNC_0(" high_watermark %u", 100 - (unsigned)VAR_8);
  }
  if (VAR_5->low_wm_percent_set) {
   VAR_8 = (uint64_t)VAR_5->freelist_low_watermark * 100;
   VAR_8 += VAR_5->n_blocks / 2;
   FUNC_2(VAR_8, (size_t)VAR_5->n_blocks);
   FUNC_0(" low_watermark %u", 100 - (unsigned)VAR_8);
  }
  if (VAR_5->max_writeback_jobs_set)
   FUNC_0(" writeback_jobs %u", VAR_5->max_writeback_jobs);
  if (VAR_5->autocommit_blocks_set)
   FUNC_0(" autocommit_blocks %u", VAR_5->autocommit_blocks);
  if (VAR_5->autocommit_time_set)
   FUNC_0(" autocommit_time %u", FUNC_3(VAR_5->autocommit_jiffies));
  if (VAR_5->writeback_fua_set)
   FUNC_0(" %sfua", VAR_5->writeback_fua ? "" : "no");
  break;
 }
}
