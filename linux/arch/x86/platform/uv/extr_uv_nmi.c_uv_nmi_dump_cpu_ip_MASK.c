
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {scalar_t__ ip; } ;
struct TYPE_2__ {int comm; int pid; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int,int ,int ,void*) ;

__attribute__((used)) static void FUNC_1(int VAR_1, struct pt_regs *VAR_2)
{
 FUNC_0("UV: %4d %6d %-32.32s %pS",
  VAR_1, VAR_0->pid, VAR_0->comm, (void *)VAR_2->ip);
}
