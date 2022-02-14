
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* priv_p ;
typedef int * hook_p ;
struct TYPE_3__ {int ** vlan_hook; int * nomatch_hook; int * downstream_hook; } ;


 size_t FUNC_0 (uintptr_t) ;
 scalar_t__ FUNC_1 (uintptr_t) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(hook_p VAR_0)
{
 const priv_p VAR_1 = FUNC_7(FUNC_2(VAR_0));
 uintptr_t VAR_2;

 if (VAR_0 == VAR_1->downstream_hook)
  VAR_1->downstream_hook = ((void*)0);
 else if (VAR_0 == VAR_1->nomatch_hook)
  VAR_1->nomatch_hook = ((void*)0);
 else {

  VAR_2 = (uintptr_t)FUNC_3(VAR_0);
  if (FUNC_1(VAR_2))
   VAR_1->vlan_hook[FUNC_0(VAR_2)] = ((void*)0);
 }
 FUNC_4(VAR_0, ((void*)0));
 if ((FUNC_6(FUNC_2(VAR_0)) == 0) &&
     (FUNC_5(FUNC_2(VAR_0))))
  FUNC_8(FUNC_2(VAR_0));
 return (0);
}
