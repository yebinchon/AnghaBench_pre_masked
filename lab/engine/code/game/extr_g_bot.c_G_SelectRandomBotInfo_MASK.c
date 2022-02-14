
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 char* FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;

int FUNC_3( int VAR_4 ) {
 int VAR_5[VAR_0];
 int VAR_6, VAR_7;
 int VAR_8, VAR_9;
 char *VAR_10;


 if ( VAR_4 != -1 && FUNC_0( ((void*)0), -1 ) < VAR_3 ) {
  VAR_4 = -1;
 }

 VAR_7 = 0;
 VAR_9 = VAR_1;
 for ( VAR_6 = 0; VAR_6 < VAR_3 ; VAR_6++ ) {
  VAR_10 = FUNC_1( VAR_2[VAR_6], "funname" );
  if ( !VAR_10[0] ) {
   VAR_10 = FUNC_1( VAR_2[VAR_6], "name" );
  }

  VAR_8 = FUNC_0( VAR_10, VAR_4 );

  if ( VAR_8 < VAR_9 ) {
   VAR_9 = VAR_8;
   VAR_7 = 0;
  }

  if ( VAR_8 == VAR_9 ) {
   VAR_5[VAR_7++] = VAR_6;

   if ( VAR_7 == VAR_0 ) {
    break;
   }
  }
 }

 if ( VAR_7 > 0 ) {
  VAR_7 = FUNC_2() * ( VAR_7 - 1 );
  return VAR_5[VAR_7];
 }

 return -1;
}
