
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct glc_softc {int * sc_hwirq_status; int sc_interrupt_status; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(void *VAR_1)
{
 struct glc_softc *VAR_2 = VAR_1;

 FUNC_1();
 FUNC_0(&VAR_2->sc_interrupt_status, *VAR_2->sc_hwirq_status);
 return (VAR_0);
}
