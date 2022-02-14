
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; scalar_t__ numVerts; } ;
typedef TYPE_1__ mapDrawSurface_t ;
struct TYPE_9__ {int firstDrawSurf; } ;
typedef TYPE_2__ entity_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 int VAR_5 ;

void FUNC_3( entity_t *VAR_6 ){
 int VAR_7, VAR_8, VAR_9;
 mapDrawSurface_t *VAR_10, *VAR_11;



 FUNC_1( VAR_3, "--- TidyEntitySurfaces ---\n" );


 VAR_9 = 0;
 for ( VAR_7 = VAR_6->firstDrawSurf, VAR_8 = VAR_6->firstDrawSurf; VAR_8 < VAR_5; VAR_7++, VAR_8++ )
 {

  VAR_10 = &VAR_4[ VAR_7 ];


  for ( ; VAR_8 < VAR_5; VAR_8++ )
  {

   VAR_11 = &VAR_4[ VAR_8 ];


   if ( VAR_11->type == VAR_1 || VAR_11->type == VAR_2 ||
     ( VAR_11->type != VAR_0 && VAR_11->numVerts > 0 ) ) {
    break;
   }


   FUNC_0( VAR_11 );
   VAR_9++;
  }


  if ( VAR_7 != VAR_8 ) {
   FUNC_2( VAR_10, VAR_11, sizeof( mapDrawSurface_t ) );
  }
 }


 VAR_5 = VAR_7;


 FUNC_1( VAR_3, "%9d empty or malformed surfaces deleted\n", VAR_9 );
}
