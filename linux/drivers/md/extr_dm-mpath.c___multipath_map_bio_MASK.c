
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* dev; } ;
struct pgpath {TYPE_5__ path; TYPE_3__* pg; } ;
struct multipath {int hw_handler_name; } ;
struct dm_mpath_io {int nr_bytes; struct pgpath* pgpath; } ;
struct bio {int bi_opf; scalar_t__ bi_status; } ;
struct TYPE_9__ {TYPE_2__* type; } ;
struct TYPE_8__ {TYPE_4__ ps; } ;
struct TYPE_7__ {int (* start_io ) (TYPE_4__*,TYPE_5__*,int ) ;} ;
struct TYPE_6__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct pgpath*) ;
 int VAR_4 ;
 struct pgpath* FUNC_1 (struct multipath*,struct bio*) ;
 struct pgpath* FUNC_2 (struct multipath*,struct bio*) ;
 int FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (struct multipath*) ;
 scalar_t__ FUNC_5 (struct multipath*) ;
 int FUNC_6 (TYPE_4__*,TYPE_5__*,int ) ;

__attribute__((used)) static int FUNC_7(struct multipath *VAR_5, struct bio *VAR_6,
          struct dm_mpath_io *VAR_7)
{
 struct pgpath *VAR_8;

 if (!VAR_5->hw_handler_name)
  VAR_8 = FUNC_2(VAR_5, VAR_6);
 else
  VAR_8 = FUNC_1(VAR_5, VAR_6);

 if (FUNC_0(VAR_8))
  return VAR_3;

 if (!VAR_8) {
  if (FUNC_5(VAR_5))
   return VAR_2;
  FUNC_4(VAR_5);
  return VAR_0;
 }

 VAR_7->pgpath = VAR_8;

 VAR_6->bi_status = 0;
 FUNC_3(VAR_6, VAR_8->path.dev->bdev);
 VAR_6->bi_opf |= VAR_4;

 if (VAR_8->pg->ps.type->start_io)
  VAR_8->pg->ps.type->start_io(&VAR_8->pg->ps,
           &VAR_8->path,
           VAR_7->nr_bytes);
 return VAR_1;
}
