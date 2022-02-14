
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcore {int halt_poll_ns; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct kvmppc_vcore *VAR_2)
{
 if (!VAR_0)
  return;

 VAR_2->halt_poll_ns *= VAR_0;
 if (VAR_2->halt_poll_ns < VAR_1)
  VAR_2->halt_poll_ns = VAR_1;
}
