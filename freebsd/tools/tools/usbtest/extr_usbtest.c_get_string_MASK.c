
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int * FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;

void
FUNC_4(char *VAR_1, int VAR_2)
{
 FUNC_2("\nEnter string>");

 if (FUNC_1(VAR_1, VAR_2, VAR_0) == ((void*)0))
  FUNC_0(1, "Cannot read input");

 VAR_1[VAR_2 - 1] = 0;

 VAR_2 = FUNC_3(VAR_1);


 if (VAR_2 == 0)
  return;
 else if (VAR_1[VAR_2 - 1] == '\n')
  VAR_1[VAR_2 - 1] = 0;
}
