
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int UBYTE ;


 int FUNC_0 (int,int ,int,int,unsigned char*) ;

void FUNC_1( UWORD VAR_0 )
{
  UWORD VAR_1;
  UBYTE VAR_2, VAR_3, VAR_4;
  unsigned char VAR_5[6];

  VAR_4 = 0; VAR_1 = 10000;
  for( VAR_2=0; VAR_2<5; VAR_2++ ) {
    VAR_3 = VAR_0/VAR_1; VAR_0 = VAR_0%VAR_1; VAR_1 = VAR_1/10;
    if( (VAR_3==0)&&(VAR_4==0) ) {
      VAR_5[VAR_2] = 0x20;
    } else {
      VAR_4 = 1;
      VAR_5[VAR_2] = 0x30+VAR_3;
    }
  }
  VAR_5[5] = 0x30;
  FUNC_0( 4, 0, 6, 1, VAR_5 );
}
