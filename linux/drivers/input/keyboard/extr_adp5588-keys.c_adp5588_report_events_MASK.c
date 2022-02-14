
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adp5588_kpad {int gpimapsize; int * keycode; int input; TYPE_1__* gpimap; int client; } ;
struct TYPE_2__ {int pin; int sw_evt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct adp5588_kpad *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  int VAR_9 = FUNC_0(VAR_5->client, VAR_4 + VAR_7);
  int VAR_10 = VAR_9 & VAR_2;

  if (VAR_10 >= VAR_0 && VAR_10 <= VAR_1) {
   for (VAR_8 = 0; VAR_8 < VAR_5->gpimapsize; VAR_8++) {
    if (VAR_10 == VAR_5->gpimap[VAR_8].pin) {
     FUNC_2(VAR_5->input,
       VAR_5->gpimap[VAR_8].sw_evt,
       VAR_9 & VAR_3);
     break;
    }
   }
  } else {
   FUNC_1(VAR_5->input,
      VAR_5->keycode[VAR_10 - 1],
      VAR_9 & VAR_3);
  }
 }
}
