
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct uart_bas {int bsh; int bst; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (struct uart_bas*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct uart_softc *VAR_11)
{
 struct uart_bas *VAR_12;
 bus_space_tag_t VAR_13;
 bus_space_handle_t VAR_14;
 int VAR_15;
 uint32_t VAR_16, VAR_17;

 VAR_12 = &VAR_11->sc_bas;
 VAR_13 = VAR_12->bst;
 VAR_14 = VAR_12->bsh;

 FUNC_6(VAR_11->sc_hwmtx);
 VAR_17 = FUNC_1(VAR_0);
 if (VAR_17 == 0) {
  FUNC_7(VAR_11->sc_hwmtx);
  return (0);
 }





 VAR_16 = FUNC_3(VAR_9);
 FUNC_4(VAR_9, 0);
 FUNC_5(VAR_12);

 FUNC_2(VAR_0, VAR_17);
 FUNC_5(VAR_12);

 FUNC_7(VAR_11->sc_hwmtx);

 VAR_15 = 0;
 if ((VAR_16 & VAR_2) != 0)
  VAR_15 |= VAR_5;
 if ((VAR_16 & VAR_1) != 0)
  VAR_15 |= VAR_4;
 if ((VAR_16 & VAR_3) != 0 &&
     FUNC_3(VAR_10 + FUNC_0(VAR_7)) ==
     FUNC_3(VAR_10 + FUNC_0(VAR_8)))
  VAR_15 |= VAR_6;
 return (VAR_15);
}
