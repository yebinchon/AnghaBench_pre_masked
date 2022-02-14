
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int bsh; int bst; } ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct uart_bas*) ;

__attribute__((used)) static void
FUNC_6(struct uart_bas *VAR_6, int VAR_7)
{
 bus_space_tag_t VAR_8;
 bus_space_handle_t VAR_9;
 uint32_t VAR_10;

 VAR_8 = VAR_6->bst;
 VAR_9 = VAR_6->bsh;

 VAR_10 = FUNC_1(VAR_4 +
     FUNC_0(VAR_3));
 FUNC_2(VAR_4 + VAR_10, VAR_7);
 FUNC_5(VAR_6);
 if (++VAR_10 == FUNC_1(VAR_4 +
     FUNC_0(VAR_2)))
  VAR_10 = FUNC_1(VAR_4 +
      FUNC_0(VAR_1));
 FUNC_3(VAR_4 + FUNC_0(VAR_3),
     VAR_10);
 FUNC_5(VAR_6);

 FUNC_3(VAR_5, FUNC_1(VAR_5) |
     VAR_0);
 FUNC_5(VAR_6);
 FUNC_4(VAR_8, VAR_9);
}
