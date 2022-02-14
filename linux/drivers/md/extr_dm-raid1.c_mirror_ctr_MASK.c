
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mirror_set {unsigned int nr_mirrors; int kmirrord_wq; int kcopyd_client; int trigger_event; scalar_t__ timer_pending; int timer; int kmirrord_work; int rh; } ;
struct dm_target {char* error; int num_flush_bios; int num_discard_bios; int per_io_data_size; struct mirror_set* private; } ;
struct dm_raid1_bio_record {int dummy; } ;
struct dm_dirty_log {TYPE_1__* type; } ;
struct TYPE_2__ {int (* get_region_size ) (struct dm_dirty_log*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 struct mirror_set* FUNC_4 (unsigned int,int ,struct dm_target*,struct dm_dirty_log*) ;
 int FUNC_5 (char*,int ,int ) ;
 struct dm_dirty_log* FUNC_6 (struct dm_target*,unsigned int,char**,unsigned int*) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct dm_dirty_log*) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct dm_target*,int ) ;
 int VAR_6 ;
 int FUNC_12 (struct mirror_set*,struct dm_target*,unsigned int) ;
 int FUNC_13 (struct mirror_set*,struct dm_target*,unsigned int,char**) ;
 int FUNC_14 (struct mirror_set*,unsigned int,char**,unsigned int*) ;
 int FUNC_15 (char*,char*,unsigned int*,char*) ;
 int FUNC_16 (struct dm_dirty_log*) ;
 int FUNC_17 (int *,int ,int ) ;
 int VAR_7 ;
 int FUNC_18 (struct mirror_set*) ;

__attribute__((used)) static int FUNC_19(struct dm_target *VAR_8, unsigned int VAR_9, char **VAR_10)
{
 int VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14;
 struct mirror_set *VAR_15;
 struct dm_dirty_log *VAR_16;
 char VAR_17;

 VAR_16 = FUNC_6(VAR_8, VAR_9, VAR_10, &VAR_14);
 if (!VAR_16)
  return -VAR_0;

 VAR_10 += VAR_14;
 VAR_9 -= VAR_14;

 if (!VAR_9 || FUNC_15(VAR_10[0], "%u%c", &VAR_12, &VAR_17) != 1 ||
     VAR_12 < 2 || VAR_12 > VAR_2) {
  VAR_8->error = "Invalid number of mirrors";
  FUNC_8(VAR_16);
  return -VAR_0;
 }

 VAR_10++, VAR_9--;

 if (VAR_9 < VAR_12 * 2) {
  VAR_8->error = "Too few mirror arguments";
  FUNC_8(VAR_16);
  return -VAR_0;
 }

 VAR_15 = FUNC_4(VAR_12, VAR_16->type->get_region_size(VAR_16), VAR_8, VAR_16);
 if (!VAR_15) {
  FUNC_8(VAR_16);
  return -VAR_1;
 }


 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  VAR_11 = FUNC_13(VAR_15, VAR_8, VAR_13, VAR_10);
  if (VAR_11) {
   FUNC_12(VAR_15, VAR_8, VAR_13);
   return VAR_11;
  }
  VAR_10 += 2;
  VAR_9 -= 2;
 }

 VAR_8->private = VAR_15;

 VAR_11 = FUNC_11(VAR_8, FUNC_10(VAR_15->rh));
 if (VAR_11)
  goto err_free_context;

 VAR_8->num_flush_bios = 1;
 VAR_8->num_discard_bios = 1;
 VAR_8->per_io_data_size = sizeof(struct dm_raid1_bio_record);

 VAR_15->kmirrord_wq = FUNC_5("kmirrord", VAR_3, 0);
 if (!VAR_15->kmirrord_wq) {
  FUNC_0("couldn't start kmirrord");
  VAR_11 = -VAR_1;
  goto err_free_context;
 }
 FUNC_1(&VAR_15->kmirrord_work, VAR_6);
 FUNC_17(&VAR_15->timer, VAR_4, 0);
 VAR_15->timer_pending = 0;
 FUNC_1(&VAR_15->trigger_event, VAR_7);

 VAR_11 = FUNC_14(VAR_15, VAR_9, VAR_10, &VAR_14);
 if (VAR_11)
  goto err_destroy_wq;

 VAR_10 += VAR_14;
 VAR_9 -= VAR_14;
 if (VAR_9) {
  VAR_8->error = "Too many mirror arguments";
  VAR_11 = -VAR_0;
  goto err_destroy_wq;
 }

 VAR_15->kcopyd_client = FUNC_9(&VAR_5);
 if (FUNC_2(VAR_15->kcopyd_client)) {
  VAR_11 = FUNC_3(VAR_15->kcopyd_client);
  goto err_destroy_wq;
 }

 FUNC_18(VAR_15);
 return 0;

err_destroy_wq:
 FUNC_7(VAR_15->kmirrord_wq);
err_free_context:
 FUNC_12(VAR_15, VAR_8, VAR_15->nr_mirrors);
 return VAR_11;
}
