
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* data; } ;
struct TYPE_5__ {int handle_queue; int loop; TYPE_4__ recv_req; scalar_t__ send_queue_count; scalar_t__ send_queue_size; int func_wsarecvfrom; int func_wsarecv; scalar_t__ activecnt; scalar_t__ reqs_pending; scalar_t__ socket; } ;
typedef TYPE_1__ uv_udp_t ;
typedef int uv_loop_t ;
typedef int uv_handle_t ;
typedef scalar_t__ SOCKET ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 () ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*,scalar_t__,int) ;

int FUNC_8(uv_loop_t* VAR_10, uv_udp_t* VAR_11, unsigned int VAR_12) {
  int VAR_13;


  VAR_13 = VAR_12 & 0xFF;
  if (VAR_13 != VAR_0 && VAR_13 != VAR_1 && VAR_13 != VAR_2)
    return VAR_5;

  if (VAR_12 & ~0xFF)
    return VAR_5;

  FUNC_5(VAR_10, (uv_handle_t*) VAR_11, VAR_6);
  VAR_11->socket = VAR_3;
  VAR_11->reqs_pending = 0;
  VAR_11->activecnt = 0;
  VAR_11->func_wsarecv = VAR_8;
  VAR_11->func_wsarecvfrom = VAR_9;
  VAR_11->send_queue_size = 0;
  VAR_11->send_queue_count = 0;
  FUNC_1(&VAR_11->recv_req, VAR_7);
  VAR_11->recv_req.data = VAR_11;





  if (VAR_13 != VAR_2) {
    SOCKET VAR_14;
    DWORD VAR_15;

    VAR_14 = FUNC_4(VAR_13, VAR_4, 0);
    if (VAR_14 == VAR_3) {
      VAR_15 = FUNC_2();
      FUNC_0(&VAR_11->handle_queue);
      return FUNC_6(VAR_15);
    }

    VAR_15 = FUNC_7(VAR_11->loop, VAR_11, VAR_14, VAR_13);
    if (VAR_15) {
      FUNC_3(VAR_14);
      FUNC_0(&VAR_11->handle_queue);
      return FUNC_6(VAR_15);
    }
  }

  return 0;
}
