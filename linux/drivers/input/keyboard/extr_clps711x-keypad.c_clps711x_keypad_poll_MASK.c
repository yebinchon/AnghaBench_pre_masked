
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct input_polled_dev {TYPE_1__* input; struct clps711x_keypad_data* private; } ;
struct clps711x_keypad_data {int row_count; int syscon; int row_shift; struct clps711x_gpio_data* gpio_data; } ;
struct clps711x_gpio_data {int last_state; int desc; } ;
struct TYPE_4__ {unsigned short* keycode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int) ;
 int FUNC_6 (TYPE_1__*,unsigned short const,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int,int ) ;

__attribute__((used)) static void FUNC_11(struct input_polled_dev *VAR_5)
{
 const unsigned short *VAR_6 = VAR_5->input->keycode;
 struct clps711x_keypad_data *VAR_7 = VAR_5->private;
 bool VAR_8 = 0;
 int VAR_9, VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {

  FUNC_8(VAR_7->syscon, VAR_4,
       VAR_3,
       FUNC_1(8 + VAR_9));


  for (VAR_10 = 0; VAR_10 < VAR_7->row_count; VAR_10++) {
   struct clps711x_gpio_data *VAR_11 = &VAR_7->gpio_data[VAR_10];
   bool VAR_12, VAR_13;


   do {
    VAR_12 = FUNC_4(VAR_11->desc);
    FUNC_3();
    VAR_13 = FUNC_4(VAR_11->desc);
   } while (VAR_12 != VAR_13);

   if (FUNC_10(VAR_9, VAR_11->last_state) != VAR_12) {
    int VAR_14 = FUNC_0(VAR_10, VAR_9,
           VAR_7->row_shift);

    if (VAR_12) {
     FUNC_9(VAR_9, VAR_11->last_state);
     FUNC_5(VAR_5->input, VAR_1,
          VAR_2, VAR_14);
    } else {
     FUNC_2(VAR_9, VAR_11->last_state);
    }

    if (VAR_6[VAR_14])
     FUNC_6(VAR_5->input,
        VAR_6[VAR_14], VAR_12);
    VAR_8 = 1;
   }
  }


  FUNC_8(VAR_7->syscon, VAR_4,
       VAR_3, FUNC_1(1));
 }

 if (VAR_8)
  FUNC_7(VAR_5->input);
}
