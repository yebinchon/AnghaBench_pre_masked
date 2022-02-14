
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad714x_slider_drv {int flt_pos; int abs_pos; } ;
struct ad714x_chip {int dev; TYPE_1__* sw; } ;
struct TYPE_2__ {struct ad714x_slider_drv* slider; } ;


 int FUNC_0 (int ,char*,int,int) ;

__attribute__((used)) static void FUNC_1(struct ad714x_chip *VAR_0, int VAR_1)
{
 struct ad714x_slider_drv *VAR_2 = &VAR_0->sw->slider[VAR_1];

 VAR_2->flt_pos = (VAR_2->flt_pos * (10 - 4) +
   VAR_2->abs_pos * 4)/10;

 FUNC_0(VAR_0->dev, "slider %d filter position:%d\n", VAR_1,
  VAR_2->flt_pos);
}
