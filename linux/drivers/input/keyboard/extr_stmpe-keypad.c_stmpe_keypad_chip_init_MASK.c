
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmpe_keypad_variant {int max_rows; } ;
struct stmpe_keypad {int debounce_ms; int scan_count; int cols; int rows; struct stmpe* stmpe; struct stmpe_keypad_variant* variant; } ;
struct stmpe {int dummy; } ;


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
 int VAR_12 ;
 int FUNC_0 (struct stmpe*,int ) ;
 int FUNC_1 (struct stmpe_keypad*) ;
 int FUNC_2 (struct stmpe*,int ,int) ;
 int FUNC_3 (struct stmpe*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct stmpe_keypad *VAR_13)
{
 const struct stmpe_keypad_variant *VAR_14 = VAR_13->variant;
 struct stmpe *VAR_15 = VAR_13->stmpe;
 int VAR_16;

 if (VAR_13->debounce_ms > VAR_2)
  return -VAR_0;

 if (VAR_13->scan_count > VAR_3)
  return -VAR_0;

 VAR_16 = FUNC_0(VAR_15, VAR_1);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_1(VAR_13);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_2(VAR_15, VAR_4, VAR_13->cols);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_2(VAR_15, VAR_10, VAR_13->rows);
 if (VAR_16 < 0)
  return VAR_16;

 if (VAR_14->max_rows > 8) {
  VAR_16 = FUNC_3(VAR_15, VAR_11,
         VAR_12,
         VAR_13->rows >> 8);
  if (VAR_16 < 0)
   return VAR_16;
 }

 VAR_16 = FUNC_3(VAR_15, VAR_8,
        VAR_9,
        VAR_13->scan_count << 4);
 if (VAR_16 < 0)
  return VAR_16;

 return FUNC_3(VAR_15, VAR_5,
         VAR_7 |
         VAR_6,
         VAR_7 |
         (VAR_13->debounce_ms << 1));
}
