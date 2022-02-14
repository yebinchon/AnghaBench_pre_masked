
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec_t ;
typedef int FILE ;


 int FUNC_0 (int *,int,int *) ;
 int FUNC_1 (int *,char*) ;

void FUNC_2( FILE *VAR_0, int VAR_1, int VAR_2, vec_t *VAR_3 ) {
 int VAR_4;

 FUNC_1( VAR_0, "( " );
 for ( VAR_4 = 0 ; VAR_4 < VAR_1 ; VAR_4++ ) {
  FUNC_0( VAR_0, VAR_2, VAR_3 + VAR_4 * VAR_2 );
  FUNC_1( VAR_0, " " );
 }
 FUNC_1( VAR_0, ")\n" );
}
