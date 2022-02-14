
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_14__ {int entityNum; struct TYPE_14__* nextColorModBrush; TYPE_2__* contentShader; struct TYPE_14__* next; scalar_t__ opaque; struct TYPE_14__* original; int brushNum; } ;
typedef TYPE_3__ brush_t ;
struct TYPE_17__ {int compileFlags; int maxs; int mins; } ;
struct TYPE_16__ {int origin; } ;
struct TYPE_15__ {int mapEntityNum; TYPE_3__* colorModBrushes; TYPE_3__* lastBrush; TYPE_3__* brushes; } ;
struct TYPE_13__ {TYPE_1__* colorMod; } ;
struct TYPE_12__ {scalar_t__ type; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_5__*,char*,char*) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (int ,int ,scalar_t__*) ;
 int FUNC_6 (scalar_t__*,int ) ;
 int FUNC_7 (scalar_t__*,double,scalar_t__*) ;
 TYPE_6__* VAR_3 ;
 TYPE_5__* VAR_4 ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (char*,char*,int,int,int) ;

brush_t *FUNC_9( void ){
 brush_t *VAR_8;



 if ( !FUNC_2( VAR_3 ) ) {
  return ((void*)0);
 }



 if ( VAR_3->compileFlags & VAR_2 ) {
  char VAR_9[ 32 ];
  vec3_t VAR_10;

  if ( VAR_7 == 1 ) {
   FUNC_4( "Entity %i, Brush %i: origin brushes not allowed in world\n",
      VAR_6->mapEntityNum, VAR_5 );
   return ((void*)0);
  }

  FUNC_5( VAR_3->mins, VAR_3->maxs, VAR_10 );
  FUNC_7( VAR_10, 0.5, VAR_10 );

  FUNC_8( VAR_9, "%i %i %i", (int) VAR_10[ 0 ], (int) VAR_10[ 1 ], (int) VAR_10[ 2 ] );
  FUNC_3( &VAR_4[ VAR_7 - 1 ], "origin", VAR_9 );

  FUNC_6( VAR_10, VAR_4[ VAR_7 - 1 ].origin );


  return ((void*)0);
 }


 if ( VAR_3->compileFlags & VAR_1 ) {
  if ( VAR_7 != 1 ) {
   FUNC_4( "Entity %i, Brush %i: areaportals only allowed in world\n", VAR_7 - 1, VAR_5 );
   return ((void*)0);
  }
 }


 FUNC_0();


 VAR_8 = FUNC_1( VAR_3 );


 VAR_8->entityNum = VAR_6->mapEntityNum;
 VAR_8->brushNum = VAR_5;


 VAR_8->original = VAR_8;


 if ( VAR_8->opaque || VAR_6->lastBrush == ((void*)0) ) {
  VAR_8->next = VAR_6->brushes;
  VAR_6->brushes = VAR_8;
  if ( VAR_6->lastBrush == ((void*)0) ) {
   VAR_6->lastBrush = VAR_8;
  }
 }
 else
 {
  VAR_8->next = ((void*)0);
  VAR_6->lastBrush->next = VAR_8;
  VAR_6->lastBrush = VAR_8;
 }


 if ( VAR_8->contentShader != ((void*)0) &&
   VAR_8->contentShader->colorMod != ((void*)0) &&
   VAR_8->contentShader->colorMod->type == VAR_0 ) {
  VAR_8->nextColorModBrush = VAR_6->colorModBrushes;
  VAR_6->colorModBrushes = VAR_8;
 }


 return VAR_8;
}
