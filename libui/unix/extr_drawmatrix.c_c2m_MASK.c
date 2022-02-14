
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



__attribute__((used)) static void FUNC_0(cairo_matrix_t *VAR_0, uiDrawMatrix *VAR_1)
{
 VAR_1->M11 = VAR_0->xx;
 VAR_1->M12 = VAR_0->yx;
 VAR_1->M21 = VAR_0->xy;
 VAR_1->M22 = VAR_0->yy;
 VAR_1->M31 = VAR_0->x0;
 VAR_1->M32 = VAR_0->y0;
}
