
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pgpath {int path; TYPE_1__* pg; } ;
struct path_selector {TYPE_2__* type; } ;
struct multipath {int process_queued_bios; int flags; int lock; int queued_bios; int nr_valid_paths; } ;
struct dm_target {struct multipath* private; } ;
struct dm_mpath_io {int nr_bytes; struct pgpath* pgpath; } ;
struct bio {int dummy; } ;
typedef scalar_t__ blk_status_t ;
struct TYPE_4__ {int (* end_io ) (struct path_selector*,int *,int ) ;} ;
struct TYPE_3__ {struct path_selector ps; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,struct bio*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct multipath*) ;
 int FUNC_4 (struct pgpath*) ;
 struct dm_mpath_io* FUNC_5 (struct bio*) ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (struct multipath*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct path_selector*,int *,int ) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct dm_target *VAR_7, struct bio *VAR_8,
    blk_status_t *VAR_9)
{
 struct multipath *VAR_10 = VAR_7->private;
 struct dm_mpath_io *VAR_11 = FUNC_5(VAR_8);
 struct pgpath *VAR_12 = VAR_11->pgpath;
 unsigned long VAR_13;
 int VAR_14 = VAR_1;

 if (!*VAR_9 || !FUNC_2(*VAR_9))
  goto done;

 if (VAR_12)
  FUNC_4(VAR_12);

 if (FUNC_0(&VAR_10->nr_valid_paths) == 0 &&
     !FUNC_11(VAR_4, &VAR_10->flags)) {
  if (FUNC_6(VAR_10)) {
   VAR_14 = VAR_3;
  } else {
   FUNC_3(VAR_10);
   *VAR_9 = VAR_0;
  }
  goto done;
 }

 FUNC_8(&VAR_10->lock, VAR_13);
 FUNC_1(&VAR_10->queued_bios, VAR_8);
 FUNC_9(&VAR_10->lock, VAR_13);
 if (!FUNC_11(VAR_5, &VAR_10->flags))
  FUNC_7(VAR_6, &VAR_10->process_queued_bios);

 VAR_14 = VAR_2;
done:
 if (VAR_12) {
  struct path_selector *VAR_15 = &VAR_12->pg->ps;

  if (VAR_15->type->end_io)
   VAR_15->type->end_io(VAR_15, &VAR_12->path, VAR_11->nr_bytes);
 }

 return VAR_14;
}
