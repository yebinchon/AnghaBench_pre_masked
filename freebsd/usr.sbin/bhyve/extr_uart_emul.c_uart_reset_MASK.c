
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct uart_softc {int dll; int dlh; int mcr; int msr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct uart_softc*,int) ;

__attribute__((used)) static void
FUNC_2(struct uart_softc *VAR_2)
{
 uint16_t VAR_3;

 VAR_3 = VAR_1 / VAR_0 / 16;
 VAR_2->dll = VAR_3;
 VAR_2->dlh = VAR_3 >> 16;
 VAR_2->msr = FUNC_0(VAR_2->mcr);

 FUNC_1(VAR_2, 1);
}
