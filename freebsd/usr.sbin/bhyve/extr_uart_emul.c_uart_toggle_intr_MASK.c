
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct uart_softc {int arg; int (* intr_assert ) (int ) ;int (* intr_deassert ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct uart_softc*) ;

__attribute__((used)) static void
FUNC_3(struct uart_softc *VAR_1)
{
 uint8_t VAR_2;

 VAR_2 = FUNC_2(VAR_1);

 if (VAR_2 == VAR_0)
  (*VAR_1->intr_deassert)(VAR_1->arg);
 else
  (*VAR_1->intr_assert)(VAR_1->arg);
}
