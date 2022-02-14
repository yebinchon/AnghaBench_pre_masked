
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; } ;
struct wacom {TYPE_1__ led; } ;
struct input_dev {int dummy; } ;


 struct wacom* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (struct input_dev*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct wacom*,int,int,int) ;

__attribute__((used)) static void FUNC_4(struct input_dev *VAR_0,
    int VAR_1, int VAR_2)
{
 struct wacom *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->led.count; VAR_4++)
  FUNC_3(VAR_3, VAR_1, VAR_2, VAR_4);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  int VAR_5 = FUNC_2(VAR_4);

  if (VAR_5)
   FUNC_1(VAR_0, VAR_5, VAR_2 & (1 << VAR_4));
 }
}
