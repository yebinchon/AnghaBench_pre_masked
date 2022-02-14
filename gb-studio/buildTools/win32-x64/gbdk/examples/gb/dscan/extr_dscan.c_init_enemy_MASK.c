
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UBYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;

void FUNC_2()
{
  UBYTE VAR_7;

  for( VAR_7=0; VAR_7<VAR_3; VAR_7++ ) {
    VAR_4[VAR_7] = 0;
    VAR_5[VAR_7] = 0;
    VAR_6[VAR_7] = 0;
    FUNC_1( VAR_7*2+VAR_0, VAR_2 );
    FUNC_1( VAR_7*2+VAR_1, VAR_2 );
    FUNC_0( VAR_7*2+VAR_0, VAR_5[VAR_7], VAR_6[VAR_7] );
    FUNC_0( VAR_7*2+VAR_1, VAR_5[VAR_7], VAR_6[VAR_7] );
  }
}
