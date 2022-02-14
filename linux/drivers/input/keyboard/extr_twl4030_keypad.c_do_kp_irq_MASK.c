
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl4030_keypad {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct twl4030_keypad*,int) ;
 int FUNC_1 (struct twl4030_keypad*,int*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct twl4030_keypad *VAR_5 = VAR_4;
 u8 VAR_6;
 int VAR_7;


 VAR_7 = FUNC_1(VAR_5, &VAR_6, VAR_2, 1);





 if (VAR_7 >= 0 && (VAR_6 & VAR_1))
  FUNC_0(VAR_5, 0);
 else
  FUNC_0(VAR_5, 1);

 return VAR_0;
}
