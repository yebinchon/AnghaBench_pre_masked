
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ socket; int delayed_error; int flags; int loop; } ;
typedef TYPE_1__ uv_tcp_t ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef scalar_t__ SOCKET ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,struct sockaddr const*,unsigned int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,int ,char const*,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (int ,TYPE_1__*,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(uv_tcp_t* VAR_10,
                           const struct sockaddr* VAR_11,
                           unsigned int VAR_12,
                           unsigned int VAR_13) {
  DWORD VAR_14;
  int VAR_15;

  if (VAR_10->socket == VAR_2) {
    SOCKET VAR_16;


    if ((VAR_13 & VAR_8) && VAR_11->sa_family != VAR_0)
      return VAR_1;

    VAR_16 = FUNC_4(VAR_11->sa_family, VAR_6, 0);
    if (VAR_16 == VAR_2) {
      return FUNC_0();
    }

    VAR_14 = FUNC_5(VAR_10->loop, VAR_10, VAR_16, VAR_11->sa_family, 0);
    if (VAR_14) {
      FUNC_2(VAR_16);
      return VAR_14;
    }
  }
  VAR_15 = FUNC_1(VAR_10->socket, VAR_11, VAR_12);

  if (VAR_15 == VAR_5) {
    VAR_14 = FUNC_0();
    if (VAR_14 == VAR_9) {

      VAR_10->delayed_error = VAR_14;
    } else {
      return VAR_14;
    }
  }

  VAR_10->flags |= VAR_7;

  return 0;
}
