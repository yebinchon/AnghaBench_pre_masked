
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_12__ ;


struct TYPE_19__ {void* InternalHigh; } ;
struct TYPE_25__ {char* base; scalar_t__ len; } ;
struct TYPE_20__ {TYPE_12__ overlapped; } ;
struct TYPE_21__ {TYPE_1__ io; } ;
struct TYPE_23__ {TYPE_2__ u; } ;
struct TYPE_22__ {int flags; int recv_from_len; int (* func_wsarecvfrom ) (int ,int *,int,void**,void**,struct sockaddr*,int*,TYPE_12__*,int *) ;int (* func_wsarecv ) (int ,int *,int,void**,void**,TYPE_12__*,int *) ;int reqs_pending; int socket; TYPE_12__ recv_from; TYPE_6__ recv_buffer; int (* recv_cb ) (TYPE_3__*,int ,TYPE_6__*,int *,int ) ;int (* alloc_cb ) (int *,int,TYPE_6__*) ;TYPE_4__ recv_req; } ;
typedef TYPE_3__ uv_udp_t ;
typedef TYPE_4__ uv_req_t ;
struct TYPE_24__ {scalar_t__ active_udp_streams; } ;
typedef TYPE_5__ uv_loop_t ;
typedef int uv_handle_t ;
typedef TYPE_6__ uv_buf_t ;
struct sockaddr {int dummy; } ;
typedef int WSABUF ;
typedef void* DWORD ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_12__*,int ,int) ;
 int FUNC_6 (int *,int,TYPE_6__*) ;
 int FUNC_7 (TYPE_3__*,int ,TYPE_6__*,int *,int ) ;
 int FUNC_8 (int ,int *,int,void**,void**,struct sockaddr*,int*,TYPE_12__*,int *) ;
 int FUNC_9 (int ,int *,int,void**,void**,TYPE_12__*,int *) ;
 scalar_t__ VAR_5 ;
 TYPE_6__ FUNC_10 (int *,int ) ;
 int FUNC_11 (TYPE_5__*,TYPE_4__*) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_12(uv_loop_t* VAR_7, uv_udp_t* VAR_8) {
  uv_req_t* VAR_9;
  uv_buf_t VAR_10;
  DWORD VAR_11, VAR_12;
  int VAR_13;

  FUNC_4(VAR_8->flags & VAR_2);
  FUNC_4(!(VAR_8->flags & VAR_3));

  VAR_9 = &VAR_8->recv_req;
  FUNC_5(&VAR_9->u.io.overlapped, 0, sizeof(VAR_9->u.io.overlapped));





  if (VAR_7->active_udp_streams < VAR_5) {
    VAR_8->flags &= ~VAR_4;

    VAR_8->recv_buffer = FUNC_10(((void*)0), 0);
    VAR_8->alloc_cb((uv_handle_t*) VAR_8, 65536, &VAR_8->recv_buffer);
    if (VAR_8->recv_buffer.base == ((void*)0) || VAR_8->recv_buffer.len == 0) {
      VAR_8->recv_cb(VAR_8, VAR_1, &VAR_8->recv_buffer, ((void*)0), 0);
      return;
    }
    FUNC_4(VAR_8->recv_buffer.base != ((void*)0));

    VAR_10 = VAR_8->recv_buffer;
    FUNC_5(&VAR_8->recv_from, 0, sizeof VAR_8->recv_from);
    VAR_8->recv_from_len = sizeof VAR_8->recv_from;
    VAR_12 = 0;

    VAR_13 = VAR_8->func_wsarecvfrom(VAR_8->socket,
                                      (WSABUF*) &VAR_10,
                                      1,
                                      &VAR_11,
                                      &VAR_12,
                                      (struct sockaddr*) &VAR_8->recv_from,
                                      &VAR_8->recv_from_len,
                                      &VAR_9->u.io.overlapped,
                                      ((void*)0));

    if (FUNC_1(VAR_13 == 0)) {

      VAR_8->flags |= VAR_3;
      VAR_9->u.io.overlapped.InternalHigh = VAR_11;
      VAR_8->reqs_pending++;
      FUNC_11(VAR_7, VAR_9);
    } else if (FUNC_2(VAR_13 == 0)) {

      VAR_8->flags |= VAR_3;
      VAR_8->reqs_pending++;
    } else {

      FUNC_0(VAR_9, FUNC_3());
      FUNC_11(VAR_7, VAR_9);
      VAR_8->reqs_pending++;
    }

  } else {
    VAR_8->flags |= VAR_4;

    VAR_10.base = (char*) VAR_6;
    VAR_10.len = 0;
    VAR_12 = VAR_0;

    VAR_13 = VAR_8->func_wsarecv(VAR_8->socket,
                                  (WSABUF*) &VAR_10,
                                  1,
                                  &VAR_11,
                                  &VAR_12,
                                  &VAR_9->u.io.overlapped,
                                  ((void*)0));

    if (FUNC_1(VAR_13 == 0)) {

      VAR_8->flags |= VAR_3;
      VAR_9->u.io.overlapped.InternalHigh = VAR_11;
      VAR_8->reqs_pending++;
      FUNC_11(VAR_7, VAR_9);
    } else if (FUNC_2(VAR_13 == 0)) {

      VAR_8->flags |= VAR_3;
      VAR_8->reqs_pending++;
    } else {

      FUNC_0(VAR_9, FUNC_3());
      FUNC_11(VAR_7, VAR_9);
      VAR_8->reqs_pending++;
    }
  }
}
