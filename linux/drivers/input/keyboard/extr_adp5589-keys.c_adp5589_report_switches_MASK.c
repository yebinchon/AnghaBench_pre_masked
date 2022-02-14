
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adp5589_kpad {int gpimapsize; TYPE_1__* gpimap; int input; } ;
struct TYPE_2__ {int pin; int sw_evt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct adp5589_kpad *VAR_1,
        int VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->gpimapsize; VAR_4++) {
  if (VAR_3 == VAR_1->gpimap[VAR_4].pin) {
   FUNC_0(VAR_1->input,
         VAR_1->gpimap[VAR_4].sw_evt,
         VAR_2 & VAR_0);
   break;
  }
 }
}
