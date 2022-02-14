
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float xscale; float bias; float yscale; } ;


 TYPE_1__ VAR_0 ;

void FUNC_0( float *VAR_1, float *VAR_2, float *VAR_3, float *VAR_4 ) {

 *VAR_1 = *VAR_1 * VAR_0.xscale + VAR_0.bias;
 *VAR_2 *= VAR_0.yscale;
 *VAR_3 *= VAR_0.xscale;
 *VAR_4 *= VAR_0.yscale;
}
