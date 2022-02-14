
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct adp5589_kpad {int gpimapsize; int input; TYPE_2__* gpimap; TYPE_3__* client; TYPE_1__* var; int is_adp5585; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {unsigned short pin; int sw_evt; } ;
struct TYPE_4__ {unsigned short gpi_pin_row_end; unsigned short gpi_pin_row_base; unsigned short gpi_pin_col_base; int (* reg ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int *,char*,unsigned short) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct adp5589_kpad *VAR_3)
{
 int VAR_4, VAR_5;
 int VAR_6;
 int VAR_7 = FUNC_0(VAR_3->client,
         VAR_3->var->reg(VAR_0));
 int VAR_8 = FUNC_0(VAR_3->client,
         VAR_3->var->reg(VAR_1));
 int VAR_9 = !VAR_3->is_adp5585 ?
   FUNC_0(VAR_3->client, VAR_2) : 0;

 for (VAR_6 = 0; VAR_6 < VAR_3->gpimapsize; VAR_6++) {
  unsigned short VAR_10 = VAR_3->gpimap[VAR_6].pin;

  if (VAR_10 <= VAR_3->var->gpi_pin_row_end) {
   VAR_4 = VAR_7;
   VAR_5 = VAR_10 - VAR_3->var->gpi_pin_row_base;
  } else if ((VAR_10 - VAR_3->var->gpi_pin_col_base) < 8) {
   VAR_4 = VAR_8;
   VAR_5 = VAR_10 - VAR_3->var->gpi_pin_col_base;
  } else {
   VAR_4 = VAR_9;
   VAR_5 = VAR_10 - VAR_3->var->gpi_pin_col_base - 8;
  }

  if (VAR_4 < 0) {
   FUNC_1(&VAR_3->client->dev,
    "Can't read GPIO_DAT_STAT switch %d, default to OFF\n",
    VAR_10);
   VAR_4 = 0;
  }

  FUNC_2(VAR_3->input,
        VAR_3->gpimap[VAR_6].sw_evt,
        !(VAR_4 & (1 << VAR_5)));
 }

 FUNC_3(VAR_3->input);
}
