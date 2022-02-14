
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct key_entry {scalar_t__ type; } const key_entry ;
struct input_dev {struct key_entry const* keycode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(struct input_dev *VAR_2,
      const struct key_entry *VAR_3)
{
 struct key_entry *VAR_4;
 unsigned int VAR_5 = 0;

 for (VAR_4 = VAR_2->keycode; VAR_4->type != VAR_0; VAR_4++) {
  if (VAR_4->type == VAR_1) {
   if (VAR_4 == VAR_3)
    break;
   VAR_5++;
  }
 }

 return VAR_5;
}
