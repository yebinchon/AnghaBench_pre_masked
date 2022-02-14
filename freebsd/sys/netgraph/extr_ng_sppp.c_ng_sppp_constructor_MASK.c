
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int32_t ;
struct sppp {int dummy; } ;
struct ifnet {int if_flags; int if_ioctl; int if_start; TYPE_1__* if_softc; } ;
typedef TYPE_1__* priv_p ;
typedef int node_p ;
struct TYPE_8__ {int if_xname; } ;
struct TYPE_7__ {int unit; int node; struct ifnet* ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sppp* FUNC_0 (struct ifnet*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_9 ;
 TYPE_3__* FUNC_2 (struct sppp*) ;
 int FUNC_3 (struct ifnet*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 struct ifnet* FUNC_5 (int ) ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;
 int FUNC_8 (int ,char*,int ) ;
 TYPE_1__* FUNC_9 (int,int ,int) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (struct ifnet*) ;

__attribute__((used)) static int
FUNC_13 (node_p VAR_12)
{
 struct sppp *VAR_13;
 struct ifnet *VAR_14;
 priv_p VAR_15;


 VAR_15 = FUNC_9(sizeof(*VAR_15), VAR_6, VAR_7 | VAR_8);

 VAR_14 = FUNC_5(VAR_4);
 if (VAR_14 == ((void*)0)) {
  FUNC_4 (VAR_15, VAR_6);
  return (VAR_1);
 }
 VAR_13 = FUNC_0(VAR_14);


 VAR_14->if_softc = VAR_15;
 VAR_15->ifp = VAR_14;


 FUNC_11(&VAR_15->unit);


 FUNC_1 (VAR_12, VAR_15);
 VAR_15->node = VAR_12;


 FUNC_7 (FUNC_2(VAR_13), VAR_9, VAR_15->unit);
 VAR_14->if_start = VAR_11;
 VAR_14->if_ioctl = VAR_10;
 VAR_14->if_flags = (VAR_3|VAR_2);


 if (FUNC_10(VAR_12, FUNC_2(VAR_13)->if_xname) != 0)
  FUNC_8 (VAR_5, "%s: can't acquire netgraph name\n",
      FUNC_2(VAR_13)->if_xname);


 FUNC_12 (VAR_14);
 FUNC_6 (VAR_14);
 FUNC_3 (VAR_14, VAR_0, sizeof(u_int32_t));


 return (0);
}
