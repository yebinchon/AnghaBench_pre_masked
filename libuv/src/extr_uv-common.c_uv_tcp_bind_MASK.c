
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ uv_tcp_t ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,struct sockaddr const*,unsigned int,unsigned int) ;

int FUNC_1(uv_tcp_t* VAR_4,
                const struct sockaddr* VAR_5,
                unsigned int VAR_6) {
  unsigned int VAR_7;

  if (VAR_4->type != VAR_3)
    return VAR_2;

  if (VAR_5->sa_family == VAR_0)
    VAR_7 = sizeof(struct sockaddr_in);
  else if (VAR_5->sa_family == VAR_1)
    VAR_7 = sizeof(struct sockaddr_in6);
  else
    return VAR_2;

  return FUNC_0(VAR_4, VAR_5, VAR_7, VAR_6);
}
