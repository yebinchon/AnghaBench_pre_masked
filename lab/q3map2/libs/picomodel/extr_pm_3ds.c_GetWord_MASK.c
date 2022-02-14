
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cofs; scalar_t__ maxofs; scalar_t__ bufptr; } ;
typedef TYPE_1__ T3dsLoaderPers ;


 int FUNC_0 (unsigned short) ;

__attribute__((used)) static int FUNC_1( T3dsLoaderPers *VAR_0 ){
 unsigned short *VAR_1;


 if ( VAR_0->cofs > VAR_0->maxofs ) {
  return 0;
 }


 VAR_1 = (unsigned short *)( VAR_0->bufptr + VAR_0->cofs );
 VAR_0->cofs += 2;
 return FUNC_0( *VAR_1 );
}
