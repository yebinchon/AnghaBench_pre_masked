
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct twl4030_keypad {int n_rows; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct twl4030_keypad *VAR_0, u16 *VAR_1)
{
 int VAR_2;
 u16 VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->n_rows; VAR_2++) {
  u16 VAR_4 = VAR_1[VAR_2];

  if ((VAR_4 & VAR_3) && FUNC_0(VAR_4) > 1)
   return 1;

  VAR_3 |= VAR_4;
 }

 return 0;
}
