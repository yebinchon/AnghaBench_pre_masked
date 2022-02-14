
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ surfaceType_t ;
struct TYPE_5__ {int planeNum; int outputNum; size_t surfaceNum; int fogNum; scalar_t__ type; } ;
typedef TYPE_1__ mapDrawSurface_t ;


 int FUNC_0 (char*,size_t) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 size_t VAR_5 ;

mapDrawSurface_t *FUNC_2( surfaceType_t VAR_6 ){
 mapDrawSurface_t *VAR_7;



 if ( VAR_6 <= VAR_2 || VAR_6 >= VAR_1 ) {
  FUNC_0( "AllocDrawSurface: Invalid surface type %d specified", VAR_6 );
 }


 if ( VAR_5 >= VAR_0 ) {
  FUNC_0( "MAX_MAP_DRAW_SURFS (%d) exceeded", VAR_0 );
 }
 VAR_7 = &VAR_4[ VAR_5 ];
 VAR_5++;


 FUNC_1( VAR_7, 0, sizeof( mapDrawSurface_t ) );
 VAR_7->type = VAR_6;
 VAR_7->planeNum = -1;
 VAR_7->fogNum = VAR_3;
 VAR_7->outputNum = -1;
 VAR_7->surfaceNum = VAR_5 - 1;

 return VAR_7;
}
