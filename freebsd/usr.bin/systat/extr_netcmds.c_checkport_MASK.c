
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pitem {scalar_t__ port; int onoff; } ;
struct in_conninfo {scalar_t__ inc_lport; scalar_t__ inc_fport; } ;


 int VAR_0 ;
 struct pitem* VAR_1 ;

int
FUNC_0(struct in_conninfo *VAR_2)
{
 struct pitem *VAR_3;

 if (VAR_1)
 for (VAR_3 = VAR_1; VAR_3 < VAR_1+VAR_0; VAR_3++)
  if (VAR_3->port == VAR_2->inc_lport || VAR_3->port == VAR_2->inc_fport)
   return (VAR_3->onoff);
 return (1);
}
