
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int metaTriangle_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int) ;
 int * VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3( void ){
 metaTriangle_t *VAR_4;



 if ( VAR_3 >= VAR_1 ) {

  VAR_1 += VAR_0;
  VAR_4 = FUNC_2( VAR_1 * sizeof( metaTriangle_t ) );
  if ( VAR_2 != ((void*)0) ) {
   FUNC_1( VAR_4, VAR_2, VAR_3 * sizeof( metaTriangle_t ) );
   FUNC_0( VAR_2 );
  }
  VAR_2 = VAR_4;
 }


 VAR_3++;
 return VAR_3 - 1;
}
