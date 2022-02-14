
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad714x_slider_plat {int end_stage; int start_stage; } ;
struct ad714x_chip {TYPE_1__* hw; } ;
struct TYPE_2__ {struct ad714x_slider_plat* slider; } ;


 int FUNC_0 (struct ad714x_chip*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ad714x_chip *VAR_0, int VAR_1)
{
 struct ad714x_slider_plat *VAR_2 = &VAR_0->hw->slider[VAR_1];

 FUNC_0(VAR_0, VAR_2->start_stage, VAR_2->end_stage);
}
