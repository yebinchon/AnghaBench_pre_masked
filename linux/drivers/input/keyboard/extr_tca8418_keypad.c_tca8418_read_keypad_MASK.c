
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tca8418_keypad {int row_shift; TYPE_1__* client; struct input_dev* input; } ;
struct input_dev {unsigned short* keycode; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct input_dev*,int ,int ,int) ;
 int FUNC_3 (struct input_dev*,unsigned short,int) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct tca8418_keypad*,int ,int*) ;

__attribute__((used)) static void FUNC_6(struct tca8418_keypad *VAR_6)
{
 struct input_dev *VAR_7 = VAR_6->input;
 unsigned short *VAR_8 = VAR_7->keycode;
 int VAR_9, VAR_10, VAR_11;
 u8 VAR_12, VAR_13, VAR_14;

 do {
  VAR_9 = FUNC_5(VAR_6, VAR_4, &VAR_12);
  if (VAR_9 < 0) {
   FUNC_1(&VAR_6->client->dev,
    "unable to read REG_KEY_EVENT_A\n");
   break;
  }


  if (VAR_12 <= 0)
   break;

  VAR_13 = VAR_12 & VAR_2;
  VAR_14 = VAR_12 & VAR_1;

  VAR_11 = VAR_14 / VAR_5;
  VAR_10 = VAR_14 % VAR_5;

  VAR_11 = (VAR_10) ? VAR_11 : VAR_11 - 1;
  VAR_10 = (VAR_10) ? VAR_10 - 1 : VAR_5 - 1;

  VAR_14 = FUNC_0(VAR_11, VAR_10, VAR_6->row_shift);
  FUNC_2(VAR_7, VAR_0, VAR_3, VAR_14);
  FUNC_3(VAR_7, VAR_8[VAR_14], VAR_13);

 } while (1);

 FUNC_4(VAR_7);
}
