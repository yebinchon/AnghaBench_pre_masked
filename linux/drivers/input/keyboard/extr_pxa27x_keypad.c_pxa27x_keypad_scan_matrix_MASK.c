
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pxa27x_keypad_platform_data {int matrix_key_cols; int matrix_key_rows; } ;
struct pxa27x_keypad {int* matrix_key_state; int * keycodes; int row_shift; struct input_dev* input_dev; struct pxa27x_keypad_platform_data* pdata; } ;
struct input_dev {int dummy; } ;
typedef int new_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct input_dev*,int ,int ,int) ;
 int FUNC_5 (struct input_dev*,int ,int) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int*,int*,int) ;
 int FUNC_9 (int*,int ,int) ;

__attribute__((used)) static void FUNC_10(struct pxa27x_keypad *VAR_9)
{
 const struct pxa27x_keypad_platform_data *VAR_10 = VAR_9->pdata;
 struct input_dev *VAR_11 = VAR_9->input_dev;
 int VAR_12, VAR_13, VAR_14 = 0;
 uint32_t VAR_15[VAR_7];
 uint32_t VAR_16 = FUNC_7(VAR_1);

 VAR_14 = FUNC_1(VAR_16);

 FUNC_9(VAR_15, 0, sizeof(VAR_15));

 if (VAR_14 == 0)
  goto scan;

 if (VAR_14 == 1) {
  VAR_13 = FUNC_0(VAR_16);
  VAR_12 = FUNC_2(VAR_16);


  if (VAR_13 >= VAR_10->matrix_key_cols ||
      VAR_12 >= VAR_10->matrix_key_rows)
   goto scan;

  VAR_15[VAR_13] = (1 << VAR_12);
  goto scan;
 }

 if (VAR_14 > 1) {
  uint32_t VAR_17 = FUNC_7(VAR_2);
  uint32_t VAR_18 = FUNC_7(VAR_3);
  uint32_t VAR_19 = FUNC_7(VAR_4);
  uint32_t VAR_20 = FUNC_7(VAR_5);

  VAR_15[0] = VAR_17 & VAR_6;
  VAR_15[1] = (VAR_17 >> 16) & VAR_6;
  VAR_15[2] = VAR_18 & VAR_6;
  VAR_15[3] = (VAR_18 >> 16) & VAR_6;
  VAR_15[4] = VAR_19 & VAR_6;
  VAR_15[5] = (VAR_19 >> 16) & VAR_6;
  VAR_15[6] = VAR_20 & VAR_6;
  VAR_15[7] = (VAR_20 >> 16) & VAR_6;
 }
scan:
 for (VAR_13 = 0; VAR_13 < VAR_10->matrix_key_cols; VAR_13++) {
  uint32_t VAR_21;
  int VAR_22;

  VAR_21 = VAR_9->matrix_key_state[VAR_13] ^ VAR_15[VAR_13];
  if (VAR_21 == 0)
   continue;

  for (VAR_12 = 0; VAR_12 < VAR_10->matrix_key_rows; VAR_12++) {
   if ((VAR_21 & (1 << VAR_12)) == 0)
    continue;

   VAR_22 = FUNC_3(VAR_12, VAR_13, VAR_9->row_shift);

   FUNC_4(VAR_11, VAR_0, VAR_8, VAR_22);
   FUNC_5(VAR_11, VAR_9->keycodes[VAR_22],
      VAR_15[VAR_13] & (1 << VAR_12));
  }
 }
 FUNC_6(VAR_11);
 FUNC_8(VAR_9->matrix_key_state, VAR_15, sizeof(VAR_15));
}
