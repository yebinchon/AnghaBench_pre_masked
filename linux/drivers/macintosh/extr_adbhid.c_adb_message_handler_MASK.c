
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_4__ {TYPE_1__* input; } ;
struct TYPE_3__ {int timer; } ;





 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__** VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(struct notifier_block *VAR_4, unsigned long VAR_5, void *VAR_6)
{
 switch (VAR_5) {
 case 128:
 case 129:

  {
   int VAR_7;
   for (VAR_7 = 1; VAR_7 < 16; VAR_7++) {
    if (VAR_1[VAR_7])
     FUNC_3(&VAR_1[VAR_7]->input->timer);
   }
  }


  while (VAR_2)
   FUNC_0();






  if (VAR_3)
   FUNC_1();

  break;

 case 130:
  FUNC_2();
  break;
 }
 return VAR_0;
}
