
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adp5589_kpad {int * keycode; int input; TYPE_1__* var; int client; } ;
struct TYPE_2__ {int gpi_pin_base; int gpi_pin_end; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct adp5589_kpad*,int,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct adp5589_kpad *VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  int VAR_6 = FUNC_0(VAR_3->client, VAR_0 + VAR_5);
  int VAR_7 = VAR_6 & VAR_1;

  if (VAR_7 >= VAR_3->var->gpi_pin_base &&
      VAR_7 <= VAR_3->var->gpi_pin_end) {
   FUNC_1(VAR_3, VAR_6, VAR_7);
  } else {
   FUNC_2(VAR_3->input,
      VAR_3->keycode[VAR_7 - 1],
      VAR_6 & VAR_2);
  }
 }
}
