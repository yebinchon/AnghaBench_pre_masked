
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct verify_rq_based_data {scalar_t__ sq_count; int mq_count; } ;
struct list_head {int dummy; } ;
struct dm_target {TYPE_1__* type; scalar_t__ max_io_len; } ;
struct dm_table {scalar_t__ type; unsigned int num_targets; int md; struct dm_target* targets; } ;
typedef enum dm_queue_mode { ____Placeholder_dm_queue_mode } dm_queue_mode ;
struct TYPE_2__ {int (* iterate_devices ) (struct dm_target*,int ,struct verify_rq_based_data*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 struct dm_table* FUNC_3 (int ,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (struct dm_table*) ;
 struct list_head* FUNC_7 (struct dm_table*) ;
 struct dm_target* FUNC_8 (struct dm_table*) ;
 scalar_t__ FUNC_9 (struct dm_table*,int ,int*) ;
 scalar_t__ FUNC_10 (struct dm_target*) ;
 scalar_t__ FUNC_11 (struct dm_target*) ;
 scalar_t__ FUNC_12 (struct list_head*) ;
 int FUNC_13 (struct dm_target*,int ,struct verify_rq_based_data*) ;

__attribute__((used)) static int FUNC_14(struct dm_table *VAR_9)
{
 unsigned VAR_10;
 unsigned VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
 struct verify_rq_based_data VAR_14 = {.sq_count = 0, .mq_count = 0};
 struct dm_target *VAR_15;
 struct list_head *VAR_16 = FUNC_7(VAR_9);
 enum dm_queue_mode VAR_17 = FUNC_4(VAR_9->md);
 int VAR_18 = VAR_6;

 if (VAR_9->type != VAR_2) {

  if (VAR_9->type == VAR_0) {

   goto verify_bio_based;
  }
  FUNC_0(VAR_9->type == VAR_1);
  FUNC_0(VAR_9->type == VAR_3);
  goto verify_rq_based;
 }

 for (VAR_10 = 0; VAR_10 < VAR_9->num_targets; VAR_10++) {
  VAR_15 = VAR_9->targets + VAR_10;
  if (FUNC_10(VAR_15))
   VAR_13 = 1;
  else if (FUNC_11(VAR_15))
   VAR_12 = 1;
  else
   VAR_11 = 1;

  if (VAR_11 && VAR_12) {
   FUNC_1("Inconsistent table: different target types"
         " can't be mixed up");
   return -VAR_5;
  }
 }

 if (VAR_13 && !VAR_11 && !VAR_12) {





  if (FUNC_2(VAR_17))
   VAR_12 = 1;
  else
   VAR_11 = 1;
 }

 if (VAR_11) {
verify_bio_based:

  VAR_9->type = VAR_0;
  if (FUNC_9(VAR_9, VAR_8, &VAR_18) ||
      (FUNC_12(VAR_16) && VAR_17 == VAR_1)) {
   VAR_9->type = VAR_1;
  } else {

   VAR_15 = FUNC_8(VAR_9);
   if (VAR_15 && !VAR_15->max_io_len && FUNC_6(VAR_9)) {
    VAR_9->type = VAR_3;
    goto verify_rq_based;
   } else if (FUNC_12(VAR_16) && VAR_17 == VAR_3) {
    VAR_9->type = VAR_3;
   }
  }
  return 0;
 }

 FUNC_0(!VAR_12);

 VAR_9->type = VAR_4;

verify_rq_based:






 if (VAR_9->num_targets > 1) {
  FUNC_1("%s DM doesn't support multiple targets",
        VAR_9->type == VAR_3 ? "nvme bio-based" : "request-based");
  return -VAR_5;
 }

 if (FUNC_12(VAR_16)) {
  int VAR_19;
  struct dm_table *VAR_20 = FUNC_3(VAR_9->md, &VAR_19);


  if (VAR_20)
   VAR_9->type = VAR_20->type;
  FUNC_5(VAR_9->md, VAR_19);
  return 0;
 }

 VAR_15 = FUNC_8(VAR_9);
 if (!VAR_15) {
  FUNC_1("table load rejected: immutable target is required");
  return -VAR_5;
 } else if (VAR_15->max_io_len) {
  FUNC_1("table load rejected: immutable target that splits IO is not supported");
  return -VAR_5;
 }


 if (!VAR_15->type->iterate_devices ||
     !VAR_15->type->iterate_devices(VAR_15, VAR_7, &VAR_14)) {
  FUNC_1("table load rejected: including non-request-stackable devices");
  return -VAR_5;
 }
 if (VAR_14.sq_count > 0) {
  FUNC_1("table load rejected: not all devices are blk-mq request-stackable");
  return -VAR_5;
 }

 return 0;
}
