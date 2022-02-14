
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;


struct TYPE_23__ {scalar_t__ wait_handle; int * event_handle; } ;
struct TYPE_21__ {TYPE_7__* accept_reqs; } ;
struct TYPE_22__ {TYPE_3__ serv; } ;
struct TYPE_19__ {scalar_t__ write_reqs_pending; TYPE_13__* shutdown_req; } ;
struct TYPE_20__ {TYPE_1__ conn; } ;
struct TYPE_24__ {int flags; scalar_t__ reqs_pending; TYPE_5__ read_req; TYPE_4__ tcp; int socket; TYPE_2__ stream; } ;
typedef TYPE_6__ uv_tcp_t ;
struct TYPE_25__ {scalar_t__ wait_handle; int * event_handle; } ;
typedef TYPE_7__ uv_tcp_accept_t ;
struct TYPE_26__ {int active_tcp_streams; } ;
typedef TYPE_8__ uv_loop_t ;
struct TYPE_18__ {int (* cb ) (TYPE_13__*,int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_6__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_8__*,TYPE_6__*,TYPE_13__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_13__*,int ) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (TYPE_6__*) ;
 unsigned int VAR_10 ;
 int FUNC_11 (int) ;

void FUNC_12(uv_loop_t* VAR_11, uv_tcp_t* VAR_12) {
  int VAR_13;
  unsigned int VAR_14;
  uv_tcp_accept_t* VAR_15;

  if (VAR_12->flags & VAR_7 &&
      VAR_12->stream.conn.shutdown_req != ((void*)0) &&
      VAR_12->stream.conn.write_reqs_pending == 0) {

    FUNC_2(VAR_11, VAR_12, VAR_12->stream.conn.shutdown_req);

    VAR_13 = 0;
    if (VAR_12->flags & VAR_6) {
      VAR_13 = VAR_0;
    } else if (FUNC_7(VAR_12->socket, VAR_3) == VAR_4) {
      VAR_13 = FUNC_4();
    }

    if (VAR_12->stream.conn.shutdown_req->cb) {
      VAR_12->stream.conn.shutdown_req->cb(VAR_12->stream.conn.shutdown_req,
                               FUNC_11(VAR_13));
    }

    VAR_12->stream.conn.shutdown_req = ((void*)0);
    FUNC_1(VAR_12);
    return;
  }

  if (VAR_12->flags & VAR_6 &&
      VAR_12->reqs_pending == 0) {
    FUNC_5(!(VAR_12->flags & VAR_5));

    if (!(VAR_12->flags & VAR_9)) {
      FUNC_6(VAR_12->socket);
      VAR_12->socket = VAR_2;
      VAR_12->flags |= VAR_9;
    }

    if (!(VAR_12->flags & VAR_7) && VAR_12->tcp.serv.accept_reqs) {
      if (VAR_12->flags & VAR_8) {
        for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
          VAR_15 = &VAR_12->tcp.serv.accept_reqs[VAR_14];
          if (VAR_15->wait_handle != VAR_1) {
            FUNC_3(VAR_15->wait_handle);
            VAR_15->wait_handle = VAR_1;
          }
          if (VAR_15->event_handle) {
            FUNC_0(VAR_15->event_handle);
            VAR_15->event_handle = ((void*)0);
          }
        }
      }

      FUNC_9(VAR_12->tcp.serv.accept_reqs);
      VAR_12->tcp.serv.accept_reqs = ((void*)0);
    }

    if (VAR_12->flags & VAR_7 &&
        VAR_12->flags & VAR_8) {
      if (VAR_12->read_req.wait_handle != VAR_1) {
        FUNC_3(VAR_12->read_req.wait_handle);
        VAR_12->read_req.wait_handle = VAR_1;
      }
      if (VAR_12->read_req.event_handle) {
        FUNC_0(VAR_12->read_req.event_handle);
        VAR_12->read_req.event_handle = ((void*)0);
      }
    }

    FUNC_10(VAR_12);
    VAR_11->active_tcp_streams--;
  }
}
