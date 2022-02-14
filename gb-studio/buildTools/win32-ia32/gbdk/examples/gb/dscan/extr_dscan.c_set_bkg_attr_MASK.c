
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UBYTE ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,int,int *) ;

void FUNC_1( UBYTE VAR_3, UBYTE VAR_4, UBYTE VAR_5, UBYTE VAR_6, unsigned char *VAR_7 )
{
  UBYTE VAR_8, VAR_9;

  VAR_0 = 1;
  for( VAR_9=0; VAR_9<VAR_6; VAR_9++ ) {
    for( VAR_8=0; VAR_8<VAR_5; VAR_8++ ) {
      VAR_2[VAR_8] = VAR_1[(unsigned int)*VAR_7];
      VAR_7++;
    }
    FUNC_0( VAR_3, VAR_4+VAR_9, VAR_5, 1, VAR_2 );
  }
  VAR_0 = 0;
}
