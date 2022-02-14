
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;

void FUNC_1(WORD VAR_3)
{
  if(VAR_1 < VAR_0)
    VAR_2[VAR_1++] = VAR_3;
  else
    FUNC_0("Stack full");
}
