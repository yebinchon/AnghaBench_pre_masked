
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_keypad {unsigned int cols; scalar_t__ type; int rows; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct samsung_keypad *VAR_5,
    unsigned int *VAR_6)
{
 unsigned int VAR_7;
 unsigned int VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_5->cols; VAR_7++) {
  if (VAR_5->type == VAR_0) {
   VAR_8 = VAR_1;
   VAR_8 &= ~(1 << VAR_7) << 8;
  } else {
   VAR_8 = VAR_3;
   VAR_8 &= ~(1 << VAR_7);
  }

  FUNC_2(VAR_8, VAR_5->base + VAR_2);
  FUNC_0(1);

  VAR_8 = FUNC_1(VAR_5->base + VAR_4);
  VAR_6[VAR_7] = ~VAR_8 & ((1 << VAR_5->rows) - 1);
 }


 FUNC_2(0, VAR_5->base + VAR_2);
}
