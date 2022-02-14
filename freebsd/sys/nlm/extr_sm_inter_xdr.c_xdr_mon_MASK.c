
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int priv; int mon_id; } ;
typedef TYPE_1__ mon ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,int) ;

bool_t
FUNC_2(XDR *VAR_2, mon *VAR_3)
{

 if (!FUNC_0(VAR_2, &VAR_3->mon_id))
  return (VAR_0);
 if (!FUNC_1(VAR_2, VAR_3->priv, 16))
  return (VAR_0);
 return (VAR_1);
}
