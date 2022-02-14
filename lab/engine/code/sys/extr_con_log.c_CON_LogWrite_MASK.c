
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char const*,unsigned int) ;
 size_t VAR_0 ;
 char* VAR_1 ;
 size_t VAR_2 ;
 unsigned int FUNC_3 (char const*) ;
 unsigned int VAR_3 ;

unsigned int FUNC_4( const char *VAR_4 )
{
 unsigned int VAR_5 = FUNC_3( VAR_4 );
 unsigned int VAR_6;
 unsigned int VAR_7;

 while( FUNC_0( ) < VAR_5 && FUNC_1( ) > 0 )
 {

  while( VAR_1[ VAR_2 ] != '\n' && FUNC_1( ) > 1 )
   VAR_2 = ( VAR_2 + 1 ) % VAR_0;


  VAR_2 = ( VAR_2 + 1 ) % VAR_0;
 }

 if( FUNC_0( ) < VAR_5 )
  return 0;

 if( VAR_3 + VAR_5 > VAR_0 )
 {
  VAR_6 = VAR_0 - VAR_3;
  VAR_7 = VAR_5 - VAR_6;
 }
 else
 {
  VAR_6 = VAR_5;
  VAR_7 = 0;
 }

 FUNC_2( VAR_1 + VAR_3, VAR_4, VAR_6 );
 FUNC_2( VAR_1, VAR_4 + VAR_6, VAR_7 );

 VAR_3 = ( VAR_3 + VAR_5 ) % VAR_0;

 return VAR_5;
}
