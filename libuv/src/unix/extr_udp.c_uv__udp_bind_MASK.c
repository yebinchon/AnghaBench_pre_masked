
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; } ;
struct TYPE_5__ {int flags; TYPE_1__ io_watcher; } ;
typedef TYPE_2__ uv_udp_t ;
struct sockaddr {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int,struct sockaddr const*,unsigned int) ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int,int ,int ,int*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,int ,int ) ;

int FUNC_5(uv_udp_t* VAR_12,
                 const struct sockaddr* VAR_13,
                 unsigned int VAR_14,
                 unsigned int VAR_15) {
  int VAR_16;
  int VAR_17;
  int VAR_18;


  if (VAR_15 & ~(VAR_9 | VAR_10))
    return VAR_5;


  if ((VAR_15 & VAR_9) && VAR_13->sa_family != VAR_0)
    return VAR_5;

  VAR_18 = VAR_12->io_watcher.fd;
  if (VAR_18 == -1) {
    VAR_16 = FUNC_4(VAR_13->sa_family, VAR_4, 0);
    if (VAR_16 < 0)
      return VAR_16;
    VAR_18 = VAR_16;
    VAR_12->io_watcher.fd = VAR_18;
  }

  if (VAR_15 & VAR_10) {
    VAR_16 = FUNC_3(VAR_18);
    if (VAR_16)
      return VAR_16;
  }

  if (VAR_15 & VAR_9) {







    VAR_16 = VAR_6;
    return VAR_16;

  }

  if (FUNC_1(VAR_18, VAR_13, VAR_14)) {
    VAR_16 = FUNC_0(VAR_11);
    if (VAR_11 == VAR_1)


      VAR_16 = VAR_5;
    return VAR_16;
  }

  if (VAR_13->sa_family == VAR_0)
    VAR_12->flags |= VAR_8;

  VAR_12->flags |= VAR_7;
  return 0;
}
