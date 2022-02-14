
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct uart_bas {int bsh; int bst; } ;
struct uart_softc {size_t sc_rxput; int sc_hwmtx; int * sc_rxbuf; struct uart_bas sc_bas; } ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (struct uart_bas*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct uart_softc*) ;
 int FUNC_8 (struct uart_softc*,int) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(struct uart_softc *VAR_8)
{
 struct uart_bas *VAR_9;
 bus_space_tag_t VAR_10;
 bus_space_handle_t VAR_11;
 int VAR_12;
 uint32_t VAR_13, VAR_14, VAR_15;

 VAR_9 = &VAR_8->sc_bas;
 VAR_10 = VAR_9->bst;
 VAR_11 = VAR_9->bsh;

 FUNC_6(VAR_8->sc_hwmtx);

 VAR_13 = FUNC_2(VAR_6 + FUNC_0(VAR_3));
 VAR_14 = FUNC_2(VAR_6 + FUNC_0(VAR_4));
 VAR_15 = FUNC_2(VAR_6 + FUNC_0(VAR_5));
 while (VAR_14 != VAR_15) {
  if (FUNC_7(VAR_8) != 0) {
   VAR_8->sc_rxbuf[VAR_8->sc_rxput] = VAR_1;
   break;
  }
  VAR_12 = FUNC_1(VAR_6 + VAR_14);
  FUNC_8(VAR_8, VAR_12);
  if (++VAR_14 == VAR_13)
   VAR_14 = FUNC_2(VAR_6 +
       FUNC_0(VAR_2));
 }
 FUNC_5(VAR_9);
 FUNC_3(VAR_6 + FUNC_0(VAR_4),
     VAR_14);
 FUNC_5(VAR_9);
 FUNC_3(VAR_7, FUNC_2(VAR_7) |
     VAR_0);
 FUNC_5(VAR_9);
 FUNC_4(VAR_10, VAR_11);

 FUNC_9(VAR_8->sc_hwmtx);
 return (0);
}
