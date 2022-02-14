
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;


 int FUNC_0 (char*) ;

int FUNC_1( byte *VAR_0, int VAR_1, int *VAR_2 ){
 byte VAR_3, VAR_4;

 if ( ( VAR_1 - *VAR_2 ) < 2 ) {
  FUNC_0( "Unexpected buffer end" );
 }

 VAR_3 = VAR_0[*VAR_2]; *VAR_2 += 1;
 VAR_4 = VAR_0[*VAR_2]; *VAR_2 += 1;

 return (short)( VAR_3 + VAR_4 * 256 );
}
