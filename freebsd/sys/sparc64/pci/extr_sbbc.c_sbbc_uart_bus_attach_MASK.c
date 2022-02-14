
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int bsh; int bst; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 () ;
 scalar_t__ VAR_8 ;
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
 uint32_t VAR_15;

 VAR_12 = &VAR_11->sc_bas;
 VAR_13 = VAR_12->bst;
 VAR_14 = VAR_12->bsh;

 FUNC_6(VAR_11->sc_hwmtx);





 VAR_15 = FUNC_2(VAR_10 +
     FUNC_0(VAR_7));
 while (FUNC_2(VAR_10 +
     FUNC_0(VAR_6)) != VAR_15);
  FUNC_4();


 FUNC_3(VAR_9, 0);
 FUNC_5(VAR_12);
 FUNC_1(VAR_2,
     FUNC_2(VAR_9));
 FUNC_5(VAR_12);

 FUNC_1(VAR_1, VAR_0);
 FUNC_5(VAR_12);

 FUNC_3(VAR_8, FUNC_2(VAR_8) |
     VAR_4 | VAR_3 |
     VAR_5);
 FUNC_5(VAR_12);

 FUNC_7(VAR_11->sc_hwmtx);
 return (0);
}
