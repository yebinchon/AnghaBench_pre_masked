
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UBYTE ;
typedef size_t BYTE ;


 size_t VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char) ;

void FUNC_1(BYTE VAR_2, BYTE VAR_3, BYTE VAR_4)
{
  UBYTE VAR_5;

  if(VAR_2 < 0 && VAR_4) {
    FUNC_0('-');
    VAR_2 = -VAR_2;
  }
  if((VAR_5 = (UBYTE)VAR_2 / (UBYTE)VAR_3) != 0)
    FUNC_1(VAR_5, VAR_3, VAR_0);
  FUNC_0(VAR_1[(UBYTE)VAR_2 % (UBYTE)VAR_3]);
}
