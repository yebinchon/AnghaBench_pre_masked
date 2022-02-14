
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; scalar_t__ socket; int loop; } ;
typedef TYPE_1__ uv_udp_t ;
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,struct sockaddr const*,unsigned int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,int ,char*,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (int ,TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_6(uv_udp_t* VAR_13,
                             const struct sockaddr* VAR_14,
                             unsigned int VAR_15,
                             unsigned int VAR_16) {
  int VAR_17;
  int VAR_18;
  DWORD VAR_19 = 0;

  if (VAR_13->flags & VAR_9)
    return 0;

  if ((VAR_16 & VAR_11) && VAR_14->sa_family != VAR_0) {

    return VAR_1;
  }

  if (VAR_13->socket == VAR_2) {
    SOCKET VAR_20 = FUNC_4(VAR_14->sa_family, VAR_6, 0);
    if (VAR_20 == VAR_2) {
      return FUNC_0();
    }

    VAR_18 = FUNC_5(VAR_13->loop, VAR_13, VAR_20, VAR_14->sa_family);
    if (VAR_18) {
      FUNC_2(VAR_20);
      return VAR_18;
    }
  }

  if (VAR_16 & VAR_12) {
    DWORD VAR_21 = 1;

    if (FUNC_3(VAR_13->socket,
                   VAR_7,
                   VAR_8,
                   (char*) &VAR_21,
                   sizeof VAR_21) == VAR_5) {
      VAR_18 = FUNC_0();
      return VAR_18;
    }
  }

  if (VAR_14->sa_family == VAR_0)
    VAR_13->flags |= VAR_10;

  if (VAR_14->sa_family == VAR_0 && !(VAR_16 & VAR_11)) {






    FUNC_3(VAR_13->socket,
               VAR_3,
               VAR_4,
               (char*) &VAR_19,
               sizeof VAR_19);
  }

  VAR_17 = FUNC_1(VAR_13->socket, VAR_14, VAR_15);
  if (VAR_17 == VAR_5) {
    return FUNC_0();
  }

  VAR_13->flags |= VAR_9;

  return 0;
}
