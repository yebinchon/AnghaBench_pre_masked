
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plat_lcd_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct plat_lcd_data *VAR_5,
     unsigned int VAR_6)
{
 int VAR_7, VAR_8 = 100;

 if (!VAR_6) {
  FUNC_5(FUNC_0(0), 0);

  do {
   VAR_7 = FUNC_4(FUNC_0(6));
  } while (VAR_7 && VAR_8--);

  FUNC_5(VAR_2, 0);
  FUNC_5(VAR_3, 0);
  FUNC_5(VAR_4, 0);

  FUNC_3(FUNC_0(1), 0);
  FUNC_3(FUNC_0(4), 0);

  FUNC_5(VAR_1, 0);
  FUNC_5(VAR_0, 0);

  FUNC_5(FUNC_0(5), 0);

 } else {
  FUNC_5(VAR_0, 1);
  FUNC_5(VAR_1, 1);

  FUNC_2(FUNC_0(1));
  FUNC_2(FUNC_0(4));
  FUNC_6(10);
  FUNC_7(FUNC_0(1), FUNC_1(2));
  FUNC_7(FUNC_0(4), FUNC_1(2));

  FUNC_5(FUNC_0(5), 1);
  FUNC_5(FUNC_0(0), 1);

  FUNC_5(VAR_3, 1);
  FUNC_5(VAR_2, 1);
  FUNC_5(VAR_4, 1);
 }
}
