
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int send_queue_count; int send_queue_size; int reqs_pending; int socket; int * loop; } ;
typedef TYPE_3__ uv_udp_t ;
struct TYPE_10__ {scalar_t__ queued_bytes; int overlapped; } ;
struct TYPE_11__ {TYPE_1__ io; } ;
struct TYPE_13__ {TYPE_2__ u; int cb; TYPE_3__* handle; } ;
typedef TYPE_4__ uv_udp_send_t ;
typedef int uv_udp_send_cb ;
typedef int uv_req_t ;
typedef int uv_loop_t ;
typedef int uv_buf_t ;
struct sockaddr {int dummy; } ;
typedef int WSABUF ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *,TYPE_3__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int *,unsigned int,scalar_t__*,int ,struct sockaddr const*,unsigned int,int *,int *) ;
 int FUNC_6 (int *,int ,int) ;
 scalar_t__ FUNC_7 (int const*,unsigned int) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static int FUNC_9(uv_udp_send_t* VAR_1,
                    uv_udp_t* VAR_2,
                    const uv_buf_t VAR_3[],
                    unsigned int VAR_4,
                    const struct sockaddr* VAR_5,
                    unsigned int VAR_6,
                    uv_udp_send_cb VAR_7) {
  uv_loop_t* VAR_8 = VAR_2->loop;
  DWORD VAR_9, VAR_10;

  FUNC_1(VAR_1, VAR_0);
  VAR_1->handle = VAR_2;
  VAR_1->cb = VAR_7;
  FUNC_6(&VAR_1->u.io.overlapped, 0, sizeof(VAR_1->u.io.overlapped));

  VAR_9 = FUNC_5(VAR_2->socket,
                     (WSABUF*)VAR_3,
                     VAR_4,
                     &VAR_10,
                     0,
                     VAR_5,
                     VAR_6,
                     &VAR_1->u.io.overlapped,
                     ((void*)0));

  if (FUNC_2(VAR_9 == 0)) {

    VAR_1->u.io.queued_bytes = 0;
    VAR_2->reqs_pending++;
    VAR_2->send_queue_size += VAR_1->u.io.queued_bytes;
    VAR_2->send_queue_count++;
    FUNC_0(VAR_8, VAR_2, VAR_1);
    FUNC_8(VAR_8, (uv_req_t*)VAR_1);
  } else if (FUNC_3(VAR_9 == 0)) {

    VAR_1->u.io.queued_bytes = FUNC_7(VAR_3, VAR_4);
    VAR_2->reqs_pending++;
    VAR_2->send_queue_size += VAR_1->u.io.queued_bytes;
    VAR_2->send_queue_count++;
    FUNC_0(VAR_8, VAR_2, VAR_1);
  } else {

    return FUNC_4();
  }

  return 0;
}
