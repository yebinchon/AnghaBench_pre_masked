
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int cb; int list; } ;
struct TYPE_10__ {TYPE_4__ w; } ;
struct TYPE_8__ {int cb; int list; } ;
struct TYPE_7__ {int cb; int list; } ;
struct TYPE_6__ {int in_use; } ;
struct drbd_device {void* local_max_bio_size; void* peer_max_bio_size; int resync_wenr; int seq_wait; int al_wait; int ee_wait; int state_wait; int misc_wait; int request_timer; int start_resync_timer; int md_sync_timer; int resync_timer; TYPE_5__ bm_io_work; TYPE_3__ unplug_work; TYPE_2__ resync_work; int * pending_completion; int * pending_master_completion; int resync_reads; int net_ee; int read_ee; int done_ee; int sync_ee; int active_ee; int peer_seq_lock; int al_lock; int own_state_mutex; int * state_mutex; TYPE_1__ md_io; int ap_in_flight; int rs_sect_ev; int rs_sect_in; int pp_in_use_by_net; int local_cnt; int unacked_cnt; int rs_pending_cnt; int ap_pending_cnt; int ap_actlog_cnt; int ap_bio_cnt; } ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct drbd_device*) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int FUNC_6 (int *,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_7(struct drbd_device *VAR_9)
{



 FUNC_2(VAR_9);

 FUNC_1(&VAR_9->ap_bio_cnt, 0);
 FUNC_1(&VAR_9->ap_actlog_cnt, 0);
 FUNC_1(&VAR_9->ap_pending_cnt, 0);
 FUNC_1(&VAR_9->rs_pending_cnt, 0);
 FUNC_1(&VAR_9->unacked_cnt, 0);
 FUNC_1(&VAR_9->local_cnt, 0);
 FUNC_1(&VAR_9->pp_in_use_by_net, 0);
 FUNC_1(&VAR_9->rs_sect_in, 0);
 FUNC_1(&VAR_9->rs_sect_ev, 0);
 FUNC_1(&VAR_9->ap_in_flight, 0);
 FUNC_1(&VAR_9->md_io.in_use, 0);

 FUNC_4(&VAR_9->own_state_mutex);
 VAR_9->state_mutex = &VAR_9->own_state_mutex;

 FUNC_5(&VAR_9->al_lock);
 FUNC_5(&VAR_9->peer_seq_lock);

 FUNC_0(&VAR_9->active_ee);
 FUNC_0(&VAR_9->sync_ee);
 FUNC_0(&VAR_9->done_ee);
 FUNC_0(&VAR_9->read_ee);
 FUNC_0(&VAR_9->net_ee);
 FUNC_0(&VAR_9->resync_reads);
 FUNC_0(&VAR_9->resync_work.list);
 FUNC_0(&VAR_9->unplug_work.list);
 FUNC_0(&VAR_9->bm_io_work.w.list);
 FUNC_0(&VAR_9->pending_master_completion[0]);
 FUNC_0(&VAR_9->pending_master_completion[1]);
 FUNC_0(&VAR_9->pending_completion[0]);
 FUNC_0(&VAR_9->pending_completion[1]);

 VAR_9->resync_work.cb = VAR_7;
 VAR_9->unplug_work.cb = VAR_8;
 VAR_9->bm_io_work.w.cb = VAR_6;

 FUNC_6(&VAR_9->resync_timer, VAR_4, 0);
 FUNC_6(&VAR_9->md_sync_timer, VAR_2, 0);
 FUNC_6(&VAR_9->start_resync_timer, VAR_5, 0);
 FUNC_6(&VAR_9->request_timer, VAR_3, 0);

 FUNC_3(&VAR_9->misc_wait);
 FUNC_3(&VAR_9->state_wait);
 FUNC_3(&VAR_9->ee_wait);
 FUNC_3(&VAR_9->al_wait);
 FUNC_3(&VAR_9->seq_wait);

 VAR_9->resync_wenr = VAR_1;
 VAR_9->peer_max_bio_size = VAR_0;
 VAR_9->local_max_bio_size = VAR_0;
}
