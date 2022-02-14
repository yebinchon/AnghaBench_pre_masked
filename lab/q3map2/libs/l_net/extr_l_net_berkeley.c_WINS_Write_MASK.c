
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_s {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int byte ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int,int *,int,int ) ;
 int FUNC_4 (int,int *,int,int ,struct sockaddr*,int) ;

int FUNC_5( int VAR_3, byte *VAR_4, int VAR_5, struct sockaddr_s *VAR_6 ){
 int VAR_7 = 0, VAR_8;

 if ( VAR_6 ) {
  VAR_8 = 0;
  while ( VAR_8 < VAR_5 )
  {
   VAR_7 = FUNC_4( VAR_3, &VAR_4[VAR_8], VAR_5 - VAR_8, 0, (struct sockaddr *)VAR_6, sizeof( struct sockaddr_s ) );
   if ( VAR_7 == VAR_1 ) {
    if ( FUNC_1() != VAR_0 ) {
     return VAR_2;
    }


   }
   else
   {
    VAR_8 += VAR_7;
   }
  }
 }
 else
 {
  VAR_8 = 0;
  while ( VAR_8 < VAR_5 )
  {
   VAR_7 = FUNC_3( VAR_3, VAR_4, VAR_5, 0 );
   if ( VAR_7 == VAR_1 ) {
    if ( FUNC_1() != VAR_0 ) {
     return VAR_2;
    }


   }
   else
   {
    VAR_8 += VAR_7;
   }
  }
 }
 if ( VAR_7 == VAR_1 ) {
  FUNC_2( "WINS_Write: %s\n", FUNC_0( FUNC_1() ) );
 }
 return ( VAR_7 == VAR_5 );
}
