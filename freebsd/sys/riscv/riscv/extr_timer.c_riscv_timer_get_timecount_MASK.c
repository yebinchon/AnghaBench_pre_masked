
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timecounter {struct riscv_timer_softc* tc_priv; } ;
struct riscv_timer_softc {int dummy; } ;


 int FUNC_0 (struct riscv_timer_softc*) ;

__attribute__((used)) static unsigned
FUNC_1(struct timecounter *VAR_0)
{
 struct riscv_timer_softc *VAR_1;

 VAR_1 = VAR_0->tc_priv;

 return (FUNC_0(VAR_1));
}
