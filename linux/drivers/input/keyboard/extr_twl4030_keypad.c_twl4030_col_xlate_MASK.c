
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct twl4030_keypad {int n_cols; } ;



__attribute__((used)) static inline u16 FUNC_0(struct twl4030_keypad *VAR_0, u8 VAR_1)
{






 if (VAR_1 == 0xFF)
  return 1 << VAR_0->n_cols;
 else
  return VAR_1 & ((1 << VAR_0->n_cols) - 1);
}
