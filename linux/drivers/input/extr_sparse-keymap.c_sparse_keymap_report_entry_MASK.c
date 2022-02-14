
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int value; int code; } ;
struct key_entry {int type; TYPE_1__ sw; int keycode; int code; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct input_dev*,int ,int ,int ) ;
 int FUNC_1 (struct input_dev*,int ,unsigned int) ;
 int FUNC_2 (struct input_dev*,int ,unsigned int) ;
 int FUNC_3 (struct input_dev*) ;

void FUNC_4(struct input_dev *VAR_2, const struct key_entry *VAR_3,
    unsigned int VAR_4, bool VAR_5)
{
 switch (VAR_3->type) {
 case 130:
  FUNC_0(VAR_2, VAR_0, VAR_1, VAR_3->code);
  FUNC_1(VAR_2, VAR_3->keycode, VAR_4);
  FUNC_3(VAR_2);
  if (VAR_4 && VAR_5) {
   FUNC_1(VAR_2, VAR_3->keycode, 0);
   FUNC_3(VAR_2);
  }
  break;

 case 129:
  VAR_4 = VAR_3->sw.value;


 case 128:
  FUNC_2(VAR_2, VAR_3->sw.code, VAR_4);
  FUNC_3(VAR_2);
  break;
 }
}
