
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; } ;
struct TYPE_6__ {int delayed_error; int flags; TYPE_1__ io_watcher; } ;
typedef TYPE_2__ uv_tcp_t ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef int on ;


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
 int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,struct sockaddr const*,unsigned int) ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_3 (int ,int ,int ,int*,int) ;

int FUNC_4(uv_tcp_t* VAR_13,
                 const struct sockaddr* VAR_14,
                 unsigned int VAR_15,
                 unsigned int VAR_16) {
  int VAR_17;
  int VAR_18;


  if ((VAR_16 & VAR_11) && VAR_14->sa_family != VAR_0)
    return VAR_8;

  VAR_17 = FUNC_2(VAR_13, VAR_14->sa_family, 0);
  if (VAR_17)
    return VAR_17;

  VAR_18 = 1;
  if (FUNC_3(VAR_13->io_watcher.fd, VAR_6, VAR_7, &VAR_18, sizeof(VAR_18)))
    return FUNC_0(VAR_12);
  VAR_12 = 0;
  if (FUNC_1(VAR_13->io_watcher.fd, VAR_14, VAR_15) && VAR_12 != VAR_1) {
    if (VAR_12 == VAR_2)


      return VAR_8;
    return FUNC_0(VAR_12);
  }
  VAR_13->delayed_error = FUNC_0(VAR_12);

  VAR_13->flags |= VAR_9;
  if (VAR_14->sa_family == VAR_0)
    VAR_13->flags |= VAR_10;

  return 0;
}
