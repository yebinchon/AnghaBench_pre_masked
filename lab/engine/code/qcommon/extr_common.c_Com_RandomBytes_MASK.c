
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char byte ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (unsigned char*,int) ;
 int FUNC_2 () ;

void FUNC_3( byte *VAR_0, int VAR_1 )
{
 int VAR_2;

 if( FUNC_1( VAR_0, VAR_1 ) )
  return;

 FUNC_0( "Com_RandomBytes: using weak randomization\n" );
 for( VAR_2 = 0; VAR_2 < VAR_1; VAR_2++ )
  VAR_0[VAR_2] = (unsigned char)( FUNC_2() % 256 );
}
