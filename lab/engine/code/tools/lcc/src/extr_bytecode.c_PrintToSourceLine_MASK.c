
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;

__attribute__((used)) static void FUNC_1( int VAR_3 ) {
 int VAR_4;

 if ( !VAR_0 ) {
  return;
 }
 while ( VAR_1 <= VAR_3 ) {
  int VAR_5;

  for ( VAR_5 = 0 ; VAR_2[VAR_5] && VAR_2[VAR_5] != '\n' ; VAR_5++ ) {
  }
  VAR_4 = VAR_2[VAR_5];
  if ( VAR_4 == '\n' ) {
   VAR_2[VAR_5] = 0;
  }
  FUNC_0( ";%d:%s\n", VAR_1, VAR_2 );
  if ( VAR_4 == 0 ) {
   VAR_2 += VAR_5;
  } else {
   VAR_2 += VAR_5+1;
  }
  VAR_1++;
 }
}
