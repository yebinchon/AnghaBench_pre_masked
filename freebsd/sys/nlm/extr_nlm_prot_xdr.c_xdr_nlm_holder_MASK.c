
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int l_len; int l_offset; int oh; int svid; int exclusive; } ;
typedef TYPE_1__ nlm_holder ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

bool_t
FUNC_4(XDR *VAR_2, nlm_holder *VAR_3)
{

 if (!FUNC_0(VAR_2, &VAR_3->exclusive))
  return (VAR_0);
 if (!FUNC_1(VAR_2, &VAR_3->svid))
  return (VAR_0);
 if (!FUNC_2(VAR_2, &VAR_3->oh))
  return (VAR_0);
 if (!FUNC_3(VAR_2, &VAR_3->l_offset))
  return (VAR_0);
 if (!FUNC_3(VAR_2, &VAR_3->l_len))
  return (VAR_0);
 return (VAR_1);
}
