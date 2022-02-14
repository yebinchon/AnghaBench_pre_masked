
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int picoMemStream_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_2 ;

char *FUNC_5( picoMemStream_t *VAR_3 ){
 char *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;

 if ( VAR_2 == VAR_0 ) {
  return ((void*)0);
 }

 VAR_8 = FUNC_4( VAR_3 );
 for ( VAR_5 = 1; ; VAR_5++ ) {
  VAR_6 = FUNC_1( VAR_3 );
  if ( VAR_6 <= 0 ) {
   break;
  }
 }
 if ( VAR_6 < 0 ) {
  VAR_2 = VAR_0;
  return ((void*)0);
 }

 if ( VAR_5 == 1 ) {
  if ( FUNC_3( VAR_3, VAR_8 + 2, VAR_1 ) ) {
   VAR_2 = VAR_0;
  }
  else{
   VAR_2 += 2;
  }
  return ((void*)0);
 }

 VAR_7 = VAR_5 + ( VAR_5 & 1 );
 VAR_4 = FUNC_0( VAR_7 );
 if ( !VAR_4 ) {
  VAR_2 = VAR_0;
  return ((void*)0);
 }

 if ( FUNC_3( VAR_3, VAR_8, VAR_1 ) ) {
  VAR_2 = VAR_0;
  return ((void*)0);
 }
 if ( 1 != FUNC_2( VAR_3, VAR_4, VAR_7 ) ) {
  VAR_2 = VAR_0;
  return ((void*)0);
 }

 VAR_2 += VAR_7;
 return VAR_4;
}
