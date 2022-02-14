
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct pool_c {int requested_pf; scalar_t__ low_water_blocks; TYPE_5__* data_dev; TYPE_3__* metadata_dev; struct pool* pool; } ;
struct TYPE_6__ {int error_if_no_space; int discard_passdown; int discard_enabled; } ;
struct pool {scalar_t__ sectors_per_block; int pmd; TYPE_1__ pf; int pool_md; } ;
struct dm_target {struct pool_c* private; } ;
typedef int status_type_t ;
typedef enum pool_mode { ____Placeholder_pool_mode } pool_mode ;
typedef scalar_t__ dm_block_t ;
struct TYPE_10__ {TYPE_4__* bdev; } ;
struct TYPE_9__ {int bd_dev; } ;
struct TYPE_8__ {TYPE_2__* bdev; } ;
struct TYPE_7__ {int bd_dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 scalar_t__ FUNC_2 (struct pool_c*) ;
 int FUNC_3 (struct pool*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__*) ;
 int FUNC_6 (int ,scalar_t__*) ;
 int FUNC_7 (int ,scalar_t__*) ;
 int FUNC_8 (int ,scalar_t__*) ;
 int FUNC_9 (int ,scalar_t__*) ;
 int FUNC_10 (int ,scalar_t__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct dm_target*) ;
 int FUNC_13 (int *,char*,unsigned int,unsigned int) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (struct pool*) ;
 int FUNC_16 (int) ;

__attribute__((used)) static void FUNC_17(struct dm_target *VAR_4, status_type_t VAR_5,
   unsigned VAR_6, char *VAR_7, unsigned VAR_8)
{
 int VAR_9;
 unsigned VAR_10 = 0;
 uint64_t VAR_11;
 dm_block_t VAR_12;
 dm_block_t VAR_13;
 dm_block_t VAR_14;
 dm_block_t VAR_15;
 dm_block_t VAR_16;
 enum pool_mode VAR_17;
 char VAR_18[VAR_0];
 char VAR_19[VAR_0];
 struct pool_c *VAR_20 = VAR_4->private;
 struct pool *VAR_21 = VAR_20->pool;

 switch (VAR_5) {
 case 129:
  if (FUNC_15(VAR_21) == VAR_2) {
   FUNC_0("Fail");
   break;
  }


  if (!(VAR_6 & VAR_1) && !FUNC_12(VAR_4))
   (void) FUNC_3(VAR_21);

  VAR_9 = FUNC_10(VAR_21->pmd, &VAR_11);
  if (VAR_9) {
   FUNC_1("%s: dm_pool_get_metadata_transaction_id returned %d",
         FUNC_4(VAR_21->pool_md), VAR_9);
   goto err;
  }

  VAR_9 = FUNC_7(VAR_21->pmd, &VAR_13);
  if (VAR_9) {
   FUNC_1("%s: dm_pool_get_free_metadata_block_count returned %d",
         FUNC_4(VAR_21->pool_md), VAR_9);
   goto err;
  }

  VAR_9 = FUNC_8(VAR_21->pmd, &VAR_15);
  if (VAR_9) {
   FUNC_1("%s: dm_pool_get_metadata_dev_size returned %d",
         FUNC_4(VAR_21->pool_md), VAR_9);
   goto err;
  }

  VAR_9 = FUNC_6(VAR_21->pmd, &VAR_12);
  if (VAR_9) {
   FUNC_1("%s: dm_pool_get_free_block_count returned %d",
         FUNC_4(VAR_21->pool_md), VAR_9);
   goto err;
  }

  VAR_9 = FUNC_5(VAR_21->pmd, &VAR_14);
  if (VAR_9) {
   FUNC_1("%s: dm_pool_get_data_dev_size returned %d",
         FUNC_4(VAR_21->pool_md), VAR_9);
   goto err;
  }

  VAR_9 = FUNC_9(VAR_21->pmd, &VAR_16);
  if (VAR_9) {
   FUNC_1("%s: dm_pool_get_metadata_snap returned %d",
         FUNC_4(VAR_21->pool_md), VAR_9);
   goto err;
  }

  FUNC_0("%llu %llu/%llu %llu/%llu ",
         (unsigned long long)VAR_11,
         (unsigned long long)(VAR_15 - VAR_13),
         (unsigned long long)VAR_15,
         (unsigned long long)(VAR_14 - VAR_12),
         (unsigned long long)VAR_14);

  if (VAR_16)
   FUNC_0("%llu ", VAR_16);
  else
   FUNC_0("- ");

  VAR_17 = FUNC_15(VAR_21);
  if (VAR_17 == VAR_3)
   FUNC_0("out_of_data_space ");
  else if (FUNC_16(VAR_17))
   FUNC_0("ro ");
  else
   FUNC_0("rw ");

  if (!VAR_21->pf.discard_enabled)
   FUNC_0("ignore_discard ");
  else if (VAR_21->pf.discard_passdown)
   FUNC_0("discard_passdown ");
  else
   FUNC_0("no_discard_passdown ");

  if (VAR_21->pf.error_if_no_space)
   FUNC_0("error_if_no_space ");
  else
   FUNC_0("queue_if_no_space ");

  if (FUNC_11(VAR_21->pmd))
   FUNC_0("needs_check ");
  else
   FUNC_0("- ");

  FUNC_0("%llu ", (unsigned long long)FUNC_2(VAR_20));

  break;

 case 128:
  FUNC_0("%s %s %lu %llu ",
         FUNC_14(VAR_18, VAR_20->metadata_dev->bdev->bd_dev),
         FUNC_14(VAR_19, VAR_20->data_dev->bdev->bd_dev),
         (unsigned long)VAR_21->sectors_per_block,
         (unsigned long long)VAR_20->low_water_blocks);
  FUNC_13(&VAR_20->requested_pf, VAR_7, VAR_10, VAR_8);
  break;
 }
 return;

err:
 FUNC_0("Error");
}
