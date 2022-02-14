
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * vec4_t ;
typedef int qhandle_t ;
struct TYPE_2__ {int xscale; int bias; int yscale; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int** VAR_3 ;
 int FUNC_0 (float,float,float,float,float,float,float,float,int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void FUNC_2( int VAR_5, int VAR_6, const char* VAR_7, vec4_t VAR_8, float VAR_9, qhandle_t VAR_10 )
{
 const char* VAR_11;
 unsigned char VAR_12;
 float VAR_13;
 float VAR_14;
 float VAR_15 = 0;
 float VAR_16;
 float VAR_17;
 float VAR_18;
 float VAR_19;
 float VAR_20;


 FUNC_1( VAR_8 );

 VAR_13 = VAR_5 * VAR_4.xscale + VAR_4.bias;
 VAR_14 = VAR_6 * VAR_4.yscale;

 VAR_11 = VAR_7;
 while ( *VAR_11 )
 {
  VAR_12 = *VAR_11 & 127;
  if ( VAR_12 == ' ' ) {
   VAR_15 = (float)VAR_2 * VAR_4.xscale * VAR_9;
  }
  else if ( VAR_3[VAR_12][2] != -1 ) {
   VAR_18 = (float)VAR_3[VAR_12][0] / 256.0f;
   VAR_17 = (float)VAR_3[VAR_12][1] / 256.0f;
   VAR_19 = (float)VAR_3[VAR_12][2] / 256.0f;
   VAR_20 = (float)VAR_1 / 256.0f;
   VAR_15 = (float)VAR_3[VAR_12][2] * VAR_4.xscale * VAR_9;
   VAR_16 = (float)VAR_1 * VAR_4.yscale * VAR_9;
   FUNC_0( VAR_13, VAR_14, VAR_15, VAR_16, VAR_18, VAR_17, VAR_18+VAR_19, VAR_17+VAR_20, VAR_10 );
  }

  VAR_13 += (VAR_15 + (float)VAR_0 * VAR_4.xscale * VAR_9);
  VAR_11++;
 }

 FUNC_1( ((void*)0) );
}
