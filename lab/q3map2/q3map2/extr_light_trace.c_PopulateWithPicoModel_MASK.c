
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tw ;
struct TYPE_9__ {int numVerts; TYPE_1__* v; int infoNum; } ;
typedef TYPE_2__ traceWinding_t ;
struct TYPE_10__ {int castShadows; int surfaceNum; TYPE_5__* si; } ;
typedef TYPE_3__ traceInfo_t ;
typedef int picoVec_t ;
typedef int picoSurface_t ;
typedef int picoShader_t ;
typedef int picoModel_t ;
typedef int picoIndex_t ;
typedef int * m4x4_t ;
struct TYPE_11__ {int compileFlags; } ;
struct TYPE_8__ {int xyz; int st; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int ,int ) ;
 int * FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 (int *,int ) ;
 TYPE_5__* FUNC_11 (int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int VAR_5 ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_16( int VAR_6, picoModel_t *VAR_7, m4x4_t VAR_8 ){
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 picoSurface_t *VAR_14;
 picoShader_t *VAR_15;
 picoVec_t *VAR_16, *VAR_17;
 picoIndex_t *VAR_18;
 traceInfo_t VAR_19;
 traceWinding_t VAR_20;



 if ( VAR_7 == ((void*)0) || VAR_8 == ((void*)0) ) {
  return;
 }


 VAR_12 = FUNC_2( VAR_7 );


 for ( VAR_9 = 0; VAR_9 < VAR_12; VAR_9++ )
 {

  VAR_14 = FUNC_3( VAR_7, VAR_9 );
  if ( VAR_14 == ((void*)0) ) {
   continue;
  }


  if ( FUNC_9( VAR_14 ) != VAR_4 ) {
   continue;
  }


  VAR_15 = FUNC_8( VAR_14 );
  if ( VAR_15 == ((void*)0) ) {
   continue;
  }
  VAR_19.si = FUNC_11( FUNC_4( VAR_15 ) );
  if ( VAR_19.si == ((void*)0) ) {
   continue;
  }


  if ( ( VAR_19.si->compileFlags & VAR_2 ) ) {
   continue;
  }
  if ( ( VAR_19.si->compileFlags & VAR_3 ) &&
    !( VAR_19.si->compileFlags & VAR_0 ) &&
    !( VAR_19.si->compileFlags & VAR_1 ) ) {
   continue;
  }


  VAR_19.castShadows = VAR_6;
  VAR_19.surfaceNum = -1;


  FUNC_15( &VAR_20, 0, sizeof( VAR_20 ) );
  VAR_20.infoNum = FUNC_0( &VAR_19 );
  VAR_20.numVerts = 3;


  VAR_13 = FUNC_6( VAR_14 );
  VAR_18 = FUNC_5( VAR_14, 0 );


  for ( VAR_10 = 0; VAR_10 < VAR_13; VAR_10 += 3, VAR_18 += 3 )
  {
   for ( VAR_11 = 0; VAR_11 < 3; VAR_11++ )
   {
    VAR_16 = FUNC_10( VAR_14, VAR_18[ VAR_11 ] );
    VAR_17 = FUNC_7( VAR_14, 0, VAR_18[ VAR_11 ] );
    FUNC_13( VAR_16, VAR_20.v[ VAR_11 ].xyz );
    FUNC_12( VAR_17, VAR_20.v[ VAR_11 ].st );
    FUNC_14( VAR_8, VAR_20.v[ VAR_11 ].xyz );
   }
   FUNC_1( &VAR_20, VAR_5 );
  }
 }
}
