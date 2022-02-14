
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int holder; } ;
struct TYPE_5__ {int stat; TYPE_1__ nlm4_testrply_u; } ;
typedef TYPE_2__ nlm4_testrply ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int*) ;

bool_t
FUNC_2(XDR *VAR_2, nlm4_testrply *VAR_3)
{

 if (!FUNC_1(VAR_2, &VAR_3->stat))
  return (VAR_0);
 switch (VAR_3->stat) {
 case 128:
  if (!FUNC_0(VAR_2, &VAR_3->nlm4_testrply_u.holder))
   return (VAR_0);
  break;
 default:
  break;
 }
 return (VAR_1);
}
