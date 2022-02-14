
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union map_info {int dummy; } map_info ;
struct request {int dummy; } ;
struct pgpath {int path; TYPE_1__* pg; } ;
struct path_selector {TYPE_2__* type; } ;
struct multipath {int nr_valid_paths; } ;
struct dm_target {struct multipath* private; } ;
struct dm_mpath_io {int nr_bytes; struct pgpath* pgpath; } ;
typedef scalar_t__ blk_status_t ;
struct TYPE_4__ {int (* end_io ) (struct path_selector*,int *,int ) ;} ;
struct TYPE_3__ {struct path_selector ps; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct multipath*) ;
 int FUNC_3 (struct pgpath*) ;
 struct dm_mpath_io* FUNC_4 (union map_info*) ;
 int FUNC_5 (struct multipath*) ;
 int FUNC_6 (struct path_selector*,int *,int ) ;

__attribute__((used)) static int FUNC_7(struct dm_target *VAR_5, struct request *VAR_6,
       blk_status_t VAR_7, union map_info *VAR_8)
{
 struct dm_mpath_io *VAR_9 = FUNC_4(VAR_8);
 struct pgpath *VAR_10 = VAR_9->pgpath;
 int VAR_11 = VAR_3;
 if (VAR_7 && FUNC_1(VAR_7)) {
  struct multipath *VAR_12 = VAR_5->private;

  if (VAR_7 == VAR_1)
   VAR_11 = VAR_2;
  else
   VAR_11 = VAR_4;

  if (VAR_10)
   FUNC_3(VAR_10);

  if (FUNC_0(&VAR_12->nr_valid_paths) == 0 &&
      !FUNC_5(VAR_12)) {
   if (VAR_7 == VAR_0)
    FUNC_2(VAR_12);

   VAR_11 = VAR_3;
  }
 }

 if (VAR_10) {
  struct path_selector *VAR_13 = &VAR_10->pg->ps;

  if (VAR_13->type->end_io)
   VAR_13->type->end_io(VAR_13, &VAR_10->path, VAR_9->nr_bytes);
 }

 return VAR_11;
}
