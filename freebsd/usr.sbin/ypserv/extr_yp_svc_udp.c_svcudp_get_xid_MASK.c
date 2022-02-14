
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_dg_data {unsigned long su_xid; } ;
typedef int SVCXPRT ;


 struct svc_dg_data* FUNC_0 (int *) ;

unsigned long
FUNC_1(SVCXPRT *VAR_0)
{
 struct svc_dg_data *VAR_1;

 if (VAR_0 == ((void*)0))
  return(0);
 VAR_1 = FUNC_0(VAR_0);
 return(VAR_1->su_xid);
}
