
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef float* vec3_t ;
typedef int glIndex_t ;
struct TYPE_12__ {float radius; float* color; scalar_t__ additive; int transformed; } ;
typedef TYPE_3__ dlight_t ;
typedef int byte ;
struct TYPE_10__ {int c_totalIndexes; int c_dlightIndexes; int c_dlightVertexes; } ;
struct TYPE_11__ {int num_dlights; TYPE_3__* dlights; } ;
struct TYPE_18__ {TYPE_1__ pc; TYPE_2__ refdef; } ;
struct TYPE_17__ {int integer; } ;
struct TYPE_16__ {scalar_t__ value; scalar_t__ integer; } ;
struct TYPE_15__ {int (* ftol ) (float) ;} ;
struct TYPE_14__ {int dlightBits; int numVertexes; float** normal; int numIndexes; int* indexes; int * xyz; } ;
struct TYPE_13__ {int dlightImage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 float FUNC_2 (float,float,scalar_t__) ;
 float FUNC_3 (float,float,float) ;
 float FUNC_4 (float) ;
 int FUNC_5 (int,int*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ,float*) ;
 int FUNC_7 (float*,int ,float*) ;
 TYPE_9__ VAR_10 ;
 int FUNC_8 (int,int ,int ,int**) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,int ,int ,float*) ;
 TYPE_8__* VAR_11 ;
 TYPE_7__* VAR_12 ;
 TYPE_6__ VAR_13 ;
 int FUNC_11 (float) ;
 int FUNC_12 (float) ;
 int FUNC_13 (float) ;
 TYPE_5__ VAR_14 ;
 TYPE_4__ VAR_15 ;

