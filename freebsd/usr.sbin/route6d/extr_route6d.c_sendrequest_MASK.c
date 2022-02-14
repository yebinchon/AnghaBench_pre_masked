
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netinfo6 {int rip6_metric; } ;
struct TYPE_3__ {int sin6_addr; } ;
struct ifc {int ifc_flags; TYPE_1__ ifc_ripsin; int ifc_name; } ;
struct TYPE_4__ {int rip6_cmd; struct netinfo6* rip6_nets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct netinfo6*,int ,int) ;
 TYPE_2__* VAR_6 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct ifc *VAR_7)
{
 struct netinfo6 *VAR_8;
 int VAR_9;

 if (VAR_7->ifc_flags & VAR_2)
  return;
 VAR_6->rip6_cmd = VAR_4;
 VAR_8 = VAR_6->rip6_nets;
 FUNC_2(VAR_8, 0, sizeof(struct netinfo6));
 VAR_8->rip6_metric = VAR_1;
 FUNC_4(1, "Send rtdump Request to %s (%s)\n",
  VAR_7->ifc_name, FUNC_1(&VAR_7->ifc_ripsin.sin6_addr));
 VAR_9 = FUNC_3(&VAR_7->ifc_ripsin, FUNC_0(1));
 if (VAR_9 == VAR_0) {

  FUNC_4(1, "Could not send rtdump Request to %s (%s): "
   "set IFF_UP to 0\n",
   VAR_7->ifc_name, FUNC_1(&VAR_7->ifc_ripsin.sin6_addr));
  VAR_7->ifc_flags &= ~VAR_3;
 }
 VAR_6->rip6_cmd = VAR_5;
}
