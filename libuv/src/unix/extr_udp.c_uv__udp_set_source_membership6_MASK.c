
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; } ;
struct TYPE_6__ {TYPE_1__ io_watcher; } ;
typedef TYPE_2__ uv_udp_t ;
typedef scalar_t__ uv_membership ;
struct sockaddr_in6 {scalar_t__ sin6_scope_id; } ;
struct group_source_req {int gsr_source; int gsr_group; scalar_t__ gsr_interface; } ;
typedef int mreq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 (int *,struct sockaddr_in6 const*,int) ;
 int FUNC_2 (struct group_source_req*,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ,int,struct group_source_req*,int) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (char const*,int ,struct sockaddr_in6*) ;

__attribute__((used)) static int FUNC_6(uv_udp_t* VAR_9,
                                          const struct sockaddr_in6* VAR_10,
                                          const char* VAR_11,
                                          const struct sockaddr_in6* VAR_12,
                                          uv_membership VAR_13) {
  struct group_source_req VAR_14;
  struct sockaddr_in6 VAR_15;
  int VAR_16;
  int VAR_17;

  VAR_17 = FUNC_4(VAR_9, VAR_0, VAR_7);
  if (VAR_17)
    return VAR_17;

  FUNC_2(&VAR_14, 0, sizeof(VAR_14));

  if (VAR_11 != ((void*)0)) {
    VAR_17 = FUNC_5(VAR_11, 0, &VAR_15);
    if (VAR_17)
      return VAR_17;
    VAR_14.gsr_interface = VAR_15;
  } else {
    VAR_14.gsr_interface = 0;
  }

  FUNC_1(&VAR_14.gsr_group, VAR_10, sizeof(VAR_14.gsr_group));
  FUNC_1(&VAR_14.gsr_source, VAR_12, sizeof(VAR_14.gsr_source));

  if (VAR_13 == VAR_5)
    VAR_16 = VAR_2;
  else if (VAR_13 == VAR_6)
    VAR_16 = VAR_3;
  else
    return VAR_4;

  if (FUNC_3(VAR_9->io_watcher.fd,
                 VAR_1,
                 VAR_16,
                 &VAR_14,
                 sizeof(VAR_14))) {
    return FUNC_0(VAR_8);
  }

  return 0;
}
