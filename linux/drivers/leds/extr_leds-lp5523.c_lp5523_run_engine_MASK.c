
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp55xx_chip {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct lp55xx_chip*) ;
 int FUNC_4 (struct lp55xx_chip*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct lp55xx_chip*,int ,int*) ;
 int FUNC_7 (struct lp55xx_chip*,int ,int ,int) ;
 int FUNC_8 (struct lp55xx_chip*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct lp55xx_chip *VAR_12, bool VAR_13)
{
 int VAR_14;
 u8 VAR_15;
 u8 VAR_16;


 if (!VAR_13) {
  FUNC_3(VAR_12);
  FUNC_4(VAR_12);
  return;
 }






 VAR_14 = FUNC_6(VAR_12, VAR_8, &VAR_15);
 if (VAR_14)
  return;

 VAR_14 = FUNC_6(VAR_12, VAR_7, &VAR_16);
 if (VAR_14)
  return;


 if (FUNC_0(VAR_15)) {
  VAR_15 = (VAR_15 & ~VAR_4) | VAR_9;
  VAR_16 = (VAR_16 & ~VAR_0) | VAR_9;
 }

 if (FUNC_1(VAR_15)) {
  VAR_15 = (VAR_15 & ~VAR_5) | VAR_10;
  VAR_16 = (VAR_16 & ~VAR_1) | VAR_10;
 }

 if (FUNC_2(VAR_15)) {
  VAR_15 = (VAR_15 & ~VAR_6) | VAR_11;
  VAR_16 = (VAR_16 & ~VAR_2) | VAR_11;
 }

 FUNC_8(VAR_12, VAR_8, VAR_15);
 FUNC_5();

 FUNC_7(VAR_12, VAR_7, VAR_3, VAR_16);
}
