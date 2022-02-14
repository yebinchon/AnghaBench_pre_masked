
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcore {int halt_poll_ns; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct kvmppc_vcore *VAR_1)
{
 if (VAR_0 == 0)
  VAR_1->halt_poll_ns = 0;
 else
  VAR_1->halt_poll_ns /= VAR_0;
}
