
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec_t ;
typedef int * vec3_t ;
typedef int* m4x4_t ;
typedef int eulerOrder_t ;


 int FUNC_0 (int ) ;
 double FUNC_1 (int ) ;






 int FUNC_2 (int*) ;
 int FUNC_3 (int*,int*) ;
 double FUNC_4 (int ) ;

void FUNC_5( m4x4_t VAR_0, const vec3_t VAR_1, eulerOrder_t VAR_2 ){
 double VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_3 = FUNC_1( FUNC_0( VAR_1[0] ) );
 VAR_4 = FUNC_4( FUNC_0( VAR_1[0] ) );
 VAR_5 = FUNC_1( FUNC_0( VAR_1[1] ) );
 VAR_6 = FUNC_4( FUNC_0( VAR_1[1] ) );
 VAR_7 = FUNC_1( FUNC_0( VAR_1[2] ) );
 VAR_8 = FUNC_4( FUNC_0( VAR_1[2] ) );

 switch ( VAR_2 )
 {
 case 133:



  {
   VAR_0[0] = (vec_t)( VAR_5 * VAR_7 );
   VAR_0[1] = (vec_t)( VAR_5 * VAR_8 );
   VAR_0[2] = (vec_t)-VAR_6;
   VAR_0[4] = (vec_t)( VAR_4 * VAR_6 * VAR_7 + VAR_3 * -VAR_8 );
   VAR_0[5] = (vec_t)( VAR_4 * VAR_6 * VAR_8 + VAR_3 * VAR_7 );
   VAR_0[6] = (vec_t)( VAR_4 * VAR_5 );
   VAR_0[8] = (vec_t)( VAR_3 * VAR_6 * VAR_7 + VAR_4 * VAR_8 );
   VAR_0[9] = (vec_t)( VAR_3 * VAR_6 * VAR_8 + -VAR_4 * VAR_7 );
   VAR_0[10] = (vec_t)( VAR_3 * VAR_5 );
  }

  VAR_0[12] = VAR_0[13] = VAR_0[14] = VAR_0[3] = VAR_0[7] = VAR_0[11] = 0;
  VAR_0[15] = 1;
  break;

 case 130:
  FUNC_2( VAR_0 );
  VAR_0[0] = (vec_t) VAR_5; VAR_0[2] = (vec_t)-VAR_6;
  VAR_0[8] = (vec_t) VAR_6; VAR_0[10] = (vec_t) VAR_5;

  {
   m4x4_t VAR_9;
   FUNC_2( VAR_9 );
   VAR_9[5] = (vec_t) VAR_3; VAR_9[6] = (vec_t) VAR_4;
   VAR_9[9] = (vec_t)-VAR_4; VAR_9[10] = (vec_t) VAR_3;
   FUNC_3( VAR_0, VAR_9 );
   FUNC_2( VAR_9 );
   VAR_9[0] = (vec_t) VAR_7; VAR_9[1] = (vec_t) VAR_8;
   VAR_9[4] = (vec_t)-VAR_8; VAR_9[5] = (vec_t) VAR_7;
   FUNC_3( VAR_0, VAR_9 );
  }
  break;

 case 129:
  FUNC_2( VAR_0 );
  VAR_0[0] = (vec_t) VAR_7; VAR_0[1] = (vec_t) VAR_8;
  VAR_0[4] = (vec_t)-VAR_8; VAR_0[5] = (vec_t) VAR_7;

  {
   m4x4_t VAR_10;
   FUNC_2( VAR_10 );
   VAR_10[5] = (vec_t) VAR_3; VAR_10[6] = (vec_t) VAR_4;
   VAR_10[9] = (vec_t)-VAR_4; VAR_10[10] = (vec_t) VAR_3;
   FUNC_3( VAR_0, VAR_10 );
   FUNC_2( VAR_10 );
   VAR_10[0] = (vec_t) VAR_5; VAR_10[2] = (vec_t)-VAR_6;
   VAR_10[8] = (vec_t) VAR_6; VAR_10[10] = (vec_t) VAR_5;
   FUNC_3( VAR_0, VAR_10 );
  }
  break;

 case 132:
  FUNC_2( VAR_0 );
  VAR_0[5] = (vec_t) VAR_3; VAR_0[6] = (vec_t) VAR_4;
  VAR_0[9] = (vec_t)-VAR_4; VAR_0[10] = (vec_t) VAR_3;

  {
   m4x4_t VAR_11;
   FUNC_2( VAR_11 );
   VAR_11[0] = (vec_t) VAR_7; VAR_11[1] = (vec_t) VAR_8;
   VAR_11[4] = (vec_t)-VAR_8; VAR_11[5] = (vec_t) VAR_7;
   FUNC_3( VAR_0, VAR_11 );
   FUNC_2( VAR_11 );
   VAR_11[0] = (vec_t) VAR_5; VAR_11[2] = (vec_t)-VAR_6;
   VAR_11[8] = (vec_t) VAR_6; VAR_11[10] = (vec_t) VAR_5;
   FUNC_3( VAR_0, VAR_11 );
  }
  break;

 case 131:
  {
   VAR_0[0] = (vec_t)( VAR_5 * VAR_7 + VAR_4 * VAR_6 * -VAR_8 );
   VAR_0[1] = (vec_t)( VAR_5 * VAR_8 + VAR_4 * VAR_6 * VAR_7 );
   VAR_0[2] = (vec_t)( -VAR_3 * VAR_6 );
   VAR_0[4] = (vec_t)( VAR_3 * -VAR_8 );
   VAR_0[5] = (vec_t)( VAR_3 * VAR_7 );
   VAR_0[6] = (vec_t)( VAR_4 );
   VAR_0[8] = (vec_t)( VAR_6 * VAR_7 + -VAR_4 * VAR_5 * -VAR_8 );
   VAR_0[9] = (vec_t)( VAR_6 * VAR_8 + -VAR_4 * VAR_5 * VAR_7 );
   VAR_0[10] = (vec_t)( VAR_3 * VAR_5 );
  }

  VAR_0[12] = VAR_0[13] = VAR_0[14] = VAR_0[3] = VAR_0[7] = VAR_0[11] = 0;
  VAR_0[15] = 1;
  break;

 case 128:


  {
   VAR_0[0] = (vec_t)( VAR_5 * VAR_7 );
   VAR_0[4] = (vec_t)( VAR_5 * -VAR_8 );
   VAR_0[8] = (vec_t)VAR_6;
   VAR_0[1] = (vec_t)( VAR_4 * VAR_6 * VAR_7 + VAR_3 * VAR_8 );
   VAR_0[5] = (vec_t)( VAR_4 * VAR_6 * -VAR_8 + VAR_3 * VAR_7 );
   VAR_0[9] = (vec_t)( -VAR_4 * VAR_5 );
   VAR_0[2] = (vec_t)( VAR_3 * -VAR_6 * VAR_7 + VAR_4 * VAR_8 );
   VAR_0[6] = (vec_t)( VAR_3 * -VAR_6 * -VAR_8 + VAR_4 * VAR_7 );
   VAR_0[10] = (vec_t)( VAR_3 * VAR_5 );
  }

  VAR_0[12] = VAR_0[13] = VAR_0[14] = VAR_0[3] = VAR_0[7] = VAR_0[11] = 0;
  VAR_0[15] = 1;
  break;

 }

}
