
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {int serio; } ;
struct psmouse {TYPE_1__ ps2dev; } ;
struct byd_data {int touch; int abs_x; int abs_y; struct psmouse* psmouse; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct psmouse*) ;
 struct byd_data* FUNC_1 (int ,struct timer_list*,int ) ;
 struct byd_data* VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 struct byd_data *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_3);
 struct psmouse *VAR_6 = VAR_5->psmouse;

 FUNC_3(VAR_6->ps2dev.serio);
 VAR_5->touch = 0;

 FUNC_0(VAR_6);

 FUNC_2(VAR_6->ps2dev.serio);






 VAR_5->abs_x = VAR_1 / 2;
 VAR_5->abs_y = VAR_0 / 2;
}
