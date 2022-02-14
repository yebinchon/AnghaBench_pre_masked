
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int bsh; int bst; } ;
struct mtx {int dummy; } ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (struct uart_bas*) ;
 int FUNC_7 (struct uart_bas*) ;
 int FUNC_8 (struct mtx*) ;
 int FUNC_9 (struct mtx*) ;

__attribute__((used)) static int
FUNC_10(struct uart_bas *VAR_6, struct mtx *VAR_7)
{
 bus_space_tag_t VAR_8;
 bus_space_handle_t VAR_9;
 int VAR_10;
 uint32_t VAR_11;

 VAR_8 = VAR_6->bst;
 VAR_9 = VAR_6->bsh;

 FUNC_8(VAR_7);

 while (FUNC_6(VAR_6) == 0) {
  FUNC_9(VAR_7);
  FUNC_0(4);
  FUNC_8(VAR_7);
 }

 VAR_11 = FUNC_3(VAR_4 + FUNC_1(VAR_3));
 VAR_10 = FUNC_2(VAR_4 + VAR_11);
 FUNC_7(VAR_6);
 if (++VAR_11 == FUNC_3(VAR_4 +
     FUNC_1(VAR_2)))
  VAR_11 = FUNC_3(VAR_4 +
      FUNC_1(VAR_1));
 FUNC_4(VAR_4 + FUNC_1(VAR_3),
     VAR_11);
 FUNC_7(VAR_6);
 FUNC_4(VAR_5, FUNC_3(VAR_5) |
     VAR_0);
 FUNC_7(VAR_6);
 FUNC_5(VAR_8, VAR_9);

 FUNC_9(VAR_7);
 return (VAR_10);
}
