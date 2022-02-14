
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef unsigned int u16 ;
struct nspire_keypad {int int_mask; unsigned int* state; scalar_t__ reg_base; int row_shift; scalar_t__ active_low; struct input_dev* input; } ;
struct input_dev {unsigned short* keycode; } ;
typedef int state ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int FUNC_0 (int,int,int ) ;
 int VAR_7 ;
 int FUNC_1 (struct input_dev*,int ,int ,unsigned int) ;
 int FUNC_2 (struct input_dev*,unsigned short,unsigned int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (unsigned int*,scalar_t__,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_8, void *VAR_9)
{
 struct nspire_keypad *VAR_10 = VAR_9;
 struct input_dev *VAR_11 = VAR_10->input;
 unsigned short *VAR_12 = VAR_11->keycode;
 unsigned int VAR_13;
 int VAR_14, VAR_15;
 u32 VAR_16;
 u16 VAR_17[8];
 u16 VAR_18, VAR_19;

 VAR_16 = FUNC_5(VAR_10->reg_base + VAR_6) & VAR_10->int_mask;
 if (!VAR_16)
  return VAR_2;

 FUNC_4(VAR_17, VAR_10->reg_base + VAR_5, sizeof(VAR_17));

 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
  VAR_18 = VAR_17[VAR_14];
  if (VAR_10->active_low)
   VAR_18 = ~VAR_18;

  VAR_19 = VAR_18 ^ VAR_10->state[VAR_14];
  if (!VAR_19)
   continue;

  VAR_10->state[VAR_14] = VAR_18;

  for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
   if (!(VAR_19 & (1U << VAR_15)))
    continue;

   VAR_13 = FUNC_0(VAR_14, VAR_15, VAR_10->row_shift);
   FUNC_1(VAR_11, VAR_0, VAR_7, VAR_13);
   FUNC_2(VAR_11, VAR_12[VAR_13],
      VAR_18 & (1U << VAR_15));
  }
 }

 FUNC_3(VAR_11);

 FUNC_6(0x3, VAR_10->reg_base + VAR_6);

 return VAR_1;
}
