
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;


struct TYPE_37__ {scalar_t__ len; int * base; } ;
struct TYPE_35__ {scalar_t__ type; int flags; int (* recv_cb ) (TYPE_4__*,scalar_t__,TYPE_6__*,struct sockaddr const*,int ) ;int socket; int (* alloc_cb ) (int *,int,TYPE_6__*) ;int recv_from; TYPE_6__ recv_buffer; } ;
typedef TYPE_4__ uv_udp_t ;
struct TYPE_32__ {scalar_t__ InternalHigh; } ;
struct TYPE_33__ {TYPE_1__ overlapped; } ;
struct TYPE_34__ {TYPE_2__ io; } ;
struct TYPE_36__ {TYPE_3__ u; } ;
typedef TYPE_5__ uv_req_t ;
typedef int uv_loop_t ;
typedef int uv_handle_t ;
typedef TYPE_6__ uv_buf_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int WSABUF ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int *,int,scalar_t__*,scalar_t__*,struct sockaddr*,int*,int *,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct sockaddr_storage*,int ,int) ;
 int FUNC_7 (TYPE_4__*,scalar_t__,TYPE_6__*,struct sockaddr const*,int ) ;
 int FUNC_8 (TYPE_4__*,scalar_t__,TYPE_6__*,struct sockaddr const*,int ) ;
 int FUNC_9 (int *,int,TYPE_6__*) ;
 int FUNC_10 (TYPE_4__*,scalar_t__,TYPE_6__*,struct sockaddr const*,int ) ;
 int FUNC_11 (TYPE_4__*,scalar_t__,TYPE_6__*,struct sockaddr const*,int ) ;
 int FUNC_12 (TYPE_4__*,scalar_t__,TYPE_6__*,struct sockaddr const*,int ) ;
 int FUNC_13 (TYPE_4__*,scalar_t__,TYPE_6__*,struct sockaddr const*,int ) ;
 int FUNC_14 (TYPE_4__*,scalar_t__,TYPE_6__*,struct sockaddr const*,int ) ;
 int FUNC_15 (TYPE_4__*,scalar_t__,TYPE_6__*,struct sockaddr const*,int ) ;
 TYPE_6__ FUNC_16 (int *,int ) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 int FUNC_18 (int *,TYPE_4__*) ;
 int FUNC_19 (TYPE_4__*) ;

void FUNC_20(uv_loop_t* VAR_11, uv_udp_t* VAR_12,
    uv_req_t* VAR_13) {
  uv_buf_t VAR_14;
  int VAR_15;

  FUNC_5(VAR_12->type == VAR_5);

  VAR_12->flags &= ~VAR_3;

  if (!FUNC_2(VAR_13)) {
    DWORD VAR_16 = FUNC_1(VAR_13);
    if (VAR_16 == VAR_8) {


    } else if (VAR_16 == VAR_7 || VAR_16 == VAR_9) {




      if (!(VAR_12->flags & VAR_4)) {
        goto done;
      }
    } else {


      if (VAR_12->flags & VAR_2) {
        FUNC_19(VAR_12);
        VAR_14 = (VAR_12->flags & VAR_4) ?
              FUNC_16(((void*)0), 0) : VAR_12->recv_buffer;
        VAR_12->recv_cb(VAR_12, FUNC_17(VAR_16), &VAR_14, ((void*)0), 0);
      }
      goto done;
    }
  }

  if (!(VAR_12->flags & VAR_4)) {

    VAR_15 = !FUNC_2(VAR_13);
    VAR_12->recv_cb(VAR_12,
                    VAR_13->u.io.overlapped.InternalHigh,
                    &VAR_12->recv_buffer,
                    (const struct sockaddr*) &VAR_12->recv_from,
                    VAR_15 ? VAR_6 : 0);
  } else if (VAR_12->flags & VAR_2) {
    DWORD VAR_17, VAR_18, VAR_19;
    struct sockaddr_storage VAR_20;
    int VAR_21;



    VAR_14 = FUNC_16(((void*)0), 0);
    VAR_12->alloc_cb((uv_handle_t*) VAR_12, 65536, &VAR_14);
    if (VAR_14.base == ((void*)0) || VAR_14.len == 0) {
      VAR_12->recv_cb(VAR_12, VAR_1, &VAR_14, ((void*)0), 0);
      goto done;
    }
    FUNC_5(VAR_14.base != ((void*)0));

    FUNC_6(&VAR_20, 0, sizeof VAR_20);
    VAR_21 = sizeof VAR_20;

    VAR_19 = 0;

    if (FUNC_4(VAR_12->socket,
                    (WSABUF*)&VAR_14,
                    1,
                    &VAR_17,
                    &VAR_19,
                    (struct sockaddr*) &VAR_20,
                    &VAR_21,
                    ((void*)0),
                    ((void*)0)) != VAR_0) {


      VAR_12->recv_cb(VAR_12, VAR_17, &VAR_14, (const struct sockaddr*) &VAR_20, 0);
    } else {
      VAR_18 = FUNC_3();
      if (VAR_18 == VAR_8) {

        VAR_12->recv_cb(VAR_12,
                        VAR_17,
                        &VAR_14,
                        (const struct sockaddr*) &VAR_20,
                        VAR_6);
      } else if (VAR_18 == VAR_10) {

        VAR_12->recv_cb(VAR_12, 0, &VAR_14, ((void*)0), 0);
      } else if (VAR_18 == VAR_7 || VAR_18 == VAR_9) {



        VAR_12->recv_cb(VAR_12, 0, &VAR_14, ((void*)0), 0);
      } else {

        FUNC_19(VAR_12);
        VAR_12->recv_cb(VAR_12, FUNC_17(VAR_18), &VAR_14, ((void*)0), 0);
      }
    }
  }

done:

  if ((VAR_12->flags & VAR_2) &&
      !(VAR_12->flags & VAR_3)) {
    FUNC_18(VAR_11, VAR_12);
  }

  FUNC_0(VAR_12);
}
