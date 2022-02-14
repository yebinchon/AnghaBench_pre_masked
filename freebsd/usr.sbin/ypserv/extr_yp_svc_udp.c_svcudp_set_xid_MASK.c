
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_dg_data {unsigned long su_xid; } ;
typedef int SVCXPRT ;


 struct svc_dg_data* FUNC_0 (int *) ;

unsigned long
FUNC_1(SVCXPRT *VAR_0, unsigned long VAR_1)
{
 struct svc_dg_data *VAR_2;
 unsigned long VAR_3;

 if (VAR_0 == ((void*)0))
  return(0);
 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = VAR_2->su_xid;
 VAR_2->su_xid = VAR_1;
 return(VAR_3);
}
