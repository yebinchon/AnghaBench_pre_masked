
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UBYTE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 scalar_t__* VAR_9 ;
 int FUNC_0 (scalar_t__,int,scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int) ;

void FUNC_3()
{
  UBYTE VAR_12;

  for( VAR_12=0; VAR_12<VAR_4; VAR_12++ ) {
    if( VAR_7[VAR_12] != 0 ) {
      VAR_9[VAR_12]--;
      if( VAR_7[VAR_12] >=3 ) {
        VAR_7[VAR_12]++;
        if( (VAR_8[VAR_12]>(VAR_11-5))&&(VAR_8[VAR_12]<(VAR_11+12)) ) {
          if( VAR_10 < 2 ) {

            VAR_10 = 2;
          }
        }
        if( VAR_7[VAR_12] >= 6 ) {
          VAR_7[VAR_12] = 0; VAR_8[VAR_12] = VAR_2; VAR_9[VAR_12] = VAR_3;
        }
      } else if( VAR_9[VAR_12] <= VAR_5 ) {
        VAR_7[VAR_12] = 3;
      } else {
        VAR_7[VAR_12] = 3-VAR_7[VAR_12];
      }
      FUNC_2( VAR_12+VAR_1, VAR_7[VAR_12]+VAR_0 );
      FUNC_1( VAR_12+VAR_1, VAR_6[VAR_7[VAR_12]+VAR_0] );
      FUNC_0( VAR_12+VAR_1, VAR_8[VAR_12], VAR_9[VAR_12] );
    }
  }
}
