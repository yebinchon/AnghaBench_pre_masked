
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct stmpe_keypad_variant {unsigned int col_gpios; unsigned int row_gpios; int max_cols; int max_rows; scalar_t__ set_pullup; } ;
struct stmpe_keypad {int cols; int rows; struct stmpe* stmpe; struct stmpe_keypad_variant* variant; } ;
struct stmpe {unsigned int* regs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct stmpe*,unsigned int) ;
 int FUNC_2 (struct stmpe*,unsigned int,unsigned int) ;
 int FUNC_3 (struct stmpe*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct stmpe_keypad *VAR_2)
{
 const struct stmpe_keypad_variant *VAR_3 = VAR_2->variant;
 unsigned int VAR_4 = VAR_3->col_gpios;
 unsigned int VAR_5 = VAR_3->row_gpios;
 struct stmpe *VAR_6 = VAR_2->stmpe;
 u8 VAR_7 = VAR_6->regs[VAR_1];
 unsigned int VAR_8 = 0;
 unsigned int VAR_9 = 0;
 int VAR_10;
 int VAR_11;
 for (VAR_11 = 0; VAR_11 < VAR_3->max_cols; VAR_11++) {
  int VAR_12 = FUNC_0(VAR_4);

  if (VAR_2->cols & (1 << VAR_11)) {
   VAR_8 |= 1 << VAR_12;
   VAR_9 |= 1 << VAR_12;
  }

  VAR_4 &= ~(1 << VAR_12);
 }

 for (VAR_11 = 0; VAR_11 < VAR_3->max_rows; VAR_11++) {
  int VAR_13 = FUNC_0(VAR_5);

  if (VAR_2->rows & (1 << VAR_11))
   VAR_8 |= 1 << VAR_13;

  VAR_5 &= ~(1 << VAR_13);
 }

 VAR_10 = FUNC_3(VAR_6, VAR_8, VAR_0);
 if (VAR_10)
  return VAR_10;







 if (VAR_3->set_pullup) {
  u8 VAR_14;

  VAR_10 = FUNC_1(VAR_6, VAR_7);
  if (VAR_10)
   return VAR_10;


  VAR_14 = VAR_10 & ~VAR_9;
  VAR_14 |= VAR_9;

  VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_14);
 }

 return 0;
}
