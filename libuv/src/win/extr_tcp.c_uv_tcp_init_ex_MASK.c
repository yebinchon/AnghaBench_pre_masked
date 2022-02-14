
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ processed_accepts; int * func_acceptex; int * pending_accepts; int * accept_reqs; } ;
struct TYPE_7__ {int * func_connectex; } ;
struct TYPE_9__ {TYPE_2__ serv; TYPE_1__ conn; } ;
struct TYPE_10__ {int handle_queue; int loop; scalar_t__ delayed_error; TYPE_3__ tcp; scalar_t__ reqs_pending; scalar_t__ socket; } ;
typedef TYPE_4__ uv_tcp_t ;
typedef int uv_stream_t ;
typedef int uv_loop_t ;
typedef scalar_t__ SOCKET ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 scalar_t__ FUNC_5 (int ,TYPE_4__*,scalar_t__,int,int ) ;
 int FUNC_6 (scalar_t__) ;

int FUNC_7(uv_loop_t* VAR_7, uv_tcp_t* VAR_8, unsigned int VAR_9) {
  int VAR_10;


  VAR_10 = VAR_9 & 0xFF;
  if (VAR_10 != VAR_0 && VAR_10 != VAR_1 && VAR_10 != VAR_2)
    return VAR_5;

  if (VAR_9 & ~0xFF)
    return VAR_5;

  FUNC_4(VAR_7, (uv_stream_t*) VAR_8, VAR_6);
  VAR_8->tcp.serv.accept_reqs = ((void*)0);
  VAR_8->tcp.serv.pending_accepts = ((void*)0);
  VAR_8->socket = VAR_3;
  VAR_8->reqs_pending = 0;
  VAR_8->tcp.serv.func_acceptex = ((void*)0);
  VAR_8->tcp.conn.func_connectex = ((void*)0);
  VAR_8->tcp.serv.processed_accepts = 0;
  VAR_8->delayed_error = 0;





  if (VAR_10 != VAR_2) {
    SOCKET VAR_11;
    DWORD VAR_12;

    VAR_11 = FUNC_3(VAR_10, VAR_4, 0);
    if (VAR_11 == VAR_3) {
      VAR_12 = FUNC_1();
      FUNC_0(&VAR_8->handle_queue);
      return FUNC_6(VAR_12);
    }

    VAR_12 = FUNC_5(VAR_8->loop, VAR_8, VAR_11, VAR_10, 0);
    if (VAR_12) {
      FUNC_2(VAR_11);
      FUNC_0(&VAR_8->handle_queue);
      return FUNC_6(VAR_12);
    }

  }

  return 0;
}
