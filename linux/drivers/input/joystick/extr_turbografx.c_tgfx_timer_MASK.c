
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct tgfx {int sticks; int timer; TYPE_1__* pd; struct input_dev** dev; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct tgfx* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 scalar_t__ VAR_17 ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 struct tgfx* VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_20)
{
 struct tgfx *VAR_21 = FUNC_0(VAR_21, VAR_20, VAR_19);
 struct input_dev *VAR_22;
 int VAR_23, VAR_24, VAR_25;

 for (VAR_25 = 0; VAR_25 < 7; VAR_25++)
  if (VAR_21->sticks & (1 << VAR_25)) {

   VAR_22 = VAR_21->dev[VAR_25];

   FUNC_7(VAR_21->pd->port, ~(1 << VAR_25));
   VAR_23 = FUNC_6(VAR_21->pd->port) ^ 0x7f;
   VAR_24 = FUNC_5(VAR_21->pd->port) ^ 0x04;

   FUNC_1(VAR_22, VAR_0, !!(VAR_23 & VAR_10) - !!(VAR_23 & VAR_8));
   FUNC_1(VAR_22, VAR_1, !!(VAR_23 & VAR_7 ) - !!(VAR_23 & VAR_16 ));

   FUNC_2(VAR_22, VAR_6, (VAR_23 & VAR_15));
   FUNC_2(VAR_22, VAR_2, (VAR_24 & VAR_11 ));
   FUNC_2(VAR_22, VAR_3, (VAR_24 & VAR_12 ));
   FUNC_2(VAR_22, VAR_4, (VAR_24 & VAR_13 ));
   FUNC_2(VAR_22, VAR_5, (VAR_24 & VAR_14 ));

   FUNC_3(VAR_22);
  }

 FUNC_4(&VAR_21->timer, VAR_17 + VAR_9);
}
