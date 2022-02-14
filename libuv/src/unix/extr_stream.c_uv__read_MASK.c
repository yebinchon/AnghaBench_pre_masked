
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_25__ {int flags; scalar_t__ type; int (* read_cb ) (TYPE_1__*,scalar_t__,TYPE_3__*) ;int io_watcher; int loop; int (* alloc_cb ) (int *,int,TYPE_3__*) ;} ;
typedef TYPE_1__ uv_stream_t ;
struct TYPE_26__ {scalar_t__ ipc; } ;
typedef TYPE_2__ uv_pipe_t ;
typedef int uv_handle_t ;
struct TYPE_27__ {scalar_t__ len; int * base; } ;
typedef TYPE_3__ uv_buf_t ;
struct msghdr {int msg_iovlen; int msg_controllen; char* msg_control; struct iovec* msg_iov; scalar_t__ msg_namelen; int * msg_name; scalar_t__ msg_flags; } ;
struct iovec {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int cmsg_space ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_3 (scalar_t__,int *,scalar_t__) ;
 int FUNC_4 (int *,int,TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*,int,TYPE_3__*) ;
 int FUNC_6 (TYPE_1__*,int,TYPE_3__*) ;
 int FUNC_7 (TYPE_1__*,int,TYPE_3__*) ;
 int FUNC_8 (TYPE_1__*,int,TYPE_3__*) ;
 int FUNC_9 (TYPE_1__*,int,TYPE_3__*) ;
 int FUNC_10 (TYPE_1__*,scalar_t__,TYPE_3__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int ,int *,int ) ;
 int FUNC_14 (int ,int *,int ) ;
 void* FUNC_15 (scalar_t__,struct msghdr*,int ) ;
 int FUNC_16 (TYPE_1__*,TYPE_3__*) ;
 scalar_t__ FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*,struct msghdr*) ;
 TYPE_3__ FUNC_20 (int *,int ) ;

__attribute__((used)) static void FUNC_21(uv_stream_t* VAR_13) {
  uv_buf_t VAR_14;
  ssize_t VAR_15;
  struct msghdr VAR_16;
  char VAR_17[FUNC_0(VAR_11)];
  int VAR_18;
  int VAR_19;
  int VAR_20;

  VAR_13->flags &= ~VAR_9;




  VAR_18 = 32;

  VAR_20 = VAR_13->type == VAR_10 && ((uv_pipe_t*) VAR_13)->ipc;




  while (VAR_13->read_cb
      && (VAR_13->flags & VAR_8)
      && (VAR_18-- > 0)) {
    FUNC_2(VAR_13->alloc_cb != ((void*)0));

    VAR_14 = FUNC_20(((void*)0), 0);
    VAR_13->alloc_cb((uv_handle_t*)VAR_13, 64 * 1024, &VAR_14);
    if (VAR_14.base == ((void*)0) || VAR_14.len == 0) {

      VAR_13->read_cb(VAR_13, VAR_7, &VAR_14);
      return;
    }

    FUNC_2(VAR_14.base != ((void*)0));
    FUNC_2(FUNC_17(VAR_13) >= 0);

    if (!VAR_20) {
      do {
        VAR_15 = FUNC_3(FUNC_17(VAR_13), VAR_14.base, VAR_14.len);
      }
      while (VAR_15 < 0 && VAR_12 == VAR_2);
    } else {

      VAR_16.msg_flags = 0;
      VAR_16.msg_iov = (struct iovec*) &VAR_14;
      VAR_16.msg_iovlen = 1;
      VAR_16.msg_name = ((void*)0);
      VAR_16.msg_namelen = 0;

      VAR_16.msg_controllen = sizeof(VAR_17);
      VAR_16.msg_control = VAR_17;

      do {
        VAR_15 = FUNC_15(FUNC_17(VAR_13), &VAR_16, 0);
      }
      while (VAR_15 < 0 && VAR_12 == VAR_2);
    }

    if (VAR_15 < 0) {

      if (VAR_12 == VAR_0 || VAR_12 == VAR_3) {

        if (VAR_13->flags & VAR_8) {
          FUNC_13(VAR_13->loop, &VAR_13->io_watcher, VAR_4);
          FUNC_18(VAR_13);
        }
        VAR_13->read_cb(VAR_13, 0, &VAR_14);
      } else {

        VAR_13->read_cb(VAR_13, FUNC_1(VAR_12), &VAR_14);
        if (VAR_13->flags & VAR_8) {
          VAR_13->flags &= ~VAR_8;
          FUNC_14(VAR_13->loop, &VAR_13->io_watcher, VAR_4);
          if (!FUNC_12(&VAR_13->io_watcher, VAR_5))
            FUNC_11(VAR_13);
          FUNC_18(VAR_13);
        }
      }
      return;
    } else if (VAR_15 == 0) {
      FUNC_16(VAR_13, &VAR_14);
      return;
    } else {

      ssize_t VAR_21 = VAR_14.len;

      if (VAR_20) {
        VAR_19 = FUNC_19(VAR_13, &VAR_16);
        if (VAR_19 != 0) {
          VAR_13->read_cb(VAR_13, VAR_19, &VAR_14);
          return;
        }
      }
      VAR_13->read_cb(VAR_13, VAR_15, &VAR_14);


      if (VAR_15 < VAR_21) {
        VAR_13->flags |= VAR_9;
        return;
      }
    }
  }
}
