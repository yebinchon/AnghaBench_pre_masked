
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rbspHeader_t ;
typedef int bspHeader_t ;
typedef int bspGridPoint_t ;


 void* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_3 ;
 int * FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5( rbspHeader_t *VAR_4 ){
 int VAR_5;
 unsigned short *VAR_6;
 bspGridPoint_t *VAR_7, *VAR_8;



 VAR_3 = FUNC_1( (bspHeader_t*) VAR_4, VAR_0, sizeof( *VAR_6 ) );


 VAR_2 = FUNC_4( VAR_3 * sizeof( *VAR_2 ) );
 FUNC_3( VAR_2, 0, VAR_3 * sizeof( *VAR_2 ) );


 VAR_6 = FUNC_0( (bspHeader_t*) VAR_4, VAR_0 );
 VAR_7 = FUNC_0( (bspHeader_t*) VAR_4, VAR_1 );
 VAR_8 = VAR_2;
 for ( VAR_5 = 0; VAR_5 < VAR_3; VAR_5++ )
 {
  FUNC_2( VAR_8, &VAR_7[ *VAR_6 ], sizeof( *VAR_7 ) );
  VAR_6++;
  VAR_8++;
 }
}
