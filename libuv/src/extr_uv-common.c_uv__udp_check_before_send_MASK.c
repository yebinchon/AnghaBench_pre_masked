
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int flags; } ;
typedef TYPE_1__ uv_udp_t ;
struct sockaddr_un {int dummy; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

int FUNC_0(uv_udp_t* VAR_8, const struct sockaddr* VAR_9) {
  unsigned int VAR_10;

  if (VAR_8->type != VAR_7)
    return VAR_4;

  if (VAR_9 != ((void*)0) && (VAR_8->flags & VAR_6))
    return VAR_5;

  if (VAR_9 == ((void*)0) && !(VAR_8->flags & VAR_6))
    return VAR_3;

  if (VAR_9 != ((void*)0)) {
    if (VAR_9->sa_family == VAR_0)
      VAR_10 = sizeof(struct sockaddr_in);
    else if (VAR_9->sa_family == VAR_1)
      VAR_10 = sizeof(struct sockaddr_in6);




    else
      return VAR_4;
  } else {
    VAR_10 = 0;
  }

  return VAR_10;
}
