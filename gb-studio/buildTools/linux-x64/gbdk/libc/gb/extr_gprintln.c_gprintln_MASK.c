
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT16 ;
typedef scalar_t__ INT8 ;
typedef size_t INT16 ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char) ;

void FUNC_1(INT16 VAR_2, INT8 VAR_3, INT8 VAR_4)
{
  UINT16 VAR_5;

  if(VAR_2 < 0 && VAR_4) {
    FUNC_0('-');
    VAR_2 = -VAR_2;
  }
  if((VAR_5 = (UINT16)VAR_2 / (UINT16)VAR_3) != 0)
    FUNC_1(VAR_5, VAR_3, VAR_0);
  FUNC_0(VAR_1[(UINT16)VAR_2 % (UINT16)VAR_3]);
}
