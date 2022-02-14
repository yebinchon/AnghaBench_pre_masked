
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec3_t ;
typedef scalar_t__ qboolean ;
struct TYPE_4__ {int height; int width; TYPE_2__* verts; } ;
typedef TYPE_1__ mesh_t ;
struct TYPE_5__ {int normal; int xyz; } ;
typedef TYPE_2__ bspDrawVert_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 float FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_7( mesh_t VAR_2 ){
 int VAR_3, VAR_4, VAR_5, VAR_6;
 vec3_t VAR_7;
 vec3_t VAR_8;
 int VAR_9;
 vec3_t VAR_10;
 vec3_t VAR_11;
 int VAR_12, VAR_13;
 bspDrawVert_t *VAR_14;
 vec3_t VAR_15[8], VAR_16;
 qboolean VAR_17[8];
 qboolean VAR_18, VAR_19;
 float VAR_20;
 int VAR_21[8][2] =
 {
  {0,1}, {1,1}, {1,0}, {1,-1}, {0,-1}, {-1,-1}, {-1,0}, {-1,1}
 };


 VAR_18 = VAR_0;
 for ( VAR_3 = 0 ; VAR_3 < VAR_2.height ; VAR_3++ ) {
  FUNC_6( VAR_2.verts[VAR_3 * VAR_2.width].xyz,
      VAR_2.verts[VAR_3 * VAR_2.width + VAR_2.width - 1].xyz, VAR_11 );
  VAR_20 = FUNC_4( VAR_11 );
  if ( VAR_20 > 1.0 ) {
   break;
  }
 }
 if ( VAR_3 == VAR_2.height ) {
  VAR_18 = VAR_1;
 }

 VAR_19 = VAR_0;
 for ( VAR_3 = 0 ; VAR_3 < VAR_2.width ; VAR_3++ ) {
  FUNC_6( VAR_2.verts[VAR_3].xyz,
      VAR_2.verts[VAR_3 + ( VAR_2.height - 1 ) * VAR_2.width].xyz, VAR_11 );
  VAR_20 = FUNC_4( VAR_11 );
  if ( VAR_20 > 1.0 ) {
   break;
  }
 }
 if ( VAR_3 == VAR_2.width ) {
  VAR_19 = VAR_1;
 }


 for ( VAR_3 = 0 ; VAR_3 < VAR_2.width ; VAR_3++ ) {
  for ( VAR_4 = 0 ; VAR_4 < VAR_2.height ; VAR_4++ ) {
   VAR_9 = 0;
   VAR_14 = &VAR_2.verts[VAR_4 * VAR_2.width + VAR_3];
   FUNC_3( VAR_14->xyz, VAR_10 );
   for ( VAR_5 = 0 ; VAR_5 < 8 ; VAR_5++ ) {
    FUNC_2( VAR_15[VAR_5] );
    VAR_17[VAR_5] = VAR_0;

    for ( VAR_6 = 1 ; VAR_6 <= 3 ; VAR_6++ ) {
     VAR_12 = VAR_3 + VAR_21[VAR_5][0] * VAR_6;
     VAR_13 = VAR_4 + VAR_21[VAR_5][1] * VAR_6;
     if ( VAR_18 ) {
      if ( VAR_12 < 0 ) {
       VAR_12 = VAR_2.width - 1 + VAR_12;
      }
      else if ( VAR_12 >= VAR_2.width ) {
       VAR_12 = 1 + VAR_12 - VAR_2.width;
      }
     }
     if ( VAR_19 ) {
      if ( VAR_13 < 0 ) {
       VAR_13 = VAR_2.height - 1 + VAR_13;
      }
      else if ( VAR_13 >= VAR_2.height ) {
       VAR_13 = 1 + VAR_13 - VAR_2.height;
      }
     }

     if ( VAR_12 < 0 || VAR_12 >= VAR_2.width || VAR_13 < 0 || VAR_13 >= VAR_2.height ) {
      break;
     }
     FUNC_6( VAR_2.verts[VAR_13 * VAR_2.width + VAR_12].xyz, VAR_10, VAR_16 );
     if ( FUNC_5( VAR_16, VAR_16 ) == 0 ) {
      continue;
     }
     else {
      VAR_17[VAR_5] = VAR_1;
      FUNC_3( VAR_16, VAR_15[VAR_5] );
      break;
     }
    }
   }

   FUNC_2( VAR_8 );
   for ( VAR_5 = 0 ; VAR_5 < 8 ; VAR_5++ ) {
    if ( !VAR_17[VAR_5] || !VAR_17[( VAR_5 + 1 ) & 7] ) {
     continue;
    }
    FUNC_0( VAR_15[( VAR_5 + 1 ) & 7], VAR_15[VAR_5], VAR_7 );
    if ( FUNC_5( VAR_7, VAR_7 ) == 0 ) {
     continue;
    }
    FUNC_1( VAR_7, VAR_8, VAR_8 );
    VAR_9++;
   }
   if ( VAR_9 == 0 ) {

    VAR_9 = 1;
   }
   FUNC_5( VAR_8, VAR_14->normal );
  }
 }
}
