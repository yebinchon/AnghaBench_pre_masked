
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float f; int ui; } ;
typedef TYPE_1__ floatint_t ;



int FUNC_0( float VAR_0 )
{
 floatint_t VAR_1;

 VAR_1.f = VAR_0;
 VAR_1.ui &= 0x7FFFFFFF;
 VAR_1.ui = 0x7F800000 - VAR_1.ui;

 return (int)( (unsigned int)VAR_1.ui >> 31 );
}
