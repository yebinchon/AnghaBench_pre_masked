
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int *,int,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_4( int VAR_2, byte *VAR_3, int VAR_4 ){
 int VAR_5;

 if ( VAR_2 != VAR_1 ) {
  if ( VAR_1 != 0 ) {
   FUNC_2( "Attempted to use multiple broadcasts sockets\n" );
  }
  VAR_5 = FUNC_0( VAR_2 );
  if ( VAR_5 == -1 ) {
   FUNC_3( "Unable to make socket broadcast capable\n" );
   return VAR_5;
  }
 }

 return FUNC_1( VAR_2, VAR_3, VAR_4, &VAR_0 );
}
