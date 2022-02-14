
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int numpoints; float** p; } ;
typedef TYPE_2__ winding_t ;
typedef float* vec3_t ;
struct TYPE_14__ {int numFacets; float** bounds; TYPE_1__* planes; TYPE_4__* facets; } ;
typedef TYPE_3__ patchCollide_t ;
struct TYPE_15__ {int numBorders; int* borderPlanes; int* borderInward; int surfacePlane; } ;
typedef TYPE_4__ facet_t ;
struct TYPE_16__ {int integer; scalar_t__ value; } ;
typedef TYPE_5__ cvar_t ;
struct TYPE_12__ {int plane; } ;


 TYPE_2__* FUNC_0 (float*,float) ;
 int FUNC_1 (void (*) (int,int,float*),int) ;
 int FUNC_2 (TYPE_2__**,float*,float,float) ;
 int FUNC_3 (char*) ;
 TYPE_5__* FUNC_4 (char*,char*,int ) ;
 int FUNC_5 (float*,float*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,float*) ;
 int FUNC_8 (int ,float*) ;
 int FUNC_9 (float*,float*) ;
 int FUNC_10 (int ,float*,float*) ;
 int * VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ FUNC_11 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_12( void (*VAR_5)(int VAR_6, int VAR_7, float *VAR_8) ) {
 static cvar_t *VAR_9;

 static cvar_t *VAR_10;

 const patchCollide_t *VAR_11;
 facet_t *VAR_12;
 winding_t *VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21;
 float VAR_22[4];
 vec3_t VAR_23 = {-15, -15, -28}, VAR_24 = {15, 15, 28};

 vec3_t VAR_25, VAR_26;


 if ( !VAR_10 )
 {
  VAR_10 = FUNC_4( "r_debugSurface", "0", 0 );
 }

 if (VAR_10->integer != 1)
 {
  FUNC_1(VAR_5, VAR_10->integer);
  return;
 }


 if ( !VAR_2 ) {
  return;
 }


 if ( !VAR_9 ) {
  VAR_9 = FUNC_4( "cm_debugSize", "2", 0 );
 }

 VAR_11 = VAR_2;

 for ( VAR_14 = 0, VAR_12 = VAR_11->facets ; VAR_14 < VAR_11->numFacets ; VAR_14++, VAR_12++ ) {

  for ( VAR_16 = 0 ; VAR_16 < VAR_12->numBorders + 1; VAR_16++ ) {

   if (VAR_16 < VAR_12->numBorders) {
    VAR_19 = VAR_12->borderPlanes[VAR_16];
    VAR_21 = VAR_12->borderInward[VAR_16];
   }
   else {
    VAR_19 = VAR_12->surfacePlane;
    VAR_21 = VAR_3;

   }

   FUNC_7( VAR_11->planes[ VAR_19 ].plane, VAR_22 );


   if ( VAR_21 ) {
    FUNC_10( VAR_4, VAR_22, VAR_22 );
    VAR_22[3] = -VAR_22[3];
   }

   VAR_22[3] += VAR_9->value;

   for (VAR_17 = 0; VAR_17 < 3; VAR_17++)
   {
    if (VAR_22[VAR_17] > 0) VAR_25[VAR_17] = VAR_24[VAR_17];
    else VAR_25[VAR_17] = VAR_23[VAR_17];
   }
   FUNC_9(VAR_22, VAR_26);
   VAR_22[3] += FUNC_11(FUNC_5(VAR_25, VAR_26));


   VAR_13 = FUNC_0( VAR_22, VAR_22[3] );
   for ( VAR_15 = 0 ; VAR_15 < VAR_12->numBorders + 1 && VAR_13; VAR_15++ ) {

    if (VAR_15 < VAR_12->numBorders) {
     VAR_18 = VAR_12->borderPlanes[VAR_15];
     VAR_20 = VAR_12->borderInward[VAR_15];
    }
    else {
     VAR_18 = VAR_12->surfacePlane;
     VAR_20 = VAR_3;

    }

    if (VAR_18 == VAR_19) continue;

    FUNC_7( VAR_11->planes[ VAR_18 ].plane, VAR_22 );
    if ( !VAR_20 ) {
     FUNC_10( VAR_4, VAR_22, VAR_22 );
     VAR_22[3] = -VAR_22[3];
    }

     VAR_22[3] -= VAR_9->value;

    for (VAR_17 = 0; VAR_17 < 3; VAR_17++)
    {
     if (VAR_22[VAR_17] > 0) VAR_25[VAR_17] = VAR_24[VAR_17];
     else VAR_25[VAR_17] = VAR_23[VAR_17];
    }
    FUNC_9(VAR_22, VAR_26);
    VAR_22[3] -= FUNC_11(FUNC_5(VAR_25, VAR_26));

    FUNC_2( &VAR_13, VAR_22, VAR_22[3], 0.1f );
   }
   if ( VAR_13 ) {
    if ( VAR_12 == VAR_1 ) {
     VAR_5( 4, VAR_13->numpoints, VAR_13->p[0] );

    } else {
     VAR_5( 1, VAR_13->numpoints, VAR_13->p[0] );
    }
    FUNC_6( VAR_13 );
   }
   else
    FUNC_3("winding chopped away by border planes\n");
  }
 }


 {
  vec3_t VAR_27[3];

  FUNC_8( VAR_0[0], VAR_27[0] );
  FUNC_8( VAR_0[1], VAR_27[1] );
  FUNC_8( VAR_0[2], VAR_27[2] );
  VAR_5( 2, 3, VAR_27[0] );

  FUNC_8( VAR_0[2], VAR_27[0] );
  FUNC_8( VAR_0[3], VAR_27[1] );
  FUNC_8( VAR_0[0], VAR_27[2] );
  VAR_5( 2, 3, VAR_27[0] );
 }
}
