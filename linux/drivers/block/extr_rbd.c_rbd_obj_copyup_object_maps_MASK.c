
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_6__ {int result; int num_pending; } ;
struct rbd_obj_request {int flags; TYPE_3__ pending; TYPE_1__* img_request; } ;
struct TYPE_5__ {int features; } ;
struct rbd_device {TYPE_2__ header; } ;
struct ceph_snap_context {int num_snaps; int * snaps; } ;
struct TYPE_4__ {struct ceph_snap_context* snapc; struct rbd_device* rbd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rbd_obj_request*,int ,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct rbd_obj_request *VAR_5)
{
 struct rbd_device *VAR_6 = VAR_5->img_request->rbd_dev;
 struct ceph_snap_context *VAR_7 = VAR_5->img_request->snapc;
 u8 VAR_8;
 u32 VAR_9;
 int VAR_10;

 FUNC_0(!VAR_5->pending.result && !VAR_5->pending.num_pending);

 if (!(VAR_6->header.features & VAR_3))
  return;

 if (VAR_5->flags & VAR_4)
  return;

 for (VAR_9 = 0; VAR_9 < VAR_7->num_snaps; VAR_9++) {
  if ((VAR_6->header.features & VAR_2) &&
      VAR_9 + 1 < VAR_7->num_snaps)
   VAR_8 = VAR_1;
  else
   VAR_8 = VAR_0;

  VAR_10 = FUNC_1(VAR_5, VAR_7->snaps[VAR_9],
         VAR_8, ((void*)0));
  if (VAR_10 < 0) {
   VAR_5->pending.result = VAR_10;
   return;
  }

  FUNC_0(!VAR_10);
  VAR_5->pending.num_pending++;
 }
}
