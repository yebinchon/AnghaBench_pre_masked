
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_4__ {int s6_addr; } ;
struct sockaddr_in6 {TYPE_2__ sin6_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct ncpaddr {int ncpaddr_family; TYPE_2__ ncpaddr_ip6addr; TYPE_1__ ncpaddr_ip4addr; } ;




 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

void
FUNC_1(struct ncpaddr *VAR_1, const struct sockaddr *VAR_2)
{
  const struct sockaddr_in *VAR_3 = (const struct sockaddr_in *)VAR_2;

  const struct sockaddr_in6 *VAR_4 = (const struct sockaddr_in6 *)VAR_2;


  switch (VAR_2->sa_family) {
  case 129:
    VAR_1->ncpaddr_family = 129;
    VAR_1->ncpaddr_ip4addr = VAR_3->sin_addr;
    break;


  case 128:
    if (FUNC_0(&VAR_4->sin6_addr)) {
      VAR_1->ncpaddr_family = 129;
      VAR_1->ncpaddr_ip4addr.s_addr =
        *(const u_int32_t *)(VAR_4->sin6_addr.s6_addr + 12);
    } else {
      VAR_1->ncpaddr_family = 128;
      VAR_1->ncpaddr_ip6addr = VAR_4->sin6_addr;
    }
    break;


  default:
    VAR_1->ncpaddr_family = VAR_0;
  }
}
