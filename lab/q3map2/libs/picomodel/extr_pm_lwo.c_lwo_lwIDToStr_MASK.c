
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *FUNC_0( unsigned int VAR_0 ){
 static char VAR_1[5];

 if ( !VAR_0 ) {
  return "n/a";
 }

 VAR_1[ 0 ] = (char)( ( VAR_0 ) >> 24 );
 VAR_1[ 1 ] = (char)( ( VAR_0 ) >> 16 );
 VAR_1[ 2 ] = (char)( ( VAR_0 ) >> 8 );
 VAR_1[ 3 ] = (char)( ( VAR_0 ) );
 VAR_1[ 4 ] = '\0';

 return VAR_1;
}
