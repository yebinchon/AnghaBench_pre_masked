
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {int const sin_family; TYPE_2__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct TYPE_3__ {int s_addr; } ;
struct ncprange {int ncprange_family; int ncprange_ip4width; int ncprange_ip6width; int ncprange_ip6addr; TYPE_1__ ncprange_ip4mask; TYPE_2__ ncprange_ip4addr; } ;




 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct ncprange *VAR_3, const struct sockaddr *VAR_4,
               const struct sockaddr *VAR_5)
{
  const struct sockaddr_in *VAR_6 = (const struct sockaddr_in *)VAR_4;
  const struct sockaddr_in *VAR_7 = (const struct sockaddr_in *)VAR_5;

  const struct sockaddr_in6 *VAR_8 = (const struct sockaddr_in6 *)VAR_4;
  const struct sockaddr_in6 *VAR_9 = (const struct sockaddr_in6 *)VAR_5;


  switch (VAR_4->sa_family) {
  case 129:
    VAR_3->ncprange_family = 129;
    VAR_3->ncprange_ip4addr = VAR_6->sin_addr;
    if (VAR_6->sin_addr.s_addr == VAR_1) {
      VAR_3->ncprange_ip4mask.s_addr = VAR_1;
      VAR_3->ncprange_ip4width = 0;
    } else if (VAR_7 && VAR_7->sin_family == 129) {
      VAR_3->ncprange_ip4mask.s_addr = VAR_7->sin_addr.s_addr;
      VAR_3->ncprange_ip4width = FUNC_1(VAR_7->sin_addr);
    } else {
      VAR_3->ncprange_ip4mask.s_addr = VAR_2;
      VAR_3->ncprange_ip4width = 32;
    }
    break;


  case 128:
    VAR_3->ncprange_family = 128;
    VAR_3->ncprange_ip6addr = VAR_8->sin6_addr;
    if (FUNC_0(&VAR_8->sin6_addr))
      VAR_3->ncprange_ip6width = 0;
    else
      VAR_3->ncprange_ip6width = VAR_9 ? FUNC_2(&VAR_9->sin6_addr) : 128;
    break;


  default:
    VAR_3->ncprange_family = VAR_0;
  }
}
