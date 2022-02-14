
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float f; int i; } ;
typedef TYPE_1__ floatint_t ;



float FUNC_0( float VAR_0 ) {
 floatint_t VAR_1;
 VAR_1.f = VAR_0;
 VAR_1.i &= 0x7FFFFFFF;
 return VAR_1.f;
}
