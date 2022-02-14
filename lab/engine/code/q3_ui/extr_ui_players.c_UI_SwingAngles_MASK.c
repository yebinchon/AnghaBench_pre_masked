
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_2__ {float frametime; } ;


 float FUNC_0 (float) ;
 float FUNC_1 (float,float) ;
 float FUNC_2 (float) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_3( float VAR_3, float VAR_4, float VAR_5,
     float VAR_6, float *VAR_7, qboolean *VAR_8 ) {
 float VAR_9;
 float VAR_10;
 float VAR_11;

 if ( !*VAR_8 ) {

  VAR_9 = FUNC_1( *VAR_7, VAR_3 );
  if ( VAR_9 > VAR_4 || VAR_9 < -VAR_4 ) {
   *VAR_8 = VAR_1;
  }
 }

 if ( !*VAR_8 ) {
  return;
 }



 VAR_9 = FUNC_1( VAR_3, *VAR_7 );
 VAR_11 = FUNC_2( VAR_9 );
 if ( VAR_11 < VAR_4 * 0.5 ) {
  VAR_11 = 0.5;
 } else if ( VAR_11 < VAR_4 ) {
  VAR_11 = 1.0;
 } else {
  VAR_11 = 2.0;
 }


 if ( VAR_9 >= 0 ) {
  VAR_10 = VAR_2.frametime * VAR_11 * VAR_6;
  if ( VAR_10 >= VAR_9 ) {
   VAR_10 = VAR_9;
   *VAR_8 = VAR_0;
  }
  *VAR_7 = FUNC_0( *VAR_7 + VAR_10 );
 } else if ( VAR_9 < 0 ) {
  VAR_10 = VAR_2.frametime * VAR_11 * -VAR_6;
  if ( VAR_10 <= VAR_9 ) {
   VAR_10 = VAR_9;
   *VAR_8 = VAR_0;
  }
  *VAR_7 = FUNC_0( *VAR_7 + VAR_10 );
 }


 VAR_9 = FUNC_1( VAR_3, *VAR_7 );
 if ( VAR_9 > VAR_5 ) {
  *VAR_7 = FUNC_0( VAR_3 - (VAR_5 - 1) );
 } else if ( VAR_9 < -VAR_5 ) {
  *VAR_7 = FUNC_0( VAR_3 + (VAR_5 - 1) );
 }
}
