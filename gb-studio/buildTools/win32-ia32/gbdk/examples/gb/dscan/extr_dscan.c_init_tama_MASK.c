
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UBYTE ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,size_t) ;
 size_t* VAR_6 ;
 scalar_t__* VAR_7 ;
 int * VAR_8 ;

void FUNC_3()
{
  UBYTE VAR_9;

  for( VAR_9=0; VAR_9<VAR_4; VAR_9++ ) {
    VAR_6[VAR_9] = 0;
    VAR_7[VAR_9] = VAR_9*4+VAR_2;
    VAR_8[VAR_9] = VAR_3;
    FUNC_2( VAR_9+VAR_1, VAR_6[VAR_9]+VAR_0 );
    FUNC_1( VAR_9+VAR_1, VAR_5[VAR_6[VAR_9]+VAR_0] );
    FUNC_0( VAR_9+VAR_1, VAR_7[VAR_9], VAR_8[VAR_9] );
  }
}
