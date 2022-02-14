
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UBYTE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int) ;
 int* VAR_7 ;
 scalar_t__* VAR_8 ;
 scalar_t__* VAR_9 ;

void FUNC_3()
{
   UBYTE VAR_10;

   for( VAR_10=0; VAR_10<VAR_4; VAR_10++ ) {
    if( VAR_7[VAR_10] != 0 ) {
      VAR_9[VAR_10]++;
      if( VAR_9[VAR_10] > VAR_5 ) {
        VAR_7[VAR_10] = 0; VAR_8[VAR_10] = VAR_10*4+VAR_2; VAR_9[VAR_10] = VAR_3;
      } else {
        VAR_7[VAR_10] = 3-VAR_7[VAR_10];
      }
      FUNC_2( VAR_10+VAR_1, VAR_7[VAR_10]+VAR_0 );
      FUNC_1( VAR_10+VAR_1, VAR_6[VAR_7[VAR_10]+VAR_0] );
      FUNC_0( VAR_10+VAR_1, VAR_8[VAR_10], VAR_9[VAR_10] );
    }
  }
}
