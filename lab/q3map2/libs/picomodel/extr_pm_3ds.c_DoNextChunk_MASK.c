
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int len; int id; } ;
struct TYPE_8__ {int cofs; long maxofs; } ;
typedef TYPE_1__ T3dsLoaderPers ;
typedef TYPE_2__ T3dsChunk ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,long) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int,...) ;

__attribute__((used)) static int FUNC_6( T3dsLoaderPers *VAR_3, int VAR_4 ){
 T3dsChunk *VAR_5;




 while ( VAR_3->cofs < VAR_4 )
 {
  long VAR_6 = VAR_3->cofs;
  if ( ( VAR_5 = FUNC_2( VAR_3 ) ) == ((void*)0) ) {
   return 0;
  }
  if ( !VAR_5->len ) {
   return 0;
  }
  VAR_6 += VAR_5->len;





  if ( VAR_5->id == VAR_1 ) {






   int VAR_7;
   VAR_7 = FUNC_3( VAR_3 );
   FUNC_3( VAR_3 );





   if ( VAR_7 == 4 ) {
    FUNC_4( VAR_2,
         "3DS version is 4. Model might load incorrectly." );
   }




  }

  if ( VAR_5->id == VAR_0 ) {
   if ( !FUNC_1( VAR_3,VAR_6 ) ) {
    return 0;
   }
   continue;
  }

  VAR_3->cofs = VAR_6;
  if ( VAR_3->cofs >= VAR_3->maxofs ) {
   break;
  }
 }
 return 1;
}
