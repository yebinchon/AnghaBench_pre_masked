
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int bsh; int bst; } ;
struct uart_softc {struct uart_bas sc_bas; } ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct uart_bas*) ;

__attribute__((used)) static int
FUNC_4(struct uart_softc *VAR_6, int VAR_7)
{
 struct uart_bas *VAR_8;
 bus_space_tag_t VAR_9;
 bus_space_handle_t VAR_10;

 VAR_8 = &VAR_6->sc_bas;
 VAR_9 = VAR_8->bst;
 VAR_10 = VAR_8->bsh;

 if ((VAR_7 & VAR_2) != 0)
  return (VAR_0);
 if ((VAR_7 & VAR_1) != 0) {
  FUNC_2(VAR_5 +
      FUNC_0(VAR_3),
      FUNC_1(VAR_5 +
      FUNC_0(VAR_4)));
  FUNC_3(VAR_8);
 }
 return (0);
}
