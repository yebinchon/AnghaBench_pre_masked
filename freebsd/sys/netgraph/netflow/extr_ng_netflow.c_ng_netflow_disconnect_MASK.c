
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* priv_p ;
typedef int node_p ;
typedef TYPE_2__* iface_p ;
typedef int * hook_p ;
struct TYPE_6__ {int * out; int * hook; } ;
struct TYPE_5__ {int * export9; int exp_callout; int * export; } ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(hook_p VAR_0)
{
 node_p VAR_1 = FUNC_0(VAR_0);
 priv_p VAR_2 = FUNC_3(VAR_1);
 iface_p VAR_3 = FUNC_1(VAR_0);

 if (VAR_3 != ((void*)0)) {
  if (VAR_3->hook == VAR_0)
   VAR_3->hook = ((void*)0);
  if (VAR_3->out == VAR_0)
   VAR_3->out = ((void*)0);
 }


 if (VAR_0 == VAR_2->export) {
  if (VAR_2->export9 == ((void*)0))
   FUNC_4(&VAR_2->exp_callout);
  VAR_2->export = ((void*)0);
 }

 if (VAR_0 == VAR_2->export9) {
  if (VAR_2->export == ((void*)0))
   FUNC_4(&VAR_2->exp_callout);
  VAR_2->export9 = ((void*)0);
 }


 if (FUNC_2(VAR_1) == 0)
  FUNC_5(VAR_1);

 return (0);
}
