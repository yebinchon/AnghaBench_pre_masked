
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rbd_img_request {int flags; struct rbd_device* rbd_dev; } ;
struct TYPE_6__ {int features; } ;
struct rbd_device {TYPE_3__ header; TYPE_2__* opts; TYPE_1__* spec; } ;
struct TYPE_5__ {scalar_t__ lock_on_read; } ;
struct TYPE_4__ {scalar_t__ snap_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rbd_img_request*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static bool FUNC_3(struct rbd_img_request *VAR_4)
{
 struct rbd_device *VAR_5 = VAR_4->rbd_dev;

 if (!(VAR_5->header.features & VAR_2))
  return 0;

 if (VAR_5->spec->snap_id != VAR_0)
  return 0;

 FUNC_0(!FUNC_2(VAR_1, &VAR_4->flags));
 if (VAR_5->opts->lock_on_read ||
     (VAR_5->header.features & VAR_3))
  return 1;

 return FUNC_1(VAR_4);
}
