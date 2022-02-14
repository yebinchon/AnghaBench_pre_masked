
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;
 int FUNC_2 (int *,void*,int) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int) ;

int FUNC_5( const char *VAR_0, void **VAR_1 ){
 FILE *VAR_2;
 int VAR_3;
 void *VAR_4;

 VAR_2 = FUNC_1( VAR_0 );
 VAR_3 = FUNC_0( VAR_2 );
 VAR_4 = FUNC_4( VAR_3 + 1 );
 ( (char *)VAR_4 )[VAR_3] = 0;
 FUNC_2( VAR_2, VAR_4, VAR_3 );
 FUNC_3( VAR_2 );

 *VAR_1 = VAR_4;
 return VAR_3;
}
