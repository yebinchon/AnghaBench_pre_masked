
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union map_info {int dummy; } map_info ;
struct request_queue {int dummy; } ;
struct request {int cmd_flags; int rq_disk; int * biotail; int bio; } ;
struct TYPE_10__ {TYPE_1__* dev; } ;
struct pgpath {TYPE_5__ path; TYPE_3__* pg; } ;
struct multipath {int pg_init_in_progress; int flags; int current_pgpath; } ;
struct dm_target {struct multipath* private; } ;
struct dm_mpath_io {size_t nr_bytes; struct pgpath* pgpath; } ;
struct block_device {int bd_disk; } ;
struct TYPE_9__ {TYPE_2__* type; } ;
struct TYPE_8__ {TYPE_4__ ps; } ;
struct TYPE_7__ {int (* start_io ) (TYPE_4__*,TYPE_5__*,size_t) ;} ;
struct TYPE_6__ {struct block_device* bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct request*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct pgpath* FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct pgpath*) ;
 int FUNC_3 (int *) ;
 struct request_queue* FUNC_4 (struct block_device*) ;
 struct request* FUNC_5 (struct request_queue*,int,int ) ;
 scalar_t__ FUNC_6 (struct request_queue*) ;
 size_t FUNC_7 (struct request*) ;
 struct pgpath* FUNC_8 (struct multipath*,size_t) ;
 int FUNC_9 (struct multipath*) ;
 struct dm_mpath_io* FUNC_10 (union map_info*) ;
 scalar_t__ FUNC_11 (struct multipath*) ;
 int FUNC_12 (struct multipath*) ;
 int FUNC_13 (TYPE_4__*,TYPE_5__*,size_t) ;
 scalar_t__ FUNC_14 (int ,int *) ;

__attribute__((used)) static int FUNC_15(struct dm_target *VAR_9, struct request *VAR_10,
       union map_info *VAR_11,
       struct request **VAR_12)
{
 struct multipath *VAR_13 = VAR_9->private;
 size_t VAR_14 = FUNC_7(VAR_10);
 struct pgpath *VAR_15;
 struct block_device *VAR_16;
 struct dm_mpath_io *VAR_17 = FUNC_10(VAR_11);
 struct request_queue *VAR_18;
 struct request *VAR_19;


 VAR_15 = FUNC_1(VAR_13->current_pgpath);
 if (!VAR_15 || !FUNC_14(VAR_6, &VAR_13->flags))
  VAR_15 = FUNC_8(VAR_13, VAR_14);

 if (!VAR_15) {
  if (FUNC_11(VAR_13))
   return VAR_1;
  FUNC_9(VAR_13);
  return VAR_2;
 } else if (FUNC_14(VAR_6, &VAR_13->flags) ||
     FUNC_14(VAR_5, &VAR_13->flags)) {
  FUNC_12(VAR_13);
  return VAR_1;
 }

 VAR_17->pgpath = VAR_15;
 VAR_17->nr_bytes = VAR_14;

 VAR_16 = VAR_15->path.dev->bdev;
 VAR_18 = FUNC_4(VAR_16);
 VAR_19 = FUNC_5(VAR_18, VAR_10->cmd_flags | VAR_8,
   VAR_0);
 if (FUNC_0(VAR_19)) {

  if (FUNC_6(VAR_18)) {
   FUNC_3(&VAR_13->pg_init_in_progress);
   FUNC_2(VAR_15);
   return VAR_1;
  }
  return VAR_4;
 }
 VAR_19->bio = *(VAR_19->biotail = ((void*)0));
 VAR_19->rq_disk = VAR_16->bd_disk;
 VAR_19->cmd_flags |= VAR_7;
 *VAR_12 = VAR_19;

 if (VAR_15->pg->ps.type->start_io)
  VAR_15->pg->ps.type->start_io(&VAR_15->pg->ps,
           &VAR_15->path,
           VAR_14);
 return VAR_3;
}
