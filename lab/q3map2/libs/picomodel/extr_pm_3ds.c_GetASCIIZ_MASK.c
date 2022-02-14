
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* bufptr; scalar_t__ cofs; scalar_t__ maxofs; } ;
typedef TYPE_1__ T3dsLoaderPers ;



__attribute__((used)) static int FUNC_0( T3dsLoaderPers *VAR_0, char *VAR_1, int VAR_2 ){
 int VAR_3 = 0;
 int VAR_4;

 for (;; )
 {
  VAR_4 = VAR_0->bufptr[ VAR_0->cofs++ ];
  if ( VAR_4 == '\0' ) {
   break;
  }
  if ( VAR_0->cofs >= VAR_0->maxofs ) {
   VAR_1[ VAR_3 ] = '\0';
   return 0;
  }
  VAR_1[ VAR_3++ ] = VAR_4;
  if ( VAR_3 >= VAR_2 ) {
   break;
  }
 }
 VAR_1[ VAR_3 ] = '\0';
 return 1;
}
