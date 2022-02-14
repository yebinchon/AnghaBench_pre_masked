
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ call_parm; void* call_addr; void* call_addr_c; int magic; } ;
typedef TYPE_1__ nmi_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;

void FUNC_2(int VAR_2)
{
 nmi_t *VAR_3;

 VAR_3 = (nmi_t *)FUNC_0(FUNC_1(), VAR_2);
 if (VAR_3->call_addr)
  return;
 VAR_3->magic = VAR_0;
 VAR_3->call_addr = (void *)VAR_1;
 VAR_3->call_addr_c =
  (void *)(~((unsigned long)(VAR_3->call_addr)));
 VAR_3->call_parm = 0;
}
