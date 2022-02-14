
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* vec3_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int,float) ;
 float FUNC_1 (int) ;

void FUNC_2( const vec3_t VAR_4, vec3_t VAR_5 ) {
 float VAR_6;
 float VAR_7, VAR_8;

 if ( VAR_4[1] == 0 && VAR_4[0] == 0 ) {
  VAR_7 = 0;
  if ( VAR_4[2] > 0 ) {
   VAR_8 = 90;
  }
  else {
   VAR_8 = 270;
  }
 }
 else {
  if ( VAR_4[0] ) {
   VAR_7 = ( FUNC_0 ( VAR_4[1], VAR_4[0] ) * 180 / VAR_0 );
  }
  else if ( VAR_4[1] > 0 ) {
   VAR_7 = 90;
  }
  else {
   VAR_7 = 270;
  }
  if ( VAR_7 < 0 ) {
   VAR_7 += 360;
  }

  VAR_6 = FUNC_1 ( VAR_4[0]*VAR_4[0] + VAR_4[1]*VAR_4[1] );
  VAR_8 = ( FUNC_0(VAR_4[2], VAR_6) * 180 / VAR_0 );
  if ( VAR_8 < 0 ) {
   VAR_8 += 360;
  }
 }

 VAR_5[VAR_1] = -VAR_8;
 VAR_5[VAR_3] = VAR_7;
 VAR_5[VAR_2] = 0;
}
