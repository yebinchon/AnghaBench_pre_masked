
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmctx {int dummy; } ;
struct lpc_uart_softc {int iobase; int uart_softc; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int
FUNC_2(struct vmctx *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4,
      uint32_t *VAR_5, void *VAR_6)
{
 int VAR_7;
 struct lpc_uart_softc *VAR_8 = VAR_6;

 VAR_7 = VAR_3 - VAR_8->iobase;

 switch (VAR_4) {
 case 1:
  if (VAR_2)
   *VAR_5 = FUNC_0(VAR_8->uart_softc, VAR_7);
  else
   FUNC_1(VAR_8->uart_softc, VAR_7, *VAR_5);
  break;
 case 2:
  if (VAR_2) {
   *VAR_5 = FUNC_0(VAR_8->uart_softc, VAR_7);
   *VAR_5 |= FUNC_0(VAR_8->uart_softc, VAR_7 + 1) << 8;
  } else {
   FUNC_1(VAR_8->uart_softc, VAR_7, *VAR_5);
   FUNC_1(VAR_8->uart_softc, VAR_7 + 1, *VAR_5 >> 8);
  }
  break;
 default:
  return (-1);
 }

 return (0);
}
