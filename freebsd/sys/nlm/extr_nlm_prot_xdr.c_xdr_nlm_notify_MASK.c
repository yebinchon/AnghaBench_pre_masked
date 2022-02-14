
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; int name; } ;
typedef TYPE_1__ nlm_notify ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int ) ;

bool_t
FUNC_2(XDR *VAR_3, nlm_notify *VAR_4)
{

 if (!FUNC_1(VAR_3, &VAR_4->name, VAR_1))
  return (VAR_0);
 if (!FUNC_0(VAR_3, &VAR_4->state))
  return (VAR_0);
 return (VAR_2);
}
