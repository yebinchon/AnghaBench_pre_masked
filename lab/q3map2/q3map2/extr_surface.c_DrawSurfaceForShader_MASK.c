
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int shaderInfo_t ;
struct TYPE_5__ {int * shaderInfo; scalar_t__ entityNum; } ;
typedef TYPE_1__ mapDrawSurface_t ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (char*) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

mapDrawSurface_t *FUNC_2( char *VAR_3 ){
 int VAR_4;
 shaderInfo_t *VAR_5;
 mapDrawSurface_t *VAR_6;



 VAR_5 = FUNC_1( VAR_3 );


 for ( VAR_4 = 0; VAR_4 < VAR_2; VAR_4++ )
 {

  VAR_6 = &VAR_1[ VAR_4 ];


  if ( VAR_6->shaderInfo == VAR_5 ) {
   return VAR_6;
  }
 }


 VAR_6 = FUNC_0( VAR_0 );
 VAR_6->entityNum = 0;
 VAR_6->shaderInfo = FUNC_1( VAR_3 );


 return VAR_6;
}
