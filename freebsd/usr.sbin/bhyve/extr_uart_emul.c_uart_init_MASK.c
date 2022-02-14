
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uart_intr_func_t ;
struct uart_softc {int mtx; void* intr_deassert; void* intr_assert; void* arg; } ;


 struct uart_softc* FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct uart_softc*) ;

struct uart_softc *
FUNC_3(uart_intr_func_t VAR_0, uart_intr_func_t VAR_1,
    void *VAR_2)
{
 struct uart_softc *VAR_3;

 VAR_3 = FUNC_0(1, sizeof(struct uart_softc));

 VAR_3->arg = VAR_2;
 VAR_3->intr_assert = VAR_0;
 VAR_3->intr_deassert = VAR_1;

 FUNC_1(&VAR_3->mtx, ((void*)0));

 FUNC_2(VAR_3);

 return (VAR_3);
}
