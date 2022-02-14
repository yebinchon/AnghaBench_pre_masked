
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct input_polled_dev {struct input_dev* input; struct buttons_dev* private; } ;
struct input_dev {int dummy; } ;
struct buttons_dev {scalar_t__* count; int * keymap; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (struct input_dev*,int ,int ,int) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*) ;

__attribute__((used)) static void FUNC_5(struct input_polled_dev *VAR_3)
{
 struct buttons_dev *VAR_4 = VAR_3->private;
 struct input_dev *VAR_5 = VAR_3->input;
 u8 VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1();

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4->keymap); VAR_7++) {
  if (VAR_6 & (1U << VAR_7)) {
   if (++VAR_4->count[VAR_7] == VAR_0) {
    FUNC_2(VAR_5, VAR_1, VAR_2, VAR_7);
    FUNC_3(VAR_5, VAR_4->keymap[VAR_7], 1);
    FUNC_4(VAR_5);
   }
  } else {
   if (VAR_4->count[VAR_7] >= VAR_0) {
    FUNC_2(VAR_5, VAR_1, VAR_2, VAR_7);
    FUNC_3(VAR_5, VAR_4->keymap[VAR_7], 0);
    FUNC_4(VAR_5);
   }
   VAR_4->count[VAR_7] = 0;
  }
 }
}
