
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float xscale; float bias; float yscale; } ;
struct TYPE_4__ {TYPE_1__ uiDC; } ;


 TYPE_2__ VAR_0 ;

void FUNC_0( float *VAR_1, float *VAR_2, float *VAR_3, float *VAR_4 ) {

 *VAR_1 = *VAR_1 * VAR_0.uiDC.xscale + VAR_0.uiDC.bias;
 *VAR_2 *= VAR_0.uiDC.yscale;
 *VAR_3 *= VAR_0.uiDC.xscale;
 *VAR_4 *= VAR_0.uiDC.yscale;
}
