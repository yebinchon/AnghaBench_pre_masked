
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int bsh; int bst; } ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int
FUNC_3(struct uart_bas *VAR_11)
{
 bus_space_tag_t VAR_12;
 bus_space_handle_t VAR_13;
 int VAR_14;

 VAR_5 = 1;
 VAR_12 = VAR_11->bst;
 VAR_13 = VAR_11->bsh;
 VAR_14 = FUNC_2(VAR_12, VAR_13);
 if (VAR_14 != 0)
  return (VAR_14);

 if (VAR_6 == 0 || VAR_7 == 0 || VAR_8 == 0 ||
     VAR_9 == 0 || VAR_10 == 0)
  return (VAR_0);

 if (FUNC_1(VAR_8 + FUNC_0(VAR_3)) !=
     VAR_1 || FUNC_1(VAR_8 +
     FUNC_0(VAR_4)) < VAR_2)
  return (VAR_0);
 return (0);
}
