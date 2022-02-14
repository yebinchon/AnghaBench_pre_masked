
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dev; } ;
struct imx_keypad {int cols_en_mask; unsigned short* matrix_stable_state; int rows_en_mask; int * keycodes; struct input_dev* input_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*,int ,unsigned short) ;
 int FUNC_2 (struct input_dev*,int ,int ,int) ;
 int FUNC_3 (struct input_dev*,int ,unsigned short) ;
 int FUNC_4 (struct input_dev*) ;

__attribute__((used)) static void FUNC_5(struct imx_keypad *VAR_5,
       unsigned short *VAR_6)
{
 struct input_dev *VAR_7 = VAR_5->input_dev;
 int VAR_8, VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  unsigned short VAR_10;
  int VAR_11;

  if ((VAR_5->cols_en_mask & (1 << VAR_9)) == 0)
   continue;

  VAR_10 = VAR_5->matrix_stable_state[VAR_9] ^
      VAR_6[VAR_9];

  if (VAR_10 == 0)
   continue;

  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
   if ((VAR_5->rows_en_mask & (1 << VAR_8)) == 0)
    continue;
   if ((VAR_10 & (1 << VAR_8)) == 0)
    continue;

   VAR_11 = FUNC_0(VAR_8, VAR_9, VAR_1);
   FUNC_2(VAR_7, VAR_0, VAR_4, VAR_11);
   FUNC_3(VAR_7, VAR_5->keycodes[VAR_11],
    VAR_6[VAR_9] & (1 << VAR_8));
   FUNC_1(&VAR_7->dev, "Event code: %d, val: %d",
    VAR_5->keycodes[VAR_11],
    VAR_6[VAR_9] & (1 << VAR_8));
  }
 }
 FUNC_4(VAR_7);
}
