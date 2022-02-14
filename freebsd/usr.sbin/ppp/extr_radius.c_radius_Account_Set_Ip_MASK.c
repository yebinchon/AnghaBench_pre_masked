
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mask; int addr; } ;
struct TYPE_4__ {TYPE_1__ ip; } ;
struct radacct {TYPE_2__ peer; int proto; } ;
struct in_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct in_addr*,int) ;

void
FUNC_1(struct radacct *VAR_1, struct in_addr *VAR_2,
        struct in_addr *VAR_3)
{
  VAR_1->proto = VAR_0;
  FUNC_0(&VAR_1->peer.ip.addr, VAR_2, sizeof(VAR_1->peer.ip.addr));
  FUNC_0(&VAR_1->peer.ip.mask, VAR_3, sizeof(VAR_1->peer.ip.mask));
}
