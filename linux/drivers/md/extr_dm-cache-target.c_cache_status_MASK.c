
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct dm_target {struct cache* private; } ;
struct TYPE_8__ {int promotion; int demotion; int write_miss; int write_hit; int read_miss; int read_hit; } ;
struct cache {int nr_ctr_args; int * ctr_args; TYPE_7__* origin_dev; TYPE_5__* cache_dev; TYPE_3__* metadata_dev; int cmd; int policy; scalar_t__ migration_threshold; int nr_dirty; TYPE_1__ stats; int cache_size; scalar_t__ sectors_per_block; } ;
typedef int status_type_t ;
typedef unsigned int ssize_t ;
typedef int dm_cblock_t ;
typedef scalar_t__ dm_block_t ;
struct TYPE_14__ {TYPE_6__* bdev; } ;
struct TYPE_13__ {int bd_dev; } ;
struct TYPE_12__ {TYPE_4__* bdev; } ;
struct TYPE_11__ {int bd_dev; } ;
struct TYPE_10__ {TYPE_2__* bdev; } ;
struct TYPE_9__ {int bd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_3 ;
 unsigned int VAR_4 ;


 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct cache*) ;
 int FUNC_4 (struct cache*,int) ;
 int FUNC_5 (int ,scalar_t__*) ;
 int FUNC_6 (int ,scalar_t__*) ;
 int FUNC_7 (int ,int*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct dm_target*) ;
 int FUNC_10 (struct cache*,char*,unsigned int,unsigned int*) ;
 int FUNC_11 (char*,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct cache*) ;
 int FUNC_14 (int ,char*,unsigned int,unsigned int*) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16(struct dm_target *VAR_5, status_type_t VAR_6,
    unsigned VAR_7, char *VAR_8, unsigned VAR_9)
{
 int VAR_10 = 0;
 unsigned VAR_11;
 ssize_t VAR_12 = 0;
 dm_block_t VAR_13 = 0;
 dm_block_t VAR_14 = 0;
 char VAR_15[VAR_0];
 struct cache *VAR_16 = VAR_5->private;
 dm_cblock_t VAR_17;
 bool VAR_18;

 switch (VAR_6) {
 case 129:
  if (FUNC_13(VAR_16) == VAR_1) {
   FUNC_0("Fail");
   break;
  }


  if (!(VAR_7 & VAR_4) && !FUNC_9(VAR_5))
   (void) FUNC_4(VAR_16, 0);

  VAR_10 = FUNC_5(VAR_16->cmd, &VAR_13);
  if (VAR_10) {
   FUNC_1("%s: dm_cache_get_free_metadata_block_count returned %d",
         FUNC_3(VAR_16), VAR_10);
   goto err;
  }

  VAR_10 = FUNC_6(VAR_16->cmd, &VAR_14);
  if (VAR_10) {
   FUNC_1("%s: dm_cache_get_metadata_dev_size returned %d",
         FUNC_3(VAR_16), VAR_10);
   goto err;
  }

  VAR_17 = FUNC_15(VAR_16->policy);

  FUNC_0("%u %llu/%llu %llu %llu/%llu %u %u %u %u %u %u %lu ",
         (unsigned)VAR_3,
         (unsigned long long)(VAR_14 - VAR_13),
         (unsigned long long)VAR_14,
         (unsigned long long)VAR_16->sectors_per_block,
         (unsigned long long) FUNC_12(VAR_17),
         (unsigned long long) FUNC_12(VAR_16->cache_size),
         (unsigned) FUNC_2(&VAR_16->stats.read_hit),
         (unsigned) FUNC_2(&VAR_16->stats.read_miss),
         (unsigned) FUNC_2(&VAR_16->stats.write_hit),
         (unsigned) FUNC_2(&VAR_16->stats.write_miss),
         (unsigned) FUNC_2(&VAR_16->stats.demotion),
         (unsigned) FUNC_2(&VAR_16->stats.promotion),
         (unsigned long) FUNC_2(&VAR_16->nr_dirty));

  FUNC_10(VAR_16, VAR_8, VAR_9, &VAR_12);

  FUNC_0("2 migration_threshold %llu ", (unsigned long long) VAR_16->migration_threshold);

  FUNC_0("%s ", FUNC_8(VAR_16->policy));
  if (VAR_12 < VAR_9) {
   VAR_10 = FUNC_14(VAR_16->policy, VAR_8, VAR_9, &VAR_12);
   if (VAR_10)
    FUNC_1("%s: policy_emit_config_values returned %d",
          FUNC_3(VAR_16), VAR_10);
  }

  if (FUNC_13(VAR_16) == VAR_2)
   FUNC_0("ro ");
  else
   FUNC_0("rw ");

  VAR_10 = FUNC_7(VAR_16->cmd, &VAR_18);

  if (VAR_10 || VAR_18)
   FUNC_0("needs_check ");
  else
   FUNC_0("- ");

  break;

 case 128:
  FUNC_11(VAR_15, VAR_16->metadata_dev->bdev->bd_dev);
  FUNC_0("%s ", VAR_15);
  FUNC_11(VAR_15, VAR_16->cache_dev->bdev->bd_dev);
  FUNC_0("%s ", VAR_15);
  FUNC_11(VAR_15, VAR_16->origin_dev->bdev->bd_dev);
  FUNC_0("%s", VAR_15);

  for (VAR_11 = 0; VAR_11 < VAR_16->nr_ctr_args - 1; VAR_11++)
   FUNC_0(" %s", VAR_16->ctr_args[VAR_11]);
  if (VAR_16->nr_ctr_args)
   FUNC_0(" %s", VAR_16->ctr_args[VAR_16->nr_ctr_args - 1]);
 }

 return;

err:
 FUNC_0("Error");
}
