
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int layout; } ;
typedef TYPE_1__ uiDrawTextLayout ;
struct TYPE_6__ {int height; int width; } ;
typedef TYPE_2__ PangoRectangle ;


 double FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,TYPE_2__*) ;

void FUNC_2(uiDrawTextLayout *VAR_0, double *VAR_1, double *VAR_2)
{
 PangoRectangle VAR_3;

 FUNC_1(VAR_0->layout, ((void*)0), &VAR_3);
 *VAR_1 = FUNC_0(VAR_3.width);
 *VAR_2 = FUNC_0(VAR_3.height);
}
