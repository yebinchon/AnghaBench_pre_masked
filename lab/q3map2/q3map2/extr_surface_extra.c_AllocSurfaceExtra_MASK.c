
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int surfaceExtra_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_2 ;
 int * FUNC_2 (int) ;
 int VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static surfaceExtra_t *FUNC_3( void ){
 surfaceExtra_t *VAR_5;



 if ( VAR_2 >= VAR_1 ) {

  VAR_1 += VAR_0;
  VAR_5 = FUNC_2( VAR_1 * sizeof( surfaceExtra_t ) );
  if ( VAR_4 != ((void*)0) ) {
   FUNC_1( VAR_5, VAR_4, VAR_2 * sizeof( surfaceExtra_t ) );
   FUNC_0( VAR_4 );
  }
  VAR_4 = VAR_5;
 }


 VAR_5 = &VAR_4[ VAR_2 ];
 VAR_2++;
 FUNC_1( VAR_5, &VAR_3, sizeof( surfaceExtra_t ) );


 return VAR_5;
}
