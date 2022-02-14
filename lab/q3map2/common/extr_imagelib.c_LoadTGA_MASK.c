
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int *,int *,int **,int*,int*) ;
 int FUNC_2 (char*,void**,int ) ;

void FUNC_3( const char *VAR_0, byte **VAR_1, int *VAR_2, int *VAR_3 ){
 byte *VAR_4;
 int VAR_5;



 VAR_5 = FUNC_2( ( char * ) VAR_0, (void **)&VAR_4, 0 );
 if ( VAR_5 == -1 ) {
  FUNC_0( "Couldn't read %s", VAR_0 );
 }

 FUNC_1( VAR_4, VAR_4 + VAR_5, VAR_1, VAR_2, VAR_3 );

}
