
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union map_info {int dummy; } map_info ;
struct request {int dummy; } ;
struct pgpath {int path; TYPE_1__* pg; } ;
struct dm_mpath_io {int nr_bytes; struct pgpath* pgpath; } ;
struct TYPE_6__ {TYPE_2__* type; } ;
struct TYPE_5__ {int (* end_io ) (TYPE_3__*,int *,int ) ;} ;
struct TYPE_4__ {TYPE_3__ ps; } ;


 int FUNC_0 (struct request*) ;
 struct dm_mpath_io* FUNC_1 (union map_info*) ;
 int FUNC_2 (TYPE_3__*,int *,int ) ;
 scalar_t__ FUNC_3 (union map_info*) ;

__attribute__((used)) static void FUNC_4(struct request *VAR_0,
        union map_info *VAR_1)
{
 if (FUNC_3(VAR_1)) {




  struct dm_mpath_io *VAR_2 = FUNC_1(VAR_1);
  struct pgpath *VAR_3 = VAR_2->pgpath;

  if (VAR_3 && VAR_3->pg->ps.type->end_io)
   VAR_3->pg->ps.type->end_io(&VAR_3->pg->ps,
          &VAR_3->path,
          VAR_2->nr_bytes);
 }

 FUNC_0(VAR_0);
}
