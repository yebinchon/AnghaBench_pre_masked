
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc32xx_tsc {int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct lpc32xx_tsc*,int ) ;
 int FUNC_2 (struct lpc32xx_tsc*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct lpc32xx_tsc *VAR_2)
{

 FUNC_2(VAR_2, VAR_1,
     FUNC_1(VAR_2, VAR_1) &
        ~VAR_0);

 FUNC_0(VAR_2->clk);
}
