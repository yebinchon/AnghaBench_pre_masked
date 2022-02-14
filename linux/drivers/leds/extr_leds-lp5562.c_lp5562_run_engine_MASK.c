
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp55xx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct lp55xx_chip*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct lp55xx_chip*,int ,int*) ;
 int FUNC_7 (struct lp55xx_chip*,int ,int ,int) ;
 int FUNC_8 (struct lp55xx_chip*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct lp55xx_chip *VAR_16, bool VAR_17)
{
 int VAR_18;
 u8 VAR_19;
 u8 VAR_20;


 if (!VAR_17) {
  FUNC_8(VAR_16, VAR_10, VAR_1);
  FUNC_4();
  FUNC_3(VAR_16);
  FUNC_8(VAR_16, VAR_11, VAR_2);
  FUNC_8(VAR_16, VAR_12, VAR_0);
  FUNC_5();
  return;
 }






 VAR_18 = FUNC_6(VAR_16, VAR_12, &VAR_19);
 if (VAR_18)
  return;

 VAR_18 = FUNC_6(VAR_16, VAR_10, &VAR_20);
 if (VAR_18)
  return;


 if (FUNC_0(VAR_19)) {
  VAR_19 = (VAR_19 & ~VAR_7) | VAR_13;
  VAR_20 = (VAR_20 & ~VAR_3) | VAR_13;
 }

 if (FUNC_1(VAR_19)) {
  VAR_19 = (VAR_19 & ~VAR_8) | VAR_14;
  VAR_20 = (VAR_20 & ~VAR_4) | VAR_14;
 }

 if (FUNC_2(VAR_19)) {
  VAR_19 = (VAR_19 & ~VAR_9) | VAR_15;
  VAR_20 = (VAR_20 & ~VAR_5) | VAR_15;
 }

 FUNC_8(VAR_16, VAR_12, VAR_19);
 FUNC_5();

 FUNC_7(VAR_16, VAR_10, VAR_6, VAR_20);
 FUNC_4();
}
