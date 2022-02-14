
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int ifid; } ;
struct TYPE_4__ {TYPE_1__ ipv6; } ;
struct radacct {TYPE_2__ peer; int proto; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;

void
FUNC_1(struct radacct *VAR_1, u_char *VAR_2)
{
  VAR_1->proto = VAR_0;
  FUNC_0(&VAR_1->peer.ipv6.ifid, VAR_2, sizeof(VAR_1->peer.ipv6.ifid));
}
