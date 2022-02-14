
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int len; int id; } ;
struct TYPE_5__ {size_t cofs; size_t maxofs; int * bufptr; } ;
typedef TYPE_1__ T3dsLoaderPers ;
typedef TYPE_2__ T3dsChunk ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static T3dsChunk *FUNC_2( T3dsLoaderPers *VAR_0 ){
 T3dsChunk *VAR_1;


 if ( VAR_0->cofs > VAR_0->maxofs ) {
  return 0;
 }





 VAR_1 = (T3dsChunk *)&VAR_0->bufptr[ VAR_0->cofs ];
 if ( !VAR_1 ) {
  return ((void*)0);
 }

 VAR_1->id = FUNC_1( VAR_1->id );
 VAR_1->len = FUNC_0( VAR_1->len );


 VAR_0->cofs += sizeof( T3dsChunk );


 return VAR_1;
}
