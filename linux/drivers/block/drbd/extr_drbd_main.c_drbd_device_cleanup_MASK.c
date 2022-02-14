
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int list; } ;
struct TYPE_10__ {int list; } ;
struct drbd_device {TYPE_5__ unplug_work; TYPE_4__ resync_work; int resync_reads; int net_ee; int read_ee; int done_ee; int sync_ee; int active_ee; int flags; int * ldev; scalar_t__ bitmap; scalar_t__* rs_mark_time; scalar_t__* rs_mark_left; scalar_t__ rs_last_sect_ev; scalar_t__ rs_last_events; scalar_t__ rs_failed; scalar_t__ rs_total; scalar_t__ rs_start; scalar_t__ p_size; scalar_t__ writ_cnt; scalar_t__ send_cnt; scalar_t__ recv_cnt; scalar_t__ read_cnt; scalar_t__ bm_writ_cnt; scalar_t__ al_writ_cnt; } ;
struct TYPE_12__ {TYPE_3__* connection; } ;
struct TYPE_8__ {int q; } ;
struct TYPE_7__ {scalar_t__ t_state; } ;
struct TYPE_9__ {TYPE_2__ sender_work; int * net_conf; TYPE_1__ receiver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drbd_device*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct drbd_device*,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct drbd_device*,int *) ;
 int FUNC_4 (struct drbd_device*) ;
 int FUNC_5 (struct drbd_device*,int ,int) ;
 int FUNC_6 (struct drbd_device*,char*,scalar_t__) ;
 int FUNC_7 (struct drbd_device*) ;
 TYPE_6__* FUNC_8 (struct drbd_device*) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct drbd_device *VAR_3)
{
 int VAR_4;
 if (FUNC_8(VAR_3)->connection->receiver.t_state != VAR_2)
  FUNC_6(VAR_3, "ASSERT FAILED: receiver t_state == %d expected 0.\n",
    FUNC_8(VAR_3)->connection->receiver.t_state);

 VAR_3->al_writ_cnt =
 VAR_3->bm_writ_cnt =
 VAR_3->read_cnt =
 VAR_3->recv_cnt =
 VAR_3->send_cnt =
 VAR_3->writ_cnt =
 VAR_3->p_size =
 VAR_3->rs_start =
 VAR_3->rs_total =
 VAR_3->rs_failed = 0;
 VAR_3->rs_last_events = 0;
 VAR_3->rs_last_sect_ev = 0;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3->rs_mark_left[VAR_4] = 0;
  VAR_3->rs_mark_time[VAR_4] = 0;
 }
 FUNC_0(VAR_3, FUNC_8(VAR_3)->connection->net_conf == ((void*)0));

 FUNC_1(VAR_3, 0);
 if (VAR_3->bitmap) {

  FUNC_5(VAR_3, 0, 1);
  FUNC_4(VAR_3);
 }

 FUNC_3(VAR_3, VAR_3->ldev);
 VAR_3->ldev = ((void*)0);

 FUNC_2(VAR_0, &VAR_3->flags);

 FUNC_0(VAR_3, FUNC_9(&VAR_3->active_ee));
 FUNC_0(VAR_3, FUNC_9(&VAR_3->sync_ee));
 FUNC_0(VAR_3, FUNC_9(&VAR_3->done_ee));
 FUNC_0(VAR_3, FUNC_9(&VAR_3->read_ee));
 FUNC_0(VAR_3, FUNC_9(&VAR_3->net_ee));
 FUNC_0(VAR_3, FUNC_9(&VAR_3->resync_reads));
 FUNC_0(VAR_3, FUNC_9(&FUNC_8(VAR_3)->connection->sender_work.q));
 FUNC_0(VAR_3, FUNC_9(&VAR_3->resync_work.list));
 FUNC_0(VAR_3, FUNC_9(&VAR_3->unplug_work.list));

 FUNC_7(VAR_3);
}
