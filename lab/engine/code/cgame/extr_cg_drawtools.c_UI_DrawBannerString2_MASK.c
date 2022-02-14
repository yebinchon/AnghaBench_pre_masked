
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * vec4_t ;
struct TYPE_3__ {int charsetPropB; } ;
struct TYPE_4__ {int screenXScale; int screenXBias; int screenYScale; TYPE_1__ media; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 scalar_t__** VAR_4 ;
 int FUNC_0 (float,float,float,float,float,float,float,float,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2( int VAR_5, int VAR_6, const char* VAR_7, vec4_t VAR_8 )
{
 const char* VAR_9;
 unsigned char VAR_10;
 float VAR_11;
 float VAR_12;
 float VAR_13;
 float VAR_14;
 float VAR_15;
 float VAR_16;
 float VAR_17;
 float VAR_18;


 FUNC_1( VAR_8 );

 VAR_11 = VAR_5 * VAR_3.screenXScale + VAR_3.screenXBias;
 VAR_12 = VAR_6 * VAR_3.screenYScale;

 VAR_9 = VAR_7;
 while ( *VAR_9 )
 {
  VAR_10 = *VAR_9 & 127;
  if ( VAR_10 == ' ' ) {
   VAR_11 += ((float)VAR_2 + (float)VAR_0)* VAR_3.screenXScale;
  }
  else if ( VAR_10 >= 'A' && VAR_10 <= 'Z' ) {
   VAR_10 -= 'A';
   VAR_16 = (float)VAR_4[VAR_10][0] / 256.0f;
   VAR_15 = (float)VAR_4[VAR_10][1] / 256.0f;
   VAR_17 = (float)VAR_4[VAR_10][2] / 256.0f;
   VAR_18 = (float)VAR_1 / 256.0f;
   VAR_13 = (float)VAR_4[VAR_10][2] * VAR_3.screenXScale;
   VAR_14 = (float)VAR_1 * VAR_3.screenYScale;
   FUNC_0( VAR_11, VAR_12, VAR_13, VAR_14, VAR_16, VAR_15, VAR_16+VAR_17, VAR_15+VAR_18, VAR_3.media.charsetPropB );
   VAR_11 += (VAR_13 + (float)VAR_0 * VAR_3.screenXScale);
  }
  VAR_9++;
 }

 FUNC_1( ((void*)0) );
}
