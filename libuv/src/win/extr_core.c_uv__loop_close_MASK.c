
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * close_cb; int async_sent; } ;
struct TYPE_7__ {scalar_t__* poll_peer_sockets; int iocp; int * timer_heap; int wq_mutex; int wq; TYPE_5__ wq_async; } ;
typedef TYPE_1__ uv_loop_t ;
typedef scalar_t__ SOCKET ;


 size_t FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

void FUNC_13(uv_loop_t* VAR_1) {
  size_t VAR_2;

  FUNC_9(VAR_1);


  FUNC_3(!VAR_1->wq_async.async_sent);
  VAR_1->wq_async.close_cb = ((void*)0);
  FUNC_7(&VAR_1->wq_async);
  FUNC_6(&VAR_1->wq_async);

  for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->poll_peer_sockets); VAR_2++) {
    SOCKET VAR_3 = VAR_1->poll_peer_sockets[VAR_2];
    if (VAR_3 != 0 && VAR_3 != VAR_0)
      FUNC_4(VAR_3);
  }

  FUNC_11(&VAR_1->wq_mutex);
  FUNC_3(FUNC_2(&VAR_1->wq) && "thread pool work queue not empty!");
  FUNC_3(!FUNC_8(VAR_1));
  FUNC_12(&VAR_1->wq_mutex);
  FUNC_10(&VAR_1->wq_mutex);

  FUNC_5(VAR_1->timer_heap);
  VAR_1->timer_heap = ((void*)0);

  FUNC_1(VAR_1->iocp);
}
