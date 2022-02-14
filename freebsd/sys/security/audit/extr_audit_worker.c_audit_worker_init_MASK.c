
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int *,int ,int ,char*) ;
 int FUNC_2 (char*,int) ;

void
FUNC_3(void)
{
 int VAR_3;

 FUNC_0();
 VAR_3 = FUNC_1(VAR_2, ((void*)0), &VAR_1, VAR_0,
     0, "audit");
 if (VAR_3)
  FUNC_2("audit_worker_init: kproc_create returned %d", VAR_3);
}
