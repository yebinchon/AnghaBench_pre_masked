
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_in6 {int dummy; } ;
struct in6_addr {int dummy; } ;
struct TYPE_3__ {int sin6_len; struct in6_addr sin6_addr; void* sin6_family; } ;
struct TYPE_4__ {int sin6_len; struct in6_addr sin6_addr; void* sin6_family; } ;
struct in6_aliasreq {TYPE_1__ ifra_prefixmask; TYPE_2__ ifra_addr; } ;


 void* VAR_0 ;
 int FUNC_0 (struct in6_aliasreq*,int ,int) ;

void
FUNC_1(struct in6_aliasreq *VAR_1, const struct in6_addr *VAR_2,
    const struct in6_addr *VAR_3)
{

 FUNC_0(VAR_1, 0, sizeof(struct in6_aliasreq));

 VAR_1->ifra_addr.sin6_family = VAR_0;
 VAR_1->ifra_addr.sin6_len = sizeof(struct sockaddr_in6);
 if (VAR_2 != ((void*)0))
  VAR_1->ifra_addr.sin6_addr = *VAR_2;

 VAR_1->ifra_prefixmask.sin6_family = VAR_0;
 VAR_1->ifra_prefixmask.sin6_len = sizeof(struct sockaddr_in6);
 if (VAR_3 != ((void*)0))
  VAR_1->ifra_prefixmask.sin6_addr = *VAR_3;
}
