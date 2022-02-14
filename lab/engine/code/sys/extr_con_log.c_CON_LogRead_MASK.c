
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 () ;
 int FUNC_1 (char*,scalar_t__,unsigned int) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;

unsigned int FUNC_2( char *VAR_3, unsigned int VAR_4 )
{
 unsigned int VAR_5;
 unsigned int VAR_6;

 if( FUNC_0( ) < VAR_4 )
  VAR_4 = FUNC_0( );

 if( VAR_2 + VAR_4 > VAR_0 )
 {
  VAR_5 = VAR_0 - VAR_2;
  VAR_6 = VAR_4 - VAR_5;
 }
 else
 {
  VAR_5 = VAR_4;
  VAR_6 = 0;
 }

 FUNC_1( VAR_3, VAR_1 + VAR_2, VAR_5 );
 FUNC_1( VAR_3 + VAR_5, VAR_1, VAR_6 );

 VAR_2 = ( VAR_2 + VAR_4 ) % VAR_0;

 return VAR_4;
}
