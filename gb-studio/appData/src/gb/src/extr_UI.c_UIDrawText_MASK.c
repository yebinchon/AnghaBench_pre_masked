
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UBYTE ;


 int FUNC_0 (size_t,size_t,int,int,size_t*) ;
 size_t FUNC_1 (char*) ;

void FUNC_2(char *VAR_0, UBYTE VAR_1, UBYTE VAR_2)
{
  UBYTE VAR_3, VAR_4, VAR_5;
  VAR_5 = FUNC_1(VAR_0);
  for (VAR_4 = 0; VAR_4 != VAR_5; VAR_4++)
  {
    VAR_3 = VAR_0[VAR_4] + 0xA5;
    FUNC_0(VAR_1 + VAR_4, VAR_2, 1, 1, &VAR_3);
  }
}
