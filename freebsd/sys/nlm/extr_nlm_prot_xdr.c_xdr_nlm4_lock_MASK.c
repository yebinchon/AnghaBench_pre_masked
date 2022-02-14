
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int l_len; int l_offset; int svid; int oh; int fh; int caller_name; } ;
typedef TYPE_1__ nlm4_lock ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

bool_t
FUNC_4(XDR *VAR_3, nlm4_lock *VAR_4)
{

 if (!FUNC_1(VAR_3, &VAR_4->caller_name, VAR_1))
  return (VAR_0);
 if (!FUNC_0(VAR_3, &VAR_4->fh))
  return (VAR_0);
 if (!FUNC_0(VAR_3, &VAR_4->oh))
  return (VAR_0);
 if (!FUNC_2(VAR_3, &VAR_4->svid))
  return (VAR_0);
 if (!FUNC_3(VAR_3, &VAR_4->l_offset))
  return (VAR_0);
 if (!FUNC_3(VAR_3, &VAR_4->l_len))
  return (VAR_0);
 return (VAR_2);
}
