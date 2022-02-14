
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ s_addr; } ;
struct TYPE_4__ {scalar_t__ s_addr; } ;
struct in_conninfo {TYPE_3__ inc_faddr; TYPE_1__ inc_laddr; } ;
struct TYPE_5__ {scalar_t__ s_addr; } ;
struct hitem {int onoff; TYPE_2__ addr; } ;


 struct hitem* VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct in_conninfo *VAR_2)
{
 struct hitem *VAR_3;

 if (VAR_0)
 for (VAR_3 = VAR_0; VAR_3 < VAR_0+VAR_1; VAR_3++)
  if (VAR_3->addr.s_addr == VAR_2->inc_laddr.s_addr ||
      VAR_3->addr.s_addr == VAR_2->inc_faddr.s_addr)
   return (VAR_3->onoff);
 return (1);
}