__attribute__((used)) static void FUNC_14( void ) {
 int VAR_16, VAR_17;
 vec3_t VAR_18;
 float *VAR_19;
 byte *VAR_20;
 byte VAR_21[VAR_9];
 float VAR_22[VAR_9][2];
 byte VAR_23[VAR_9][4];
 glIndex_t VAR_24[VAR_8];
 int VAR_25;
 float VAR_26;
 float VAR_27;
 vec3_t VAR_28;
 float VAR_29 = 0.0f;

 if ( !VAR_10.refdef.num_dlights ) {
  return;
 }

 for ( VAR_17 = 0 ; VAR_17 < VAR_10.refdef.num_dlights ; VAR_17++ ) {
  dlight_t *VAR_30;

  if ( !( VAR_14.dlightBits & ( 1 << VAR_17 ) ) ) {
   continue;
  }
  VAR_19 = VAR_22[0];
  VAR_20 = VAR_23[0];

  VAR_30 = &VAR_10.refdef.dlights[VAR_17];
  FUNC_6( VAR_30->transformed, VAR_18 );
  VAR_27 = VAR_30->radius;
  VAR_26 = 1.0f / VAR_27;

  if(VAR_12->integer)
  {
   float VAR_31;

   VAR_31 = FUNC_3(VAR_30->color[0], VAR_30->color[1], VAR_30->color[2]) * 255.0f;
   VAR_28[0] = VAR_28[1] = VAR_28[2] = VAR_31;
  }
  else if(VAR_12->value)
  {
   float VAR_32;

   VAR_32 = FUNC_3(VAR_30->color[0], VAR_30->color[1], VAR_30->color[2]) * 255.0f;
   VAR_28[0] = FUNC_2(VAR_30->color[0] * 255.0f, VAR_32, VAR_12->value);
   VAR_28[1] = FUNC_2(VAR_30->color[1] * 255.0f, VAR_32, VAR_12->value);
   VAR_28[2] = FUNC_2(VAR_30->color[2] * 255.0f, VAR_32, VAR_12->value);
  }
  else
  {
   VAR_28[0] = VAR_30->color[0] * 255.0f;
   VAR_28[1] = VAR_30->color[1] * 255.0f;
   VAR_28[2] = VAR_30->color[2] * 255.0f;
  }

  for ( VAR_16 = 0 ; VAR_16 < VAR_14.numVertexes ; VAR_16++, VAR_19 += 2, VAR_20 += 4 ) {
   int VAR_33 = 0;
   vec3_t VAR_34;

   FUNC_7( VAR_18, VAR_14.xyz[VAR_16], VAR_34 );

   VAR_10.pc.c_dlightVertexes++;

   VAR_19[0] = 0.5f + VAR_34[0] * VAR_26;
   VAR_19[1] = 0.5f + VAR_34[1] * VAR_26;

   if( !VAR_11->integer &&

     ( VAR_34[0] * VAR_14.normal[VAR_16][0] +
     VAR_34[1] * VAR_14.normal[VAR_16][1] +
     VAR_34[2] * VAR_14.normal[VAR_16][2] ) < 0.0f ) {
    VAR_33 = 63;
   } else {
    if ( VAR_19[0] < 0.0f ) {
     VAR_33 |= 1;
    } else if ( VAR_19[0] > 1.0f ) {
     VAR_33 |= 2;
    }
    if ( VAR_19[1] < 0.0f ) {
     VAR_33 |= 4;
    } else if ( VAR_19[1] > 1.0f ) {
     VAR_33 |= 8;
    }
    VAR_19[0] = VAR_19[0];
    VAR_19[1] = VAR_19[1];


    if ( VAR_34[2] > VAR_27 ) {
     VAR_33 |= 16;
     VAR_29 = 0.0f;
    } else if ( VAR_34[2] < -VAR_27 ) {
     VAR_33 |= 32;
     VAR_29 = 0.0f;
    } else {
     VAR_34[2] = FUNC_4(VAR_34[2]);
     if ( VAR_34[2] < VAR_27 * 0.5f ) {
      VAR_29 = 1.0f;
     } else {
      VAR_29 = 2.0f * (VAR_27 - VAR_34[2]) * VAR_26;
     }
    }
   }
   VAR_21[VAR_16] = VAR_33;
   VAR_20[0] = VAR_13.ftol(VAR_28[0] * VAR_29);
   VAR_20[1] = VAR_13.ftol(VAR_28[1] * VAR_29);
   VAR_20[2] = VAR_13.ftol(VAR_28[2] * VAR_29);
   VAR_20[3] = 255;
  }


  VAR_25 = 0;
  for ( VAR_16 = 0 ; VAR_16 < VAR_14.numIndexes ; VAR_16 += 3 ) {
   int VAR_35, VAR_36, VAR_37;

   VAR_35 = VAR_14.indexes[VAR_16];
   VAR_36 = VAR_14.indexes[VAR_16+1];
   VAR_37 = VAR_14.indexes[VAR_16+2];
   if ( VAR_21[VAR_35] & VAR_21[VAR_36] & VAR_21[VAR_37] ) {
    continue;
   }
   VAR_24[VAR_25] = VAR_35;
   VAR_24[VAR_25+1] = VAR_36;
   VAR_24[VAR_25+2] = VAR_37;
   VAR_25 += 3;
  }

  if ( !VAR_25 ) {
   continue;
  }

  FUNC_9( VAR_6 );
  FUNC_10( 2, VAR_5, 0, VAR_22[0] );

  FUNC_9( VAR_4 );
  FUNC_8( 4, VAR_7, 0, VAR_23 );

  FUNC_0( VAR_15.dlightImage );


  if ( VAR_30->additive ) {
   FUNC_1( VAR_3 | VAR_1 | VAR_0 );
  }
  else {
   FUNC_1( VAR_2 | VAR_1 | VAR_0 );
  }
  FUNC_5( VAR_25, VAR_24 );
  VAR_10.pc.c_totalIndexes += VAR_25;
  VAR_10.pc.c_dlightIndexes += VAR_25;
 }
}
