
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drbd_peer_device {TYPE_2__* connection; struct drbd_device* device; } ;
struct drbd_device {int done_ee; int sync_ee; int active_ee; int read_ee; int pp_in_use; int pp_in_use_by_net; int net_ee; int * p_uuid; int resync_timer; int misc_wait; int rs_pending_cnt; scalar_t__ rs_failed; scalar_t__ rs_total; TYPE_1__* resource; } ;
struct TYPE_4__ {int sender_work; } ;
struct TYPE_3__ {int req_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct drbd_device*,int ) ;
 int FUNC_1 (struct drbd_device*,int *) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drbd_device*,int *,char*,int ) ;
 int VAR_1 ;
 int FUNC_6 (struct drbd_device*) ;
 int FUNC_7 (int *) ;
 unsigned int FUNC_8 (struct drbd_device*,int *) ;
 int FUNC_9 (struct drbd_device*,char*,unsigned int) ;
 int FUNC_10 (struct drbd_device*) ;
 int FUNC_11 (struct drbd_device*) ;
 int FUNC_12 (struct drbd_device*) ;
 scalar_t__ FUNC_13 (struct drbd_device*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct drbd_device*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int FUNC_22(struct drbd_peer_device *VAR_2)
{
 struct drbd_device *VAR_3 = VAR_2->device;
 unsigned int VAR_4;


 FUNC_18(&VAR_3->resource->req_lock);
 FUNC_1(VAR_3, &VAR_3->active_ee);
 FUNC_1(VAR_3, &VAR_3->sync_ee);
 FUNC_1(VAR_3, &VAR_3->read_ee);
 FUNC_19(&VAR_3->resource->req_lock);
 FUNC_11(VAR_3);
 VAR_3->rs_total = 0;
 VAR_3->rs_failed = 0;
 FUNC_3(&VAR_3->rs_pending_cnt, 0);
 FUNC_21(&VAR_3->misc_wait);

 FUNC_4(&VAR_3->resync_timer);
 FUNC_17(&VAR_3->resync_timer);




 FUNC_7(&VAR_2->connection->sender_work);

 FUNC_6(VAR_3);




 FUNC_7(&VAR_2->connection->sender_work);



 FUNC_11(VAR_3);

 FUNC_14(VAR_3->p_uuid);
 VAR_3->p_uuid = ((void*)0);

 if (!FUNC_12(VAR_3))
  FUNC_20(VAR_2->connection);

 FUNC_10(VAR_3);

 if (FUNC_13(VAR_3)) {
  FUNC_5(VAR_3, &VAR_1,
    "write from disconnected", VAR_0);
  FUNC_16(VAR_3);
 }
 VAR_4 = FUNC_8(VAR_3, &VAR_3->net_ee);
 if (VAR_4)
  FUNC_9(VAR_3, "net_ee not empty, killed %u entries\n", VAR_4);
 VAR_4 = FUNC_2(&VAR_3->pp_in_use_by_net);
 if (VAR_4)
  FUNC_9(VAR_3, "pp_in_use_by_net = %d, expected 0\n", VAR_4);
 VAR_4 = FUNC_2(&VAR_3->pp_in_use);
 if (VAR_4)
  FUNC_9(VAR_3, "pp_in_use = %d, expected 0\n", VAR_4);

 FUNC_0(VAR_3, FUNC_15(&VAR_3->read_ee));
 FUNC_0(VAR_3, FUNC_15(&VAR_3->active_ee));
 FUNC_0(VAR_3, FUNC_15(&VAR_3->sync_ee));
 FUNC_0(VAR_3, FUNC_15(&VAR_3->done_ee));

 return 0;
}
