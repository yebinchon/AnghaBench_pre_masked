
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float f; int i; } ;
typedef TYPE_1__ floatint_t ;



float FUNC_0(float VAR_0) {
 floatint_t VAR_1;
 float VAR_2, VAR_3;
 const float VAR_4 = 1.5F;

 VAR_2 = VAR_0 * 0.5F;
 VAR_1.f = VAR_0;
 VAR_1.i = 0x5f3759df - ( VAR_1.i >> 1 );
 VAR_3 = VAR_1.f;
 VAR_3 = VAR_3 * ( VAR_4 - ( VAR_2 * VAR_3 * VAR_3 ) );
 VAR_3 = VAR_3 * ( VAR_4 - ( VAR_2 * VAR_3 * VAR_3 ) );
 return VAR_0 * VAR_3;
}
