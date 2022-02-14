
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cofs; scalar_t__ maxofs; scalar_t__ bufptr; } ;
typedef TYPE_1__ T3dsLoaderPers ;


 float FUNC_0 (float) ;

__attribute__((used)) static float FUNC_1( T3dsLoaderPers *VAR_0 ){
 float *VAR_1;


 if ( VAR_0->cofs > VAR_0->maxofs ) {
  return 0;
 }


 VAR_1 = (float *)( VAR_0->bufptr + VAR_0->cofs );
 VAR_0->cofs += 4;
 return FUNC_0( *VAR_1 );
}
