
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int picoVec3_t ;
typedef int picoVec2_t ;
struct TYPE_21__ {TYPE_2__* shader; } ;
typedef TYPE_1__ picoSurface_t ;
struct TYPE_22__ {int name; } ;
typedef TYPE_2__ picoShader_t ;
struct TYPE_23__ {int numSurfaces; TYPE_1__** surface; } ;
typedef TYPE_3__ picoModel_t ;
typedef int picoIndex_t ;
typedef int picoColor_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int,int *,int,int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*,int,int,int ) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (TYPE_1__*,int,int,int ) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*,int,int ) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (TYPE_1__*,int,int ) ;
 int FUNC_13 (int ,char*) ;

void FUNC_14( picoModel_t *VAR_2, picoVec3_t** VAR_3, picoVec3_t** VAR_4,
        int VAR_5, picoVec2_t **VAR_6, int VAR_7, picoColor_t **VAR_8,
        picoShader_t* VAR_9, picoIndex_t* VAR_10 ){
 int VAR_11, VAR_12;
 int VAR_13;
 picoSurface_t* VAR_14 = ((void*)0);


 for ( VAR_11 = 0 ; VAR_11 < VAR_2->numSurfaces ; VAR_11++ )
 {
  VAR_14 = VAR_2->surface[VAR_11];
  if ( VAR_14->shader == VAR_9 ) {
   break;
  }
 }


 if ( !VAR_14 || VAR_11 >= VAR_2->numSurfaces ) {

  VAR_14 = FUNC_3( VAR_2 );
  if ( !VAR_14 ) {
   FUNC_13( VAR_0, "Could not allocate a new surface!\n" );
   return;
  }


  FUNC_11( VAR_14, VAR_1 );
  FUNC_6( VAR_14, VAR_9->name );
  FUNC_9( VAR_14, VAR_9 );
 }


 for ( VAR_11 = 0 ; VAR_11 < 3 ; VAR_11++ )
 {

  int VAR_15 = FUNC_1( VAR_14 );


  VAR_13 = FUNC_0( VAR_14, *VAR_3[VAR_11], *VAR_4[VAR_11], VAR_5, VAR_6[VAR_11], VAR_7, VAR_8[VAR_11], VAR_10[VAR_11] );


  if ( VAR_13 == -1 ) {

   VAR_13 = FUNC_2( VAR_14 );


   FUNC_12( VAR_14,VAR_13, *VAR_3[VAR_11] );
   FUNC_7( VAR_14, VAR_13, *VAR_4[VAR_11] );


   for ( VAR_12 = 0 ; VAR_12 < VAR_7 ; VAR_12++ )
   {
    FUNC_4( VAR_14, VAR_12, VAR_13, VAR_8[VAR_11][VAR_12] );
   }
   for ( VAR_12 = 0 ; VAR_12 < VAR_5 ; VAR_12++ )
   {
    FUNC_8( VAR_14, VAR_12, VAR_13, VAR_6[VAR_11][VAR_12] );
   }

   FUNC_10( VAR_14, VAR_13, VAR_10[ VAR_11 ] );
  }


  FUNC_5( VAR_14, VAR_15, VAR_13 );
 }
}
