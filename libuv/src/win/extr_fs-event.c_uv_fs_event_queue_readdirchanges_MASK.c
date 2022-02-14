
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uv_req_t ;
typedef int uv_loop_t ;
struct TYPE_6__ {int overlapped; } ;
struct TYPE_7__ {TYPE_1__ io; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
struct TYPE_8__ {scalar_t__ dir_handle; int req_pending; int flags; TYPE_5__ req; int buffer; } ;
typedef TYPE_3__ uv_fs_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (scalar_t__,int ,int ,int ,int,int *,int *,int *) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int) ;
 int VAR_12 ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void FUNC_6(uv_loop_t* VAR_13,
    uv_fs_event_t* VAR_14) {
  FUNC_3(VAR_14->dir_handle != VAR_9);
  FUNC_3(!VAR_14->req_pending);

  FUNC_4(&(VAR_14->req.u.io.overlapped), 0,
         sizeof(VAR_14->req.u.io.overlapped));
  if (!FUNC_1(VAR_14->dir_handle,
                             VAR_14->buffer,
                             VAR_12,
                             (VAR_14->flags & VAR_11) ? VAR_10 : VAR_0,
                             VAR_4 |
                               VAR_3 |
                               VAR_1 |
                               VAR_8 |
                               VAR_6 |
                               VAR_5 |
                               VAR_2 |
                               VAR_7,
                             ((void*)0),
                             &VAR_14->req.u.io.overlapped,
                             ((void*)0))) {

    FUNC_2(&VAR_14->req, FUNC_0());
    FUNC_5(VAR_13, (uv_req_t*)&VAR_14->req);
  }

  VAR_14->req_pending = 1;
}
