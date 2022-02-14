
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_tsc {int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct lpc32xx_tsc*) ;
 int FUNC_4 (struct lpc32xx_tsc*,int ) ;
 int FUNC_5 (struct lpc32xx_tsc*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct lpc32xx_tsc *VAR_20)
{
 u32 VAR_21;
 int VAR_22;

 VAR_22 = FUNC_2(VAR_20->clk);
 if (VAR_22)
  return VAR_22;

 VAR_21 = FUNC_4(VAR_20, VAR_6) & ~VAR_2;


 VAR_21 = VAR_1 |
       FUNC_0(10) |
       FUNC_1(10);
 FUNC_5(VAR_20, VAR_6, VAR_21);


 FUNC_5(VAR_20, VAR_16, VAR_17);
 FUNC_5(VAR_20, VAR_12, VAR_13);
 FUNC_5(VAR_20, VAR_9, VAR_10);
 FUNC_5(VAR_20, VAR_14, VAR_13);
 FUNC_5(VAR_20, VAR_11, VAR_10);


 FUNC_5(VAR_20, VAR_5, 0);
 FUNC_5(VAR_20, VAR_4, 0);
 FUNC_5(VAR_20, VAR_3, 0);







 FUNC_5(VAR_20, VAR_15, 0x2);
 FUNC_5(VAR_20, VAR_7, 0x2);
 FUNC_5(VAR_20, VAR_18, 0x10);
 FUNC_5(VAR_20, VAR_8, 0x4);
 FUNC_5(VAR_20, VAR_19, 88);

 FUNC_3(VAR_20);


 FUNC_5(VAR_20, VAR_6, VAR_21 | VAR_0);

 return 0;
}
