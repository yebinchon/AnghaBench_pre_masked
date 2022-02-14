
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int dist; int normal; } ;
struct TYPE_14__ {int merged; size_t numportals; int num; int hint; int leaf; TYPE_2__ plane; TYPE_4__* winding; struct TYPE_14__** portals; } ;
typedef TYPE_1__ vportal_t ;
typedef TYPE_2__ visPlane_t ;
typedef TYPE_1__ leaf_t ;
struct TYPE_16__ {int numpoints; double** points; } ;
typedef TYPE_4__ fixedWinding_t ;
typedef int FILE ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 void* FUNC_1 (int) ;
 char* VAR_3 ;
 int FUNC_2 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (double*,double*) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*,char*) ;
 int FUNC_9 (int *,char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_1__* VAR_17 ;
 TYPE_1__* FUNC_11 (int) ;
 int * VAR_18 ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int VAR_19 ;

void FUNC_13( char *VAR_20 ){
 int VAR_21, VAR_22, VAR_23;
 vportal_t *VAR_24;
 leaf_t *VAR_25;
 char VAR_26[80];
 FILE *VAR_27;
 int VAR_28;
 fixedWinding_t *VAR_29;
 int VAR_30[2];
 visPlane_t VAR_31;

 if ( !FUNC_12( VAR_20,"-" ) ) {
  VAR_27 = VAR_18;
 }
 else
 {
  VAR_27 = FUNC_8( VAR_20, "r" );
  if ( !VAR_27 ) {
   FUNC_0( "LoadPortals: couldn't read %s\n",VAR_20 );
  }
 }

 if ( FUNC_9( VAR_27,"%79s\n%i\n%i\n%i\n",VAR_26, &VAR_15, &VAR_13, &VAR_12 ) != 4 ) {
  FUNC_0( "LoadPortals: failed to read header" );
 }
 if ( FUNC_12( VAR_26,VAR_3 ) ) {
  FUNC_0( "LoadPortals: not a portal file" );
 }

 FUNC_4( "%6i portalclusters\n", VAR_15 );
 FUNC_4( "%6i numportals\n", VAR_13 );
 FUNC_4( "%6i numfaces\n", VAR_12 );


 VAR_8 = ( ( VAR_15 + 63 ) & ~63 ) >> 3;
 VAR_9 = VAR_8 / sizeof( long );

 VAR_14 = ( ( VAR_13 * 2 + 63 ) & ~63 ) >> 3;
 VAR_16 = VAR_14 / sizeof( long );


 VAR_17 = FUNC_11( 2 * VAR_13 * sizeof( vportal_t ) );
 FUNC_10( VAR_17, 0, 2 * VAR_13 * sizeof( vportal_t ) );

 VAR_10 = FUNC_11( VAR_15 * sizeof( leaf_t ) );
 FUNC_10( VAR_10, 0, VAR_15 * sizeof( leaf_t ) );

 for ( VAR_21 = 0; VAR_21 < VAR_15; VAR_21++ )
  VAR_10[VAR_21].merged = -1;

 VAR_11 = VAR_4 + VAR_15 * VAR_8;

 if ( VAR_11 > VAR_0 ) {
  FUNC_0( "MAX_MAP_VISIBILITY exceeded" );
 }

 ( (int *)VAR_5 )[0] = VAR_15;
 ( (int *)VAR_5 )[1] = VAR_8;

 for ( VAR_21 = 0, VAR_24 = VAR_17 ; VAR_21 < VAR_13 ; VAR_21++ )
 {
  if ( FUNC_9( VAR_27, "%i %i %i ", &VAR_28, &VAR_30[0], &VAR_30[1] ) != 3 ) {
   FUNC_0( "LoadPortals: reading portal %i", VAR_21 );
  }
  if ( VAR_28 > VAR_1 ) {
   FUNC_0( "LoadPortals: portal %i has too many points", VAR_21 );
  }
  if ( (unsigned)VAR_30[0] > VAR_15
    || (unsigned)VAR_30[1] > VAR_15 ) {
   FUNC_0( "LoadPortals: reading portal %i", VAR_21 );
  }
  if ( FUNC_9( VAR_27, "%i ", &VAR_23 ) != 1 ) {
   FUNC_0( "LoadPortals: reading hint state" );
  }

  VAR_29 = VAR_24->winding = FUNC_1( VAR_28 );
  VAR_29->numpoints = VAR_28;

  for ( VAR_22 = 0 ; VAR_22 < VAR_28 ; VAR_22++ )
  {
   double VAR_32[3];
   int VAR_33;



   if ( FUNC_9( VAR_27, "(%lf %lf %lf ) "
       , &VAR_32[0], &VAR_32[1], &VAR_32[2] ) != 3 ) {
    FUNC_0( "LoadPortals: reading portal %i", VAR_21 );
   }
   for ( VAR_33 = 0 ; VAR_33 < 3 ; VAR_33++ )
    VAR_29->points[VAR_22][VAR_33] = VAR_32[VAR_33];
  }
  FUNC_9( VAR_27, "\n" );


  FUNC_2( VAR_29, &VAR_31 );


  VAR_25 = &VAR_10[VAR_30[0]];
  if ( VAR_25->numportals == VAR_2 ) {
   FUNC_0( "Leaf with too many portals" );
  }
  VAR_25->portals[VAR_25->numportals] = VAR_24;
  VAR_25->numportals++;

  VAR_24->num = VAR_21 + 1;
  VAR_24->hint = VAR_23;
  VAR_24->winding = VAR_29;
  FUNC_6( VAR_19, VAR_31.normal, VAR_24->plane.normal );
  VAR_24->plane.dist = -VAR_31.dist;
  VAR_24->leaf = VAR_30[1];
  FUNC_3( VAR_24 );
  VAR_24++;


  VAR_25 = &VAR_10[VAR_30[1]];
  if ( VAR_25->numportals == VAR_2 ) {
   FUNC_0( "Leaf with too many portals" );
  }
  VAR_25->portals[VAR_25->numportals] = VAR_24;
  VAR_25->numportals++;

  VAR_24->num = VAR_21 + 1;
  VAR_24->hint = VAR_23;
  VAR_24->winding = FUNC_1( VAR_29->numpoints );
  VAR_24->winding->numpoints = VAR_29->numpoints;
  for ( VAR_22 = 0 ; VAR_22 < VAR_29->numpoints ; VAR_22++ )
  {
   FUNC_5( VAR_29->points[VAR_29->numpoints - 1 - VAR_22], VAR_24->winding->points[VAR_22] );
  }

  VAR_24->plane = VAR_31;
  VAR_24->leaf = VAR_30[0];
  FUNC_3( VAR_24 );
  VAR_24++;

 }

 VAR_7 = FUNC_11( 2 * VAR_12 * sizeof( vportal_t ) );
 FUNC_10( VAR_7, 0, 2 * VAR_12 * sizeof( vportal_t ) );

 VAR_6 = FUNC_11( VAR_15 * sizeof( leaf_t ) );
 FUNC_10( VAR_6, 0, VAR_15 * sizeof( leaf_t ) );

 for ( VAR_21 = 0, VAR_24 = VAR_7; VAR_21 < VAR_12; VAR_21++ )
 {
  if ( FUNC_9( VAR_27, "%i %i ", &VAR_28, &VAR_30[0] ) != 2 ) {
   FUNC_0( "LoadPortals: reading portal %i", VAR_21 );
  }

  VAR_29 = VAR_24->winding = FUNC_1( VAR_28 );
  VAR_29->numpoints = VAR_28;

  for ( VAR_22 = 0 ; VAR_22 < VAR_28 ; VAR_22++ )
  {
   double VAR_34[3];
   int VAR_35;



   if ( FUNC_9( VAR_27, "(%lf %lf %lf ) "
       , &VAR_34[0], &VAR_34[1], &VAR_34[2] ) != 3 ) {
    FUNC_0( "LoadPortals: reading portal %i", VAR_21 );
   }
   for ( VAR_35 = 0 ; VAR_35 < 3 ; VAR_35++ )
    VAR_29->points[VAR_22][VAR_35] = VAR_34[VAR_35];
  }
  FUNC_9( VAR_27, "\n" );


  FUNC_2( VAR_29, &VAR_31 );

  VAR_25 = &VAR_6[VAR_30[0]];
  VAR_25->merged = -1;
  if ( VAR_25->numportals == VAR_2 ) {
   FUNC_0( "Leaf with too many faces" );
  }
  VAR_25->portals[VAR_25->numportals] = VAR_24;
  VAR_25->numportals++;

  VAR_24->num = VAR_21 + 1;
  VAR_24->winding = VAR_29;

  FUNC_6( VAR_19, VAR_31.normal, VAR_24->plane.normal );
  VAR_24->plane.dist = -VAR_31.dist;
  VAR_24->leaf = -1;
  FUNC_3( VAR_24 );
  VAR_24++;
 }

 FUNC_7( VAR_27 );
}
