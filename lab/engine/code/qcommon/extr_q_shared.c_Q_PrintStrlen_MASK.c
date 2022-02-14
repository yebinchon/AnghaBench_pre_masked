
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;

int FUNC_1( const char *VAR_0 ) {
 int VAR_1;
 const char *VAR_2;

 if( !VAR_0 ) {
  return 0;
 }

 VAR_1 = 0;
 VAR_2 = VAR_0;
 while( *VAR_2 ) {
  if( FUNC_0( VAR_2 ) ) {
   VAR_2 += 2;
   continue;
  }
  VAR_2++;
  VAR_1++;
 }

 return VAR_1;
}
