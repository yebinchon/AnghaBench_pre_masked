
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UBYTE ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int) ;
 int* VAR_4 ;
 size_t* VAR_5 ;
 int FUNC_1 (size_t,int ,int) ;

void FUNC_2(UBYTE VAR_6)
{
  UBYTE VAR_7 = 0;

  while(VAR_5[VAR_7] != VAR_0) {
    if(VAR_5[VAR_7] != VAR_3) {
      FUNC_1(VAR_6, VAR_1, VAR_4[VAR_5[VAR_7]]);
      FUNC_1(VAR_6, VAR_2, 1);
    }
    FUNC_0(500);
    VAR_7++;
  }
}
