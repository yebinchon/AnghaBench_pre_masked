
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int picoByte_t ;
struct TYPE_3__ {scalar_t__ cofs; scalar_t__ maxofs; scalar_t__ bufptr; } ;
typedef TYPE_1__ T3dsLoaderPers ;



__attribute__((used)) static picoByte_t FUNC_0( T3dsLoaderPers *VAR_0 ){
 picoByte_t *VAR_1;


 if ( VAR_0->cofs > VAR_0->maxofs ) {
  return 0;
 }


 VAR_1 = (picoByte_t *)( VAR_0->bufptr + VAR_0->cofs );
 VAR_0->cofs += 1;
 return *VAR_1;
}
