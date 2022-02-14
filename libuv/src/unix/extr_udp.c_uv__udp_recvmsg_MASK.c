
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int fd; } ;
struct TYPE_16__ {int (* recv_cb ) (TYPE_2__*,int,TYPE_3__*,struct sockaddr const*,int) ;TYPE_1__ io_watcher; int (* alloc_cb ) (int *,int,TYPE_3__*) ;} ;
typedef TYPE_2__ uv_udp_t ;
typedef int uv_handle_t ;
struct TYPE_17__ {scalar_t__ len; int * base; } ;
typedef TYPE_3__ uv_buf_t ;
struct sockaddr_storage {int msg_namelen; int msg_iovlen; int msg_flags; void* msg_iov; struct sockaddr_storage* msg_name; } ;
struct sockaddr {int dummy; } ;
struct msghdr {int msg_namelen; int msg_iovlen; int msg_flags; void* msg_iov; struct msghdr* msg_name; } ;
typedef int ssize_t ;
typedef int peer ;
typedef int h ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct sockaddr_storage*,int ,int) ;
 int FUNC_3 (int,struct sockaddr_storage*,int ) ;
 int FUNC_4 (int *,int,TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,int,TYPE_3__*,struct sockaddr const*,int) ;
 int FUNC_6 (TYPE_2__*,int,TYPE_3__*,struct sockaddr const*,int) ;
 int FUNC_7 (TYPE_2__*,int,TYPE_3__*,struct sockaddr const*,int) ;
 int FUNC_8 (TYPE_2__*,int,TYPE_3__*,struct sockaddr const*,int) ;
 TYPE_3__ FUNC_9 (int *,int ) ;

__attribute__((used)) static void FUNC_10(uv_udp_t* VAR_7) {
  struct sockaddr_storage VAR_8;
  struct msghdr VAR_9;
  ssize_t VAR_10;
  uv_buf_t VAR_11;
  int VAR_12;
  int VAR_13;

  FUNC_1(VAR_7->recv_cb != ((void*)0));
  FUNC_1(VAR_7->alloc_cb != ((void*)0));




  VAR_13 = 32;

  do {
    VAR_11 = FUNC_9(((void*)0), 0);
    VAR_7->alloc_cb((uv_handle_t*) VAR_7, 64 * 1024, &VAR_11);
    if (VAR_11.base == ((void*)0) || VAR_11.len == 0) {
      VAR_7->recv_cb(VAR_7, VAR_4, &VAR_11, ((void*)0), 0);
      return;
    }
    FUNC_1(VAR_11.base != ((void*)0));

    FUNC_2(&VAR_9, 0, sizeof(VAR_9));
    FUNC_2(&VAR_8, 0, sizeof(VAR_8));
    VAR_9.msg_name = &VAR_8;
    VAR_9.msg_namelen = sizeof(VAR_8);
    VAR_9.msg_iov = (void*) &VAR_11;
    VAR_9.msg_iovlen = 1;

    do {
      VAR_10 = FUNC_3(VAR_7->io_watcher.fd, &VAR_9, 0);
    }
    while (VAR_10 == -1 && VAR_6 == VAR_1);

    if (VAR_10 == -1) {
      if (VAR_6 == VAR_0 || VAR_6 == VAR_2)
        VAR_7->recv_cb(VAR_7, 0, &VAR_11, ((void*)0), 0);
      else
        VAR_7->recv_cb(VAR_7, FUNC_0(VAR_6), &VAR_11, ((void*)0), 0);
    }
    else {
      VAR_12 = 0;
      if (VAR_9.msg_flags & VAR_3)
        VAR_12 |= VAR_5;

      VAR_7->recv_cb(VAR_7, VAR_10, &VAR_11, (const struct sockaddr*) &VAR_8, VAR_12);
    }
  }

  while (VAR_10 != -1
      && VAR_13-- > 0
      && VAR_7->io_watcher.fd != -1
      && VAR_7->recv_cb != ((void*)0));
}
