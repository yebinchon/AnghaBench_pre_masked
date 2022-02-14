
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad714x_touchpad_plat {int y_end_stage; int y_start_stage; int x_end_stage; int x_start_stage; } ;
struct ad714x_chip {TYPE_1__* hw; } ;
struct TYPE_2__ {struct ad714x_touchpad_plat* touchpad; } ;


 int FUNC_0 (struct ad714x_chip*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ad714x_chip *VAR_0, int VAR_1)
{
 struct ad714x_touchpad_plat *VAR_2 = &VAR_0->hw->touchpad[VAR_1];

 FUNC_0(VAR_0, VAR_2->x_start_stage, VAR_2->x_end_stage);
 FUNC_0(VAR_0, VAR_2->y_start_stage, VAR_2->y_end_stage);
}
