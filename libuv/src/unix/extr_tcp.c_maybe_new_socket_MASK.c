
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned long flags; } ;
typedef TYPE_1__ uv_tcp_t ;
struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr_in6 {scalar_t__ sin6_port; } ;
struct sockaddr_in {scalar_t__ sin_port; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int saddr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int*) ;
 int FUNC_3 (struct sockaddr_storage*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int,unsigned long) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(uv_tcp_t* VAR_5, int VAR_6, unsigned long VAR_7) {
  struct sockaddr_storage VAR_8;
  socklen_t VAR_9;

  if (VAR_6 == VAR_2) {
    VAR_5->flags |= VAR_7;
    return 0;
  }

  if (FUNC_5(VAR_5) != -1) {

    if (VAR_7 & VAR_3) {

      if (VAR_5->flags & VAR_3) {

        VAR_5->flags |= VAR_7;
        return 0;
      }


      VAR_9 = sizeof(VAR_8);
      FUNC_3(&VAR_8, 0, sizeof(VAR_8));
      if (FUNC_2(FUNC_5(VAR_5), (struct sockaddr*) &VAR_8, &VAR_9))
        return FUNC_0(VAR_4);

      if ((VAR_8.ss_family == VAR_1 &&
          ((struct sockaddr_in6*) &VAR_8)->sin6_port != 0) ||
          (VAR_8.ss_family == VAR_0 &&
          ((struct sockaddr_in*) &VAR_8)->sin_port != 0)) {

        VAR_5->flags |= VAR_7;
        return 0;
      }


      if (FUNC_1(FUNC_5(VAR_5), (struct sockaddr*) &VAR_8, VAR_9))
        return FUNC_0(VAR_4);
    }

    VAR_5->flags |= VAR_7;
    return 0;
  }

  return FUNC_4(VAR_5, VAR_6, VAR_7);
}
