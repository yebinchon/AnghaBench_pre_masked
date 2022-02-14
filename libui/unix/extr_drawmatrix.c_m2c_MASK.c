
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int M32; int M31; int M22; int M21; int M12; int M11; } ;
typedef TYPE_1__ uiDrawMatrix ;
struct TYPE_6__ {int y0; int x0; int yy; int xy; int yx; int xx; } ;
typedef TYPE_2__ cairo_matrix_t ;



__attribute__((used)) static void FUNC_0(uiDrawMatrix *VAR_0, cairo_matrix_t *VAR_1)
{
 VAR_1->xx = VAR_0->M11;
 VAR_1->yx = VAR_0->M12;
 VAR_1->xy = VAR_0->M21;
 VAR_1->yy = VAR_0->M22;
 VAR_1->x0 = VAR_0->M31;
 VAR_1->y0 = VAR_0->M32;
}
