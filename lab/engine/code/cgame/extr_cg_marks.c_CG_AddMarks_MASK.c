
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int numVerts; } ;
struct TYPE_12__ {scalar_t__ time; scalar_t__ markShader; int* color; TYPE_4__* verts; TYPE_2__ poly; scalar_t__ alphaFade; struct TYPE_12__* nextMark; } ;
typedef TYPE_3__ markPoly_t ;
struct TYPE_16__ {scalar_t__ time; } ;
struct TYPE_15__ {int integer; } ;
struct TYPE_10__ {scalar_t__ energyMarkShader; } ;
struct TYPE_14__ {TYPE_1__ media; } ;
struct TYPE_13__ {int* modulate; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_8__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_6__ VAR_4 ;
 TYPE_5__ VAR_5 ;
 int FUNC_1 (scalar_t__,int,TYPE_4__*) ;

void FUNC_2( void ) {
 int VAR_6;
 markPoly_t *VAR_7, *VAR_8;
 int VAR_9;
 int VAR_10;

 if ( !VAR_4.integer ) {
  return;
 }

 VAR_7 = VAR_3.nextMark;
 for ( ; VAR_7 != &VAR_3 ; VAR_7 = VAR_8 ) {


  VAR_8 = VAR_7->nextMark;


  if ( VAR_2.time > VAR_7->time + VAR_1 ) {
   FUNC_0( VAR_7 );
   continue;
  }


  if ( VAR_7->markShader == VAR_5.media.energyMarkShader ) {

   VAR_10 = 450 - 450 * ( (VAR_2.time - VAR_7->time ) / 3000.0 );
   if ( VAR_10 < 255 ) {
    if ( VAR_10 < 0 ) {
     VAR_10 = 0;
    }
    if ( VAR_7->verts[0].modulate[0] != 0 ) {
     for ( VAR_6 = 0 ; VAR_6 < VAR_7->poly.numVerts ; VAR_6++ ) {
      VAR_7->verts[VAR_6].modulate[0] = VAR_7->color[0] * VAR_10;
      VAR_7->verts[VAR_6].modulate[1] = VAR_7->color[1] * VAR_10;
      VAR_7->verts[VAR_6].modulate[2] = VAR_7->color[2] * VAR_10;
     }
    }
   }
  }


  VAR_9 = VAR_7->time + VAR_1 - VAR_2.time;
  if ( VAR_9 < VAR_0 ) {
   VAR_10 = 255 * VAR_9 / VAR_0;
   if ( VAR_7->alphaFade ) {
    for ( VAR_6 = 0 ; VAR_6 < VAR_7->poly.numVerts ; VAR_6++ ) {
     VAR_7->verts[VAR_6].modulate[3] = VAR_10;
    }
   } else {
    for ( VAR_6 = 0 ; VAR_6 < VAR_7->poly.numVerts ; VAR_6++ ) {
     VAR_7->verts[VAR_6].modulate[0] = VAR_7->color[0] * VAR_10;
     VAR_7->verts[VAR_6].modulate[1] = VAR_7->color[1] * VAR_10;
     VAR_7->verts[VAR_6].modulate[2] = VAR_7->color[2] * VAR_10;
    }
   }
  }


  FUNC_1( VAR_7->markShader, VAR_7->poly.numVerts, VAR_7->verts );
 }
}
