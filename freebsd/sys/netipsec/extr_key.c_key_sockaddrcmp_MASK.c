
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int sa_family; scalar_t__ sa_len; } ;
struct TYPE_4__ {int s_addr; } ;
struct TYPE_6__ {int sin_port; TYPE_1__ sin_addr; } ;
struct TYPE_5__ {int sin6_port; int sin6_addr; int sin6_scope_id; } ;




 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct sockaddr const*,struct sockaddr const*,int) ;
 TYPE_3__* FUNC_2 (struct sockaddr const*) ;
 TYPE_2__* FUNC_3 (struct sockaddr const*) ;

int
FUNC_4(const struct sockaddr *VAR_0, const struct sockaddr *VAR_1,
    int VAR_2)
{
 if (VAR_0->sa_family != VAR_1->sa_family || VAR_0->sa_len != VAR_1->sa_len)
  return 1;

 switch (VAR_0->sa_family) {
 default:
  if (FUNC_1(VAR_0, VAR_1, VAR_0->sa_len) != 0)
   return 1;
  break;
 }

 return 0;
}
