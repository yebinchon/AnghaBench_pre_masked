
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int flags; } ;
struct TYPE_9__ {scalar_t__ count; } ;
struct TYPE_10__ {int * iocp; struct heap* timer_heap; int wq_mutex; TYPE_6__ wq_async; scalar_t__ stop_flag; scalar_t__ timer_counter; scalar_t__ active_udp_streams; scalar_t__ active_tcp_streams; int poll_peer_sockets; int * next_idle_handle; int * next_check_handle; int * next_prepare_handle; int * idle_handles; int * prepare_handles; int * check_handles; int * endgame_handles; int * pending_reqs_tail; scalar_t__ active_handles; TYPE_1__ active_reqs; int handle_queue; int wq; scalar_t__ time; } ;
typedef TYPE_2__ uv_loop_t ;
struct heap {int dummy; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *,int ,int) ;
 int FUNC_2 () ;
 int * VAR_0 ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct heap*) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct heap*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_2__*) ;
 struct heap* FUNC_9 (int) ;
 int FUNC_10 () ;
 int VAR_3 ;
 int FUNC_11 (TYPE_2__*,TYPE_6__*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_2__*) ;

int FUNC_16(uv_loop_t* VAR_4) {
  struct heap* VAR_5;
  int VAR_6;


  FUNC_10();


  VAR_4->iocp = FUNC_1(VAR_0, ((void*)0), 0, 1);
  if (VAR_4->iocp == ((void*)0))
    return FUNC_14(FUNC_2());




  VAR_4->time = 0;
  FUNC_15(VAR_4);

  FUNC_3(&VAR_4->wq);
  FUNC_3(&VAR_4->handle_queue);
  VAR_4->active_reqs.count = 0;
  VAR_4->active_handles = 0;

  VAR_4->pending_reqs_tail = ((void*)0);

  VAR_4->endgame_handles = ((void*)0);

  VAR_4->timer_heap = VAR_5 = FUNC_9(sizeof(*VAR_5));
  if (VAR_5 == ((void*)0)) {
    VAR_6 = VAR_1;
    goto fail_timers_alloc;
  }

  FUNC_4(VAR_5);

  VAR_4->check_handles = ((void*)0);
  VAR_4->prepare_handles = ((void*)0);
  VAR_4->idle_handles = ((void*)0);

  VAR_4->next_prepare_handle = ((void*)0);
  VAR_4->next_check_handle = ((void*)0);
  VAR_4->next_idle_handle = ((void*)0);

  FUNC_5(&VAR_4->poll_peer_sockets, 0, sizeof VAR_4->poll_peer_sockets);

  VAR_4->active_tcp_streams = 0;
  VAR_4->active_udp_streams = 0;

  VAR_4->timer_counter = 0;
  VAR_4->stop_flag = 0;

  VAR_6 = FUNC_13(&VAR_4->wq_mutex);
  if (VAR_6)
    goto fail_mutex_init;

  VAR_6 = FUNC_11(VAR_4, &VAR_4->wq_async, VAR_3);
  if (VAR_6)
    goto fail_async_init;

  FUNC_7(&VAR_4->wq_async);
  VAR_4->wq_async.flags |= VAR_2;

  VAR_6 = FUNC_8(VAR_4);
  if (VAR_6)
    goto fail_async_init;

  return 0;

fail_async_init:
  FUNC_12(&VAR_4->wq_mutex);

fail_mutex_init:
  FUNC_6(VAR_5);
  VAR_4->timer_heap = ((void*)0);

fail_timers_alloc:
  FUNC_0(VAR_4->iocp);
  VAR_4->iocp = VAR_0;

  return VAR_6;
}
