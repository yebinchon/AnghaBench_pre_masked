
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; } ;
struct TYPE_6__ {scalar_t__ send_queue_count; int flags; TYPE_1__ io_watcher; } ;
typedef TYPE_2__ uv_udp_t ;
typedef int uv_buf_t ;
struct sockaddr {int sa_family; } ;
struct msghdr {unsigned int msg_namelen; unsigned int msg_iovlen; struct iovec* msg_iov; struct sockaddr* msg_name; } ;
struct iovec {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct msghdr*,int ,int) ;
 int FUNC_3 (int ,struct msghdr*,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;

int FUNC_5(uv_udp_t* VAR_7,
                     const uv_buf_t VAR_8[],
                     unsigned int VAR_9,
                     const struct sockaddr* VAR_10,
                     unsigned int VAR_11) {
  int VAR_12;
  struct msghdr VAR_13;
  ssize_t VAR_14;

  FUNC_1(VAR_9 > 0);


  if (VAR_7->send_queue_count != 0)
    return VAR_4;

  if (VAR_10) {
    VAR_12 = FUNC_4(VAR_7, VAR_10->sa_family, 0);
    if (VAR_12)
      return VAR_12;
  } else {
    FUNC_1(VAR_7->flags & VAR_5);
  }

  FUNC_2(&VAR_13, 0, sizeof VAR_13);
  VAR_13.msg_name = (struct sockaddr*) VAR_10;
  VAR_13.msg_namelen = VAR_11;
  VAR_13.msg_iov = (struct iovec*) VAR_8;
  VAR_13.msg_iovlen = VAR_9;

  do {
    VAR_14 = FUNC_3(VAR_7->io_watcher.fd, &VAR_13, 0);
  } while (VAR_14 == -1 && VAR_6 == VAR_1);

  if (VAR_14 == -1) {
    if (VAR_6 == VAR_0 || VAR_6 == VAR_3 || VAR_6 == VAR_2)
      return VAR_4;
    else
      return FUNC_0(VAR_6);
  }

  return VAR_14;
}
