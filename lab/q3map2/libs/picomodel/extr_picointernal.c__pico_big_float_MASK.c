
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float f; int * c; } ;
typedef TYPE_1__ floatSwapUnion ;



float FUNC_0( float VAR_0 ){
 floatSwapUnion VAR_1,VAR_2;
 VAR_1.f = VAR_0;
 VAR_2.c[ 0 ] = VAR_1.c[ 3 ];
 VAR_2.c[ 1 ] = VAR_1.c[ 2 ];
 VAR_2.c[ 2 ] = VAR_1.c[ 1 ];
 VAR_2.c[ 3 ] = VAR_1.c[ 0 ];
 return VAR_2.f;
}
