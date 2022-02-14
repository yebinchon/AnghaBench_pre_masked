
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int dummy; } ;
struct TYPE_2__ {int rip6_metric; } ;
struct riprt {TYPE_1__ rrt_info; } ;
struct netinfo6 {scalar_t__ rip6_plen; int rip6_metric; int rip6_dest; } ;
struct ifc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct ifc*,struct sockaddr_in6*,int ) ;
 struct riprt* FUNC_3 (struct netinfo6*) ;
 int FUNC_4 (struct sockaddr_in6*,int ) ;
 int FUNC_5 (int,char*) ;

__attribute__((used)) static void
FUNC_6(struct ifc *VAR_2,
 struct netinfo6 *VAR_3,
 int VAR_4,
 struct sockaddr_in6 *VAR_5)
{
 int VAR_6;
 struct riprt *VAR_7;

 if (!(VAR_4 == 1 && FUNC_0(&VAR_3->rip6_dest) &&
       VAR_3->rip6_plen == 0 && VAR_3->rip6_metric == VAR_0)) {

  FUNC_5(1, "\tRIP Request\n");
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++, VAR_3++) {
   VAR_7 = FUNC_3(VAR_3);
   if (VAR_7)
    VAR_3->rip6_metric = VAR_7->rrt_info.rip6_metric;
   else
    VAR_3->rip6_metric = VAR_0;
  }
  (void)FUNC_4(VAR_5, FUNC_1(VAR_4));
  return;
 }

 FUNC_5(1, "\tRIP Request -- whole routing table\n");
 FUNC_2(VAR_2, VAR_5, VAR_1);
}
