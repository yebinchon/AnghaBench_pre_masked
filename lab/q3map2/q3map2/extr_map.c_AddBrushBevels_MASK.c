
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef float* vec3_t ;
struct TYPE_8__ {size_t planenum; void* bevel; int contentFlags; TYPE_1__* winding; } ;
typedef TYPE_2__ side_t ;
struct TYPE_10__ {int numsides; float* maxs; float* mins; TYPE_2__* sides; int brushNum; int entityNum; } ;
struct TYPE_9__ {float* normal; } ;


 int FUNC_0 (float*,float*,float*) ;
 float FUNC_1 (int ,float*) ;
 void* FUNC_2 (float*,float,int,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_4__*,float*,float) ;
 int FUNC_4 (float*) ;
 int FUNC_5 (float*) ;
 float FUNC_6 (float*,float*) ;
 int FUNC_7 (int ,int ,float*) ;
 float VAR_1 ;
 TYPE_5__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 float FUNC_8 (float) ;
 float FUNC_9 (float) ;
 TYPE_4__* VAR_5 ;
 int FUNC_10 (TYPE_2__*,int ,int) ;
 void* VAR_6 ;
 int FUNC_11 (char*,int ,int ,void*) ;

void FUNC_12( void ){
 int VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 side_t VAR_14;
 side_t *VAR_15, *VAR_16;
 winding_t *VAR_17, *VAR_18;
 vec3_t VAR_19;
 float VAR_20;
 vec3_t VAR_21, VAR_22;
 float VAR_23, VAR_24;




 VAR_13 = 0;
 for ( VAR_7 = 0; VAR_7 < 3; VAR_7++ ) {
  for ( VAR_8 = -1; VAR_8 <= 1; VAR_8 += 2, VAR_13++ ) {

   for ( VAR_9 = 0, VAR_15 = VAR_2->sides; VAR_9 < VAR_2->numsides; VAR_9++, VAR_15++ )
   {
    if ( ( VAR_8 > 0 && VAR_5[ VAR_15->planenum ].normal[ VAR_7 ] == 1.0f ) ||
      ( VAR_8 < 0 && VAR_5[ VAR_15->planenum ].normal[ VAR_7 ] == -1.0f ) ) {
     break;
    }

   }

   if ( VAR_9 == VAR_2->numsides ) {

    if ( VAR_2->numsides == VAR_0 ) {
     FUNC_11( "MAX_BUILD_SIDES", VAR_2->entityNum, VAR_2->brushNum, VAR_6 );
    }
    FUNC_10( VAR_15, 0, sizeof( *VAR_15 ) );
    VAR_2->numsides++;
    FUNC_5( VAR_19 );
    VAR_19[VAR_7] = VAR_8;

    if ( VAR_8 == 1 ) {

     if ( VAR_1 > 0 ) {
      VAR_20 = FUNC_9( VAR_2->maxs[ VAR_7 ] / VAR_1 ) * VAR_1;
     }
     else{
      VAR_20 = VAR_2->maxs[ VAR_7 ];
     }
    }
    else
    {

     if ( VAR_1 > 0 ) {
      VAR_20 = -FUNC_8( VAR_2->mins[ VAR_7 ] / VAR_1 ) * VAR_1;
     }
     else{
      VAR_20 = -VAR_2->mins[ VAR_7 ];
     }
    }

    VAR_15->planenum = FUNC_2( VAR_19, VAR_20, 0, ((void*)0) );
    VAR_15->contentFlags = VAR_2->sides[ 0 ].contentFlags;
    VAR_15->bevel = VAR_6;
    VAR_3++;
   }


   if ( VAR_9 != VAR_13 ) {
    VAR_14 = VAR_2->sides[VAR_13];
    VAR_2->sides[VAR_13] = VAR_2->sides[VAR_9];
    VAR_2->sides[VAR_9] = VAR_14;
   }
  }
 }




 if ( VAR_2->numsides == 6 ) {
  return;
 }


 for ( VAR_9 = 6; VAR_9 < VAR_2->numsides; VAR_9++ ) {
  VAR_15 = VAR_2->sides + VAR_9;
  VAR_17 = VAR_15->winding;
  if ( !VAR_17 ) {
   continue;
  }
  for ( VAR_10 = 0; VAR_10 < VAR_17->numpoints; VAR_10++ ) {
   VAR_11 = ( VAR_10 + 1 ) % VAR_17->numpoints;
   FUNC_7( VAR_17->p[VAR_10], VAR_17->p[VAR_11], VAR_21 );
   if ( FUNC_6( VAR_21, VAR_21 ) < 0.5f ) {
    continue;
   }
   FUNC_4( VAR_21 );
   for ( VAR_11 = 0; VAR_11 < 3; VAR_11++ ) {
    if ( VAR_21[VAR_11] == -1.0f || VAR_21[VAR_11] == 1.0f || ( VAR_21[VAR_11] == 0.0f && VAR_21[( VAR_11 + 1 ) % 3] == 0.0f ) ) {
     break;
    }
   }
   if ( VAR_11 != 3 ) {
    continue;
   }





   for ( VAR_7 = 0; VAR_7 < 3; VAR_7++ ) {
    for ( VAR_8 = -1; VAR_8 <= 1; VAR_8 += 2 ) {

     FUNC_5( VAR_22 );
     VAR_22[VAR_7] = VAR_8;
     FUNC_0( VAR_21, VAR_22, VAR_19 );
     if ( FUNC_6( VAR_19, VAR_19 ) < 0.5f ) {
      continue;
     }
     VAR_20 = FUNC_1( VAR_17->p[VAR_10], VAR_19 );



     for ( VAR_11 = 0; VAR_11 < VAR_2->numsides; VAR_11++ ) {


      if ( FUNC_3( &VAR_5[VAR_2->sides[VAR_11].planenum], VAR_19, VAR_20 ) ) {
       break;
      }

      VAR_18 = VAR_2->sides[VAR_11].winding;
      if ( !VAR_18 ) {
       continue;
      }
      VAR_24 = 0.0f;
      for ( VAR_12 = 0; VAR_12 < VAR_18->numpoints; VAR_12++ ) {
       VAR_23 = FUNC_1( VAR_18->p[VAR_12], VAR_19 ) - VAR_20;
       if ( VAR_23 > 0.1f ) {
        break;
       }
       if ( VAR_23 < VAR_24 ) {
        VAR_24 = VAR_23;
       }
      }

      if ( VAR_12 != VAR_18->numpoints ) {
       break;
      }


      if ( VAR_24 > -0.1f ) {

       break;
      }
     }

     if ( VAR_11 != VAR_2->numsides ) {
      continue;
     }





     if ( VAR_2->numsides == VAR_0 ) {
      FUNC_11( "MAX_BUILD_SIDES", VAR_2->entityNum, VAR_2->brushNum, VAR_6 );
     }
     VAR_16 = &VAR_2->sides[VAR_2->numsides];
     VAR_2->numsides++;
     FUNC_10( VAR_16, 0, sizeof( *VAR_16 ) );

     VAR_16->planenum = FUNC_2( VAR_19, VAR_20, 1, &VAR_17->p[ VAR_10 ] );
     VAR_16->contentFlags = VAR_2->sides[0].contentFlags;
     VAR_16->bevel = VAR_6;
     VAR_4++;
    }
   }
  }
 }
}
