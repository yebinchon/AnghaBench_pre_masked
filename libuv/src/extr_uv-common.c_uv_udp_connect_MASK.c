
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; int flags; } ;
typedef TYPE_1__ uv_udp_t ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_1__*,struct sockaddr const*,unsigned int) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(uv_udp_t* VAR_7, const struct sockaddr* VAR_8) {
  unsigned int VAR_9;

  if (VAR_7->type != VAR_6)
    return VAR_2;


  if (VAR_8 == ((void*)0)) {
    if (!(VAR_7->flags & VAR_5))
      return VAR_4;

    return FUNC_1(VAR_7);
  }

  if (VAR_8->sa_family == VAR_0)
    VAR_9 = sizeof(struct sockaddr_in);
  else if (VAR_8->sa_family == VAR_1)
    VAR_9 = sizeof(struct sockaddr_in6);
  else
    return VAR_2;

  if (VAR_7->flags & VAR_5)
    return VAR_3;

  return FUNC_0(VAR_7, VAR_8, VAR_9);
}
