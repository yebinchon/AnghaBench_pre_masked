
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct matrix_keymap_data {int keymap_size; unsigned int* keymap; } ;
struct TYPE_2__ {int parent; } ;
struct input_dev {unsigned short* keycode; int keycodesize; size_t keycodemax; int keybit; int evbit; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;
 unsigned short* FUNC_4 (int ,size_t,int,int ) ;
 unsigned int FUNC_5 (unsigned int) ;
 int FUNC_6 (struct input_dev*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_7 (char const*,unsigned int,unsigned int,struct input_dev*) ;

int FUNC_8(const struct matrix_keymap_data *VAR_5,
          const char *VAR_6,
          unsigned int VAR_7, unsigned int VAR_8,
          unsigned short *VAR_9,
          struct input_dev *VAR_10)
{
 unsigned int VAR_11 = FUNC_5(VAR_8);
 size_t VAR_12 = VAR_7 << VAR_11;
 int VAR_13;
 int VAR_14;

 if (FUNC_0(!VAR_10->dev.parent))
  return -VAR_0;

 if (!VAR_9) {
  VAR_9 = FUNC_4(VAR_10->dev.parent,
          VAR_12, sizeof(*VAR_9),
          VAR_3);
  if (!VAR_9) {
   FUNC_3(VAR_10->dev.parent,
    "Unable to allocate memory for keymap");
   return -VAR_1;
  }
 }

 VAR_10->keycode = VAR_9;
 VAR_10->keycodesize = sizeof(*VAR_9);
 VAR_10->keycodemax = VAR_12;

 FUNC_2(VAR_2, VAR_10->evbit);

 if (VAR_5) {
  for (VAR_13 = 0; VAR_13 < VAR_5->keymap_size; VAR_13++) {
   unsigned int VAR_15 = VAR_5->keymap[VAR_13];

   if (!FUNC_6(VAR_10, VAR_7, VAR_8,
         VAR_11, VAR_15))
    return -VAR_0;
  }
 } else {
  VAR_14 = FUNC_7(VAR_6, VAR_7, VAR_8,
         VAR_10);
  if (VAR_14)
   return VAR_14;
 }

 FUNC_1(VAR_4, VAR_10->keybit);

 return 0;
}
