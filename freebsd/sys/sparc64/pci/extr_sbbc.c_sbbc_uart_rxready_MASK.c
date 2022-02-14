
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int bsh; int bst; } ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct uart_bas *VAR_3)
{
 bus_space_tag_t VAR_4;
 bus_space_handle_t VAR_5;

 VAR_4 = VAR_3->bst;
 VAR_5 = VAR_3->bsh;

 if (FUNC_1(VAR_2 + FUNC_0(VAR_0)) ==
     FUNC_1(VAR_2 + FUNC_0(VAR_1)))
  return (0);
 return (1);
}
