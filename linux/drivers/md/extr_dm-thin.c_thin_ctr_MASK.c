
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct thin_c {struct dm_dev* origin_dev; struct dm_dev* pool_dev; TYPE_3__* pool; int td; int list; int can_destroy; int refcount; int dev_id; int sort_bio_list; int retry_on_resume_list; int deferred_bio_list; int deferred_cells; int lock; int thin_md; } ;
struct mapped_device {int dummy; } ;
struct dm_thin_endio_hook {int dummy; } ;
struct dm_target {char* error; int num_flush_bios; int flush_supported; int per_io_data_size; int discards_supported; int num_discard_bios; int table; struct thin_c* private; } ;
struct dm_dev {TYPE_1__* bdev; } ;
struct TYPE_11__ {int mutex; } ;
struct TYPE_9__ {scalar_t__ discard_enabled; } ;
struct TYPE_10__ {int lock; int active_thins; scalar_t__ suspended; TYPE_2__ pf; int sectors_per_block; int pmd; } ;
struct TYPE_8__ {int bd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (struct mapped_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dm_target*,char*,int ,struct dm_dev**) ;
 struct mapped_device* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (struct mapped_device*) ;
 int FUNC_10 (struct dm_target*,struct dm_dev*) ;
 int FUNC_11 (struct dm_target*,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 TYPE_4__ VAR_6 ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct thin_c*) ;
 struct thin_c* FUNC_17 (int,int ) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (char*,unsigned long long*,int ) ;
 int FUNC_22 (int *,int) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,unsigned long) ;
 int FUNC_25 (int *,unsigned long) ;
 int FUNC_26 (char*,char*) ;
 int FUNC_27 () ;

__attribute__((used)) static int FUNC_28(struct dm_target *VAR_7, unsigned VAR_8, char **VAR_9)
{
 int VAR_10;
 struct thin_c *VAR_11;
 struct dm_dev *VAR_12, *VAR_13;
 struct mapped_device *VAR_14;
 unsigned long VAR_15;

 FUNC_19(&VAR_6.mutex);

 if (VAR_8 != 2 && VAR_8 != 3) {
  VAR_7->error = "Invalid argument count";
  VAR_10 = -VAR_0;
  goto out_unlock;
 }

 VAR_11 = VAR_7->private = FUNC_17(sizeof(*VAR_11), VAR_3);
 if (!VAR_11) {
  VAR_7->error = "Out of memory";
  VAR_10 = -VAR_1;
  goto out_unlock;
 }
 VAR_11->thin_md = FUNC_12(VAR_7->table);
 FUNC_23(&VAR_11->lock);
 FUNC_0(&VAR_11->deferred_cells);
 FUNC_4(&VAR_11->deferred_bio_list);
 FUNC_4(&VAR_11->retry_on_resume_list);
 VAR_11->sort_bio_list = VAR_5;

 if (VAR_8 == 3) {
  if (!FUNC_26(VAR_9[0], VAR_9[2])) {
   VAR_7->error = "Error setting origin device";
   VAR_10 = -VAR_0;
   goto bad_origin_dev;
  }

  VAR_10 = FUNC_5(VAR_7, VAR_9[2], VAR_2, &VAR_13);
  if (VAR_10) {
   VAR_7->error = "Error opening origin device";
   goto bad_origin_dev;
  }
  VAR_11->origin_dev = VAR_13;
 }

 VAR_10 = FUNC_5(VAR_7, VAR_9[0], FUNC_13(VAR_7->table), &VAR_12);
 if (VAR_10) {
  VAR_7->error = "Error opening pool device";
  goto bad_pool_dev;
 }
 VAR_11->pool_dev = VAR_12;

 if (FUNC_21(VAR_9[1], (unsigned long long *)&VAR_11->dev_id, 0)) {
  VAR_7->error = "Invalid device id";
  VAR_10 = -VAR_0;
  goto bad_common;
 }

 VAR_14 = FUNC_6(VAR_11->pool_dev->bdev->bd_dev);
 if (!VAR_14) {
  VAR_7->error = "Couldn't get pool mapped device";
  VAR_10 = -VAR_0;
  goto bad_common;
 }

 VAR_11->pool = FUNC_3(VAR_14);
 if (!VAR_11->pool) {
  VAR_7->error = "Couldn't find pool object";
  VAR_10 = -VAR_0;
  goto bad_pool_lookup;
 }
 FUNC_2(VAR_11->pool);

 if (FUNC_14(VAR_11->pool) == VAR_4) {
  VAR_7->error = "Couldn't open thin device, Pool is in fail mode";
  VAR_10 = -VAR_0;
  goto bad_pool;
 }

 VAR_10 = FUNC_8(VAR_11->pool->pmd, VAR_11->dev_id, &VAR_11->td);
 if (VAR_10) {
  VAR_7->error = "Couldn't open thin internal device";
  goto bad_pool;
 }

 VAR_10 = FUNC_11(VAR_7, VAR_11->pool->sectors_per_block);
 if (VAR_10)
  goto bad;

 VAR_7->num_flush_bios = 1;
 VAR_7->flush_supported = 1;
 VAR_7->per_io_data_size = sizeof(struct dm_thin_endio_hook);


 if (VAR_11->pool->pf.discard_enabled) {
  VAR_7->discards_supported = 1;
  VAR_7->num_discard_bios = 1;
 }

 FUNC_20(&VAR_6.mutex);

 FUNC_24(&VAR_11->pool->lock, VAR_15);
 if (VAR_11->pool->suspended) {
  FUNC_25(&VAR_11->pool->lock, VAR_15);
  FUNC_19(&VAR_6.mutex);
  VAR_7->error = "Unable to activate thin device while pool is suspended";
  VAR_10 = -VAR_0;
  goto bad;
 }
 FUNC_22(&VAR_11->refcount, 1);
 FUNC_15(&VAR_11->can_destroy);
 FUNC_18(&VAR_11->list, &VAR_11->pool->active_thins);
 FUNC_25(&VAR_11->pool->lock, VAR_15);






 FUNC_27();

 FUNC_9(VAR_14);

 return 0;

bad:
 FUNC_7(VAR_11->td);
bad_pool:
 FUNC_1(VAR_11->pool);
bad_pool_lookup:
 FUNC_9(VAR_14);
bad_common:
 FUNC_10(VAR_7, VAR_11->pool_dev);
bad_pool_dev:
 if (VAR_11->origin_dev)
  FUNC_10(VAR_7, VAR_11->origin_dev);
bad_origin_dev:
 FUNC_16(VAR_11);
out_unlock:
 FUNC_20(&VAR_6.mutex);

 return VAR_10;
}
