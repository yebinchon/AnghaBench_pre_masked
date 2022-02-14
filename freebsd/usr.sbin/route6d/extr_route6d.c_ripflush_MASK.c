
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; scalar_t__ sin6_port; } ;
struct netinfo6 {scalar_t__ rip6_metric; scalar_t__ rip6_tag; int rip6_plen; int rip6_dest; } ;
struct TYPE_3__ {int sin6_addr; } ;
struct ifc {int ifc_flags; TYPE_1__ ifc_ripsin; int ifc_name; } ;
struct TYPE_4__ {struct netinfo6* rip6_nets; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_2__* VAR_4 ;
 int FUNC_4 (struct sockaddr_in6*,int ) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int,char*,int,...) ;

__attribute__((used)) static void
FUNC_7(struct ifc *VAR_5, struct sockaddr_in6 *VAR_6, int VAR_7, struct netinfo6 *VAR_8)
{
 int VAR_9;
 int VAR_10;

 if (VAR_5)
  FUNC_6(1, "Send(%s): info(%d) to %s.%d\n",
   VAR_5->ifc_name, VAR_7,
   FUNC_2(&VAR_6->sin6_addr), FUNC_3(VAR_6->sin6_port));
 else
  FUNC_6(1, "Send: info(%d) to %s.%d\n",
   VAR_7, FUNC_2(&VAR_6->sin6_addr), FUNC_3(VAR_6->sin6_port));
 if (VAR_3 >= 2) {
  VAR_8 = VAR_4->rip6_nets;
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++, VAR_8++) {
   if (VAR_8->rip6_metric == VAR_2) {
    if (FUNC_0(&VAR_8->rip6_dest))
     FUNC_5(2, "    NextHop reset");
    else {
     FUNC_5(2, "    NextHop %s",
      FUNC_2(&VAR_8->rip6_dest));
    }
   } else {
    FUNC_5(2, "    %s/%d[%d]",
     FUNC_2(&VAR_8->rip6_dest),
     VAR_8->rip6_plen, VAR_8->rip6_metric);
   }
   if (VAR_8->rip6_tag) {
    FUNC_5(2, "  tag=0x%04x",
     FUNC_3(VAR_8->rip6_tag) & 0xffff);
   }
   FUNC_5(2, "\n");
  }
 }
 VAR_10 = FUNC_4(VAR_6, FUNC_1(VAR_7));
 if (VAR_10 == VAR_0) {

  if (VAR_5 != ((void*)0)) {
   FUNC_6(1, "Could not send info to %s (%s): "
       "set IFF_UP to 0\n",
       VAR_5->ifc_name,
       FUNC_2(&VAR_5->ifc_ripsin.sin6_addr));

   VAR_5->ifc_flags &= ~VAR_1;
  } else {
   FUNC_6(1, "Could not send info to %s\n",
       FUNC_2(&VAR_6->sin6_addr));
  }
 }
}
