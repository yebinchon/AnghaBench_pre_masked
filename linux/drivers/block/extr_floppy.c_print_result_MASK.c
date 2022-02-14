
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,...) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_2(char *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0("%s ", VAR_1);
 if (VAR_2 >= 0)
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
   FUNC_1("repl[%d]=%x ", VAR_3, VAR_0[VAR_3]);
 FUNC_1("\n");
}
