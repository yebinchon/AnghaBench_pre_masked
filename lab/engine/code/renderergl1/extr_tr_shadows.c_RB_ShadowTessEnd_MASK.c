
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_10__ {TYPE_1__* currentEntity; } ;
struct TYPE_9__ {int stencilBits; } ;
struct TYPE_8__ {int numVertexes; float** xyz; int numIndexes; int* indexes; } ;
struct TYPE_7__ {int whiteImage; } ;
struct TYPE_6__ {int lightDir; } ;
typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 float FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (float*,int,int ,int ) ;
 int FUNC_10 (float*,float*,int ) ;
 TYPE_5__ VAR_11 ;
 int* VAR_12 ;
 TYPE_4__ VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (float,float,float) ;
 int FUNC_12 (int ,int ,int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int ,int,int) ;
 int FUNC_16 (int ,int ,int ) ;
 int * VAR_15 ;
 TYPE_3__ VAR_16 ;
 TYPE_2__ VAR_17 ;

void FUNC_17( void ) {
 int VAR_18;
 int VAR_19;
 vec3_t VAR_20;
 GLboolean VAR_21[4];

 if ( VAR_13.stencilBits < 4 ) {
  return;
 }

 FUNC_8( VAR_11.currentEntity->lightDir, VAR_20 );


 for ( VAR_18 = 0 ; VAR_18 < VAR_16.numVertexes ; VAR_18++ ) {
  FUNC_9( VAR_16.xyz[VAR_18], -512, VAR_20, VAR_15[VAR_18] );
 }


 FUNC_0( VAR_14, 0, 4 * VAR_16.numVertexes );

 VAR_19 = VAR_16.numIndexes / 3;
 for ( VAR_18 = 0 ; VAR_18 < VAR_19 ; VAR_18++ ) {
  int VAR_22, VAR_23, VAR_24;
  vec3_t VAR_25, VAR_26, VAR_27;
  float *VAR_28, *VAR_29, *VAR_30;
  float VAR_31;

  VAR_22 = VAR_16.indexes[ VAR_18*3 + 0 ];
  VAR_23 = VAR_16.indexes[ VAR_18*3 + 1 ];
  VAR_24 = VAR_16.indexes[ VAR_18*3 + 2 ];

  VAR_28 = VAR_16.xyz[ VAR_22 ];
  VAR_29 = VAR_16.xyz[ VAR_23 ];
  VAR_30 = VAR_16.xyz[ VAR_24 ];

  FUNC_10( VAR_29, VAR_28, VAR_25 );
  FUNC_10( VAR_30, VAR_28, VAR_26 );
  FUNC_1( VAR_25, VAR_26, VAR_27 );

  VAR_31 = FUNC_2( VAR_27, VAR_20 );
  if ( VAR_31 > 0 ) {
   VAR_12[ VAR_18 ] = 1;
  } else {
   VAR_12[ VAR_18 ] = 0;
  }


  FUNC_6( VAR_22, VAR_23, VAR_12[ VAR_18 ] );
  FUNC_6( VAR_23, VAR_24, VAR_12[ VAR_18 ] );
  FUNC_6( VAR_24, VAR_22, VAR_12[ VAR_18 ] );
 }



 FUNC_3( VAR_17.whiteImage );
 FUNC_5( VAR_3 | VAR_2 );
 FUNC_11( 0.2f, 0.2f, 0.2f );


 FUNC_14(VAR_5, VAR_21);
 FUNC_12( VAR_7, VAR_7, VAR_7, VAR_7 );

 FUNC_13( VAR_10 );
 FUNC_15( VAR_4, 1, 255 );

 FUNC_4( VAR_0 );
 FUNC_16( VAR_9, VAR_9, VAR_8 );

 FUNC_7();

 FUNC_4( VAR_1 );
 FUNC_16( VAR_9, VAR_9, VAR_6 );

 FUNC_7();



 FUNC_12(VAR_21[0], VAR_21[1], VAR_21[2], VAR_21[3]);
}
