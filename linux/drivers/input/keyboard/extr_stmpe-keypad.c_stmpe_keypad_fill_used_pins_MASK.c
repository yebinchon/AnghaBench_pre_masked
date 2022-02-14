
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stmpe_keypad {scalar_t__* keymap; int rows; int cols; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct stmpe_keypad *VAR_2,
     u32 VAR_3, u32 VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
   int VAR_7 = FUNC_0(VAR_5, VAR_6,
          VAR_1);
   if (VAR_2->keymap[VAR_7] != VAR_0) {
    VAR_2->rows |= 1 << VAR_5;
    VAR_2->cols |= 1 << VAR_6;
   }
  }
 }
}
