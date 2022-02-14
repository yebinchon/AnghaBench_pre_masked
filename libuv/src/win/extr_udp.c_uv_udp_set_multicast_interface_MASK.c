
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; scalar_t__ socket; } ;
typedef TYPE_2__ uv_udp_t ;
struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr_in6 {scalar_t__ sin6_scope_id; } ;
struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sockaddr_storage*,int ,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int ,char*,int) ;
 scalar_t__ FUNC_6 (char const*,int ,struct sockaddr_in*) ;
 scalar_t__ FUNC_7 (char const*,int ,struct sockaddr_in6*) ;
 int FUNC_8 (int ) ;

int FUNC_9(uv_udp_t* VAR_12, const char* VAR_13) {
  struct sockaddr_storage VAR_14;
  struct sockaddr_in* VAR_15;
  struct sockaddr_in6* VAR_16;

  VAR_15 = (struct sockaddr_in*) &VAR_14;
  VAR_16 = (struct sockaddr_in6*) &VAR_14;

  if (!VAR_13) {
    FUNC_4(&VAR_14, 0, sizeof VAR_14);
    if (VAR_12->flags & VAR_11) {
      VAR_14.ss_family = VAR_1;
      VAR_16->sin6_scope_id = 0;
    } else {
      VAR_14.ss_family = VAR_0;
      VAR_15->sin_addr.s_addr = FUNC_3(VAR_2);
    }
  } else if (FUNC_6(VAR_13, 0, VAR_15) == 0) {

  } else if (FUNC_7(VAR_13, 0, VAR_16) == 0) {

  } else {
    return VAR_10;
  }

  if (VAR_12->socket == VAR_3)
    return VAR_9;

  if (VAR_14.ss_family == VAR_0) {
    if (FUNC_5(VAR_12->socket,
                   VAR_4,
                   VAR_7,
                   (char*) &VAR_15->sin_addr,
                   sizeof(VAR_15->sin_addr)) == VAR_8) {
      return FUNC_8(FUNC_0());
    }
  } else if (VAR_14.ss_family == VAR_1) {
    if (FUNC_5(VAR_12->socket,
                   VAR_5,
                   VAR_6,
                   (char*) &VAR_16->sin6_scope_id,
                   sizeof(VAR_16->sin6_scope_id)) == VAR_8) {
      return FUNC_8(FUNC_0());
    }
  } else {
    FUNC_2(0 && "unexpected address family");
    FUNC_1();
  }

  return 0;
}
