
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int FUNC_0 (int,int ,int,int,unsigned char*) ;
 int FUNC_1 (int) ;

void FUNC_2( UBYTE VAR_0 )
{
  unsigned char VAR_1[2];

  if( VAR_0 < 9 ) {
    VAR_1[0] = 0x31+VAR_0;
  } else {
    VAR_1[0] = 0x41+VAR_0-9;
  }
  FUNC_0( 19, 0, 1, 1, VAR_1 );
  FUNC_1( VAR_0 );
}
