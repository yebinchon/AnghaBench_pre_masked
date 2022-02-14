
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sppp {int dummy; } ;
struct TYPE_5__ {int typecookie; int cmd; } ;
struct ng_mesg {int data; TYPE_1__ header; } ;
typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_7__ {int if_xname; } ;
struct TYPE_6__ {int ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sppp* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,struct ng_mesg*) ;


 int FUNC_2 (struct ng_mesg*) ;
 int FUNC_3 (struct ng_mesg*,struct ng_mesg*,int ,int ) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (int,int ,int ,struct ng_mesg*) ;
 TYPE_3__* FUNC_6 (struct sppp* const) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_8 (node_p VAR_4, item_p VAR_5, hook_p VAR_6)
{
 const priv_p VAR_7 = FUNC_4 (VAR_4);
 struct ng_mesg *VAR_8 = ((void*)0);
 struct ng_mesg *VAR_9 = ((void*)0);
 struct sppp *const VAR_10 = FUNC_0(VAR_7->ifp);
 int VAR_11 = 0;

 FUNC_1 (VAR_5, VAR_8);
 switch (VAR_8->header.typecookie) {
 case 129:
  switch (VAR_8->header.cmd) {
  case 128:
   FUNC_3 (VAR_9, VAR_8, VAR_2, VAR_3);
   if (!VAR_9) {
    VAR_11 = VAR_1;
    break;
   }
   FUNC_7(VAR_9->data, FUNC_6(VAR_10)->if_xname, VAR_2);
   break;

  default:
   VAR_11 = VAR_0;
   break;
  }
  break;
 default:
  VAR_11 = VAR_0;
  break;
 }
 FUNC_5 (VAR_11, VAR_4, VAR_5, VAR_9);
 FUNC_2 (VAR_8);
 return (VAR_11);
}
