
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec3_t ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int ,float,int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6( vec3_t VAR_2, vec3_t VAR_3, int VAR_4, int VAR_5 ) {
 int VAR_6;
 float VAR_7, VAR_8;
 vec3_t VAR_9;
 vec3_t VAR_10, VAR_11, VAR_12;



 FUNC_5( VAR_3, VAR_10 );
 FUNC_2( VAR_11, VAR_10 );
 FUNC_1( VAR_10, VAR_11, VAR_12 );


 for ( VAR_6 = 0 ; VAR_6 < VAR_0 ; VAR_6++ ) {
  VAR_7 = FUNC_3( &VAR_4 ) * VAR_1 * 16;
  VAR_8 = FUNC_3( &VAR_4 ) * VAR_1 * 16;
  FUNC_4( VAR_2, 8192 * 16, VAR_10, VAR_9);
  FUNC_4 (VAR_9, VAR_7, VAR_11, VAR_9);
  FUNC_4 (VAR_9, VAR_8, VAR_12, VAR_9);

  FUNC_0( VAR_2, VAR_9, VAR_5 );
 }
}
