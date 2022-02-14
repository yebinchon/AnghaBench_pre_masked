
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap4_keypad {unsigned char* key_state; unsigned int rows; unsigned int cols; int * keymap; int row_shift; struct input_dev* input; } ;
struct input_dev {int dummy; } ;
typedef int irqreturn_t ;


 int FUNC_0 (unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (unsigned int,unsigned int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct input_dev*,int ,int ,unsigned int) ;
 int FUNC_3 (struct input_dev*,int ,unsigned char) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct omap4_keypad*,int ) ;
 int FUNC_6 (struct omap4_keypad*,int ) ;
 int FUNC_7 (struct omap4_keypad*,int ,int ) ;
 int FUNC_8 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_6, void *VAR_7)
{
 struct omap4_keypad *VAR_8 = VAR_7;
 struct input_dev *VAR_9 = VAR_8->input;
 unsigned char VAR_10[FUNC_0(VAR_8->key_state)];
 unsigned int VAR_11, VAR_12, VAR_13, VAR_14;
 u32 *VAR_15 = (u32 *) VAR_10;

 *VAR_15 = FUNC_6(VAR_8, VAR_3);
 *(VAR_15 + 1) = FUNC_6(VAR_8, VAR_4);

 for (VAR_12 = 0; VAR_12 < VAR_8->rows; VAR_12++) {
  VAR_14 = VAR_10[VAR_12] ^ VAR_8->key_state[VAR_12];
  if (!VAR_14)
   continue;

  for (VAR_11 = 0; VAR_11 < VAR_8->cols; VAR_11++) {
   if (VAR_14 & (1 << VAR_11)) {
    VAR_13 = FUNC_1(VAR_12, VAR_11,
      VAR_8->row_shift);
    FUNC_2(VAR_9, VAR_0, VAR_2, VAR_13);
    FUNC_3(VAR_9,
       VAR_8->keymap[VAR_13],
       VAR_10[VAR_12] & (1 << VAR_11));
   }
  }
 }

 FUNC_4(VAR_9);

 FUNC_8(VAR_8->key_state, VAR_10,
  sizeof(VAR_8->key_state));


 FUNC_7(VAR_8, VAR_5,
    FUNC_5(VAR_8, VAR_5));

 return VAR_1;
}
