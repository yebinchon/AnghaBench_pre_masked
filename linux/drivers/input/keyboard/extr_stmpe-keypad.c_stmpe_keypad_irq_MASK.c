
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stmpe_keypad_variant {int num_normal_data; } ;
struct stmpe_keypad {int * keymap; struct stmpe_keypad_variant* variant; struct input_dev* input; } ;
struct input_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct input_dev*,int ,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct stmpe_keypad*,int*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_10, void *VAR_11)
{
 struct stmpe_keypad *VAR_12 = VAR_11;
 struct input_dev *VAR_13 = VAR_12->input;
 const struct stmpe_keypad_variant *VAR_14 = VAR_12->variant;
 u8 VAR_15[VAR_3];
 int VAR_16;
 int VAR_17;

 VAR_16 = FUNC_4(VAR_12, VAR_15);
 if (VAR_16 < 0)
  return VAR_2;

 for (VAR_17 = 0; VAR_17 < VAR_14->num_normal_data; VAR_17++) {
  u8 VAR_18 = VAR_15[VAR_17];
  int VAR_19 = (VAR_18 & VAR_8) >> 3;
  int VAR_20 = VAR_18 & VAR_6;
  int VAR_21 = FUNC_0(VAR_19, VAR_20, VAR_5);
  bool VAR_22 = VAR_18 & VAR_9;

  if ((VAR_18 & VAR_7)
   == VAR_7)
   continue;

  FUNC_1(VAR_13, VAR_0, VAR_4, VAR_21);
  FUNC_2(VAR_13, VAR_12->keymap[VAR_21], !VAR_22);
  FUNC_3(VAR_13);
 }

 return VAR_1;
}
