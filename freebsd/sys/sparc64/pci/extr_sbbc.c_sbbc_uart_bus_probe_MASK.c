
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int bsh; int bst; } ;
struct uart_softc {void* sc_txfifosz; void* sc_rxfifosz; struct uart_bas sc_bas; } ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int
FUNC_2(struct uart_softc *VAR_7)
{
 struct uart_bas *VAR_8;
 bus_space_tag_t VAR_9;
 bus_space_handle_t VAR_10;

 if (VAR_5 != 0) {
  VAR_8 = &VAR_7->sc_bas;
  VAR_9 = VAR_8->bst;
  VAR_10 = VAR_8->bsh;
  VAR_7->sc_rxfifosz = FUNC_1(VAR_6 +
      FUNC_0(VAR_2)) - FUNC_1(VAR_6 +
      FUNC_0(VAR_1)) - 1;
  VAR_7->sc_txfifosz = FUNC_1(VAR_6 +
      FUNC_0(VAR_4)) - FUNC_1(VAR_6 +
      FUNC_0(VAR_3)) - 1;
  return (0);
 }
 return (VAR_0);
}
