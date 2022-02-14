
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_2__ {float** xyz; scalar_t__ firstIndex; scalar_t__ numVertexes; scalar_t__ numIndexes; int * normal; } ;


 int FUNC_0 (float*,float*,float*) ;
 int FUNC_1 (float*,float*,float*,float*,float,float,float,float) ;
 int FUNC_2 (float*,int ) ;
 int FUNC_3 (float*,float*,float*) ;
 int FUNC_4 (float*) ;
 int FUNC_5 (float*,int,float*,float*) ;
 int FUNC_6 (float*,float,float*) ;
 int FUNC_7 (char const*) ;
 TYPE_1__ VAR_0 ;

void FUNC_8( const char *VAR_1 ) {
 int VAR_2;
 vec3_t VAR_3, VAR_4, VAR_5;
 int VAR_6;
 int VAR_7;
 float VAR_8[4];
 float VAR_9, VAR_10;
 vec3_t VAR_11;
 vec3_t VAR_12;

 VAR_5[0] = 0;
 VAR_5[1] = 0;
 VAR_5[2] = -1;

 FUNC_2(VAR_12, VAR_0.normal[0]);
 FUNC_0( VAR_12, VAR_5, VAR_4 );


 FUNC_4( VAR_11 );
 VAR_9 = 999999;
 VAR_10 = -999999;
 for ( VAR_2 = 0 ; VAR_2 < 4 ; VAR_2++ ) {
  FUNC_3( VAR_0.xyz[VAR_2], VAR_11, VAR_11 );
  if ( VAR_0.xyz[VAR_2][2] < VAR_9 ) {
   VAR_9 = VAR_0.xyz[VAR_2][2];
  }
  if ( VAR_0.xyz[VAR_2][2] > VAR_10 ) {
   VAR_10 = VAR_0.xyz[VAR_2][2];
  }
 }
 FUNC_6( VAR_11, 0.25f, VAR_3 );


 VAR_5[0] = 0;
 VAR_5[1] = 0;
 VAR_5[2] = ( VAR_10 - VAR_9 ) * 0.5f;

 FUNC_6( VAR_4, VAR_5[2] * -0.75f, VAR_4 );


 VAR_6 = FUNC_7( VAR_1 );
 FUNC_5( VAR_3, (VAR_6-1), VAR_4, VAR_3 );


 VAR_0.numIndexes = 0;
 VAR_0.numVertexes = 0;
 VAR_0.firstIndex = 0;

 VAR_8[0] = VAR_8[1] = VAR_8[2] = VAR_8[3] = 1.0f;


 for ( VAR_2 = 0 ; VAR_2 < VAR_6 ; VAR_2++ ) {
  VAR_7 = VAR_1[VAR_2];
  VAR_7 &= 255;

  if ( VAR_7 != ' ' ) {
   int VAR_13, VAR_14;
   float VAR_15, VAR_16, VAR_17;

   VAR_13 = VAR_7>>4;
   VAR_14 = VAR_7&15;

   VAR_15 = VAR_13*0.0625f;
   VAR_16 = VAR_14*0.0625f;
   VAR_17 = 0.0625f;

   FUNC_1( VAR_3, VAR_4, VAR_5, VAR_8, VAR_16, VAR_15, VAR_16 + VAR_17, VAR_15 + VAR_17 );
  }
  FUNC_5( VAR_3, -2, VAR_4, VAR_3 );
 }
}
