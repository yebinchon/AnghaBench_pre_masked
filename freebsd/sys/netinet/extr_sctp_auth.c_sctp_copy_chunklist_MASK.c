
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sctp_auth_chklist_t ;


 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 () ;

sctp_auth_chklist_t *
FUNC_2(sctp_auth_chklist_t *VAR_0)
{
 sctp_auth_chklist_t *VAR_1;

 if (VAR_0 == ((void*)0))
  return (((void*)0));


 VAR_1 = FUNC_1();
 if (VAR_1 == ((void*)0))
  return (((void*)0));

 FUNC_0(VAR_1, VAR_0, sizeof(*VAR_1));

 return (VAR_1);
}
