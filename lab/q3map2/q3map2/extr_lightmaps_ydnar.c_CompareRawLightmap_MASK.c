
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* si; } ;
typedef TYPE_2__ surfaceInfo_t ;
struct TYPE_8__ {int numLightSurfaces; int firstLightSurface; int w; int h; scalar_t__* styles; } ;
typedef TYPE_3__ rawLightmap_t ;
struct TYPE_6__ {int shader; } ;


 int VAR_0 ;
 size_t* VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int ,int ) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int FUNC_1( const void *VAR_4, const void *VAR_5 ){
 rawLightmap_t *VAR_6, *VAR_7;
 surfaceInfo_t *VAR_8, *VAR_9;
 int VAR_10, VAR_11, VAR_12;



 VAR_6 = &VAR_2[ *( (int*) VAR_4 ) ];
 VAR_7 = &VAR_2[ *( (int*) VAR_5 ) ];


 VAR_11 = ( VAR_6->numLightSurfaces < VAR_7->numLightSurfaces ? VAR_6->numLightSurfaces : VAR_7->numLightSurfaces );


 for ( VAR_10 = 0; VAR_10 < VAR_11; VAR_10++ )
 {

  VAR_8 = &VAR_3[ VAR_1[ VAR_6->firstLightSurface + VAR_10 ] ];
  VAR_9 = &VAR_3[ VAR_1[ VAR_7->firstLightSurface + VAR_10 ] ];


  VAR_12 = FUNC_0( VAR_8->si->shader, VAR_9->si->shader );
  if ( VAR_12 != 0 ) {
   return VAR_12;
  }
 }


 VAR_12 = 0;
 for ( VAR_10 = 0; VAR_10 < VAR_0; VAR_10++ )
  VAR_12 += VAR_7->styles[ VAR_10 ] - VAR_6->styles[ VAR_10 ];
 if ( VAR_12 ) {
  return VAR_12;
 }


 VAR_12 = ( VAR_7->w * VAR_7->h ) - ( VAR_6->w * VAR_6->h );
 if ( VAR_12 != 0 ) {
  return VAR_12;
 }


 return 0;
}
