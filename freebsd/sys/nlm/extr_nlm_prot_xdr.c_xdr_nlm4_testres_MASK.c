
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stat; int cookie; } ;
typedef TYPE_1__ nlm4_testres ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

bool_t
FUNC_2(XDR *VAR_2, nlm4_testres *VAR_3)
{

 if (!FUNC_0(VAR_2, &VAR_3->cookie))
  return (VAR_0);
 if (!FUNC_1(VAR_2, &VAR_3->stat))
  return (VAR_0);
 return (VAR_1);
}
