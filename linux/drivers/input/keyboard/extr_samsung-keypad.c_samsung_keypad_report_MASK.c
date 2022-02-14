
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_keypad {unsigned int cols; unsigned int* row_state; unsigned int rows; struct input_dev* input_dev; int * keycodes; int row_shift; } ;
struct input_dev {int dev; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,char*,unsigned int,unsigned int) ;
 int FUNC_2 (struct input_dev*,int ,int ,unsigned int) ;
 int FUNC_3 (struct input_dev*,int ,unsigned int) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (unsigned int*,unsigned int*,int) ;

__attribute__((used)) static bool FUNC_6(struct samsung_keypad *VAR_2,
      unsigned int *VAR_3)
{
 struct input_dev *VAR_4 = VAR_2->input_dev;
 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7 = 0;
 unsigned int VAR_8;
 unsigned int VAR_9, VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_2->cols; VAR_9++) {
  VAR_5 = VAR_3[VAR_9] ^ VAR_2->row_state[VAR_9];
  VAR_7 |= VAR_3[VAR_9];
  if (!VAR_5)
   continue;

  for (VAR_10 = 0; VAR_10 < VAR_2->rows; VAR_10++) {
   if (!(VAR_5 & (1 << VAR_10)))
    continue;

   VAR_6 = VAR_3[VAR_9] & (1 << VAR_10);

   FUNC_1(&VAR_2->input_dev->dev,
    "key %s, row: %d, col: %d\n",
    VAR_6 ? "pressed" : "released", VAR_10, VAR_9);

   VAR_8 = FUNC_0(VAR_10, VAR_9, VAR_2->row_shift);

   FUNC_2(VAR_4, VAR_0, VAR_1, VAR_8);
   FUNC_3(VAR_4,
     VAR_2->keycodes[VAR_8], VAR_6);
  }
  FUNC_4(VAR_2->input_dev);
 }

 FUNC_5(VAR_2->row_state, VAR_3, sizeof(VAR_2->row_state));

 return VAR_7;
}
