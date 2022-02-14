
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct uart_bas {int bsh; int bst; } ;
struct uart_softc {int sc_txdatasz; int sc_txbusy; int sc_hwmtx; int * sc_txbuf; struct uart_bas sc_bas; } ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (struct uart_bas*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct uart_softc *VAR_6)
{
 struct uart_bas *VAR_7;
 bus_space_tag_t VAR_8;
 bus_space_handle_t VAR_9;
 int VAR_10;
 uint32_t VAR_11, VAR_12;

 VAR_7 = &VAR_6->sc_bas;
 VAR_8 = VAR_7->bst;
 VAR_9 = VAR_7->bsh;

 FUNC_6(VAR_6->sc_hwmtx);

 VAR_11 = FUNC_1(VAR_4 + FUNC_0(VAR_2));
 VAR_12 = FUNC_1(VAR_4 +
     FUNC_0(VAR_3));
 for (VAR_10 = 0; VAR_10 < VAR_6->sc_txdatasz; VAR_10++) {
  FUNC_2(VAR_4 + VAR_12, VAR_6->sc_txbuf[VAR_10]);
  if (++VAR_12 == VAR_11)
   VAR_12 = FUNC_1(VAR_4 +
       FUNC_0(VAR_1));
 }
 FUNC_5(VAR_7);
 FUNC_3(VAR_4 + FUNC_0(VAR_3),
     VAR_12);
 FUNC_5(VAR_7);
 FUNC_3(VAR_5, FUNC_1(VAR_5) |
     VAR_0);
 FUNC_5(VAR_7);
 FUNC_4(VAR_8, VAR_9);
 VAR_6->sc_txbusy = 1;

 FUNC_7(VAR_6->sc_hwmtx);
 return (0);
}
