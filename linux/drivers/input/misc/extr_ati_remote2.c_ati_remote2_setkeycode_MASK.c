
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_keymap_entry {int flags; unsigned int index; unsigned int keycode; } ;
struct input_dev {int keybit; } ;
struct ati_remote2 {unsigned int** keycode; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (unsigned int,int ) ;
 int VAR_4 ;
 int FUNC_3 (unsigned int) ;
 struct ati_remote2* FUNC_4 (struct input_dev*) ;
 scalar_t__ FUNC_5 (struct input_keymap_entry const*,unsigned int*) ;

__attribute__((used)) static int FUNC_6(struct input_dev *VAR_5,
      const struct input_keymap_entry *VAR_6,
      unsigned int *VAR_7)
{
 struct ati_remote2 *VAR_8 = FUNC_4(VAR_5);
 unsigned int VAR_9;
 int VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;

 if (VAR_6->flags & VAR_3) {
  if (VAR_6->index >= VAR_0 *
    FUNC_0(VAR_4))
   return -VAR_2;

  VAR_9 = VAR_6->index / FUNC_0(VAR_4);
  VAR_10 = VAR_6->index % FUNC_0(VAR_4);
 } else {
  if (FUNC_5(VAR_6, &VAR_12))
   return -VAR_2;

  VAR_9 = VAR_12 >> 8;
  if (VAR_9 > VAR_1)
   return -VAR_2;

  VAR_10 = FUNC_3(VAR_12 & 0xff);
  if (VAR_10 < 0)
   return -VAR_2;
 }

 *VAR_7 = VAR_8->keycode[VAR_9][VAR_10];
 VAR_8->keycode[VAR_9][VAR_10] = VAR_6->keycode;
 FUNC_2(VAR_6->keycode, VAR_5->keybit);

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_4); VAR_11++) {
   if (VAR_8->keycode[VAR_9][VAR_11] == *VAR_7)
    return 0;
  }
 }

 FUNC_1(*VAR_7, VAR_5->keybit);

 return 0;
}
