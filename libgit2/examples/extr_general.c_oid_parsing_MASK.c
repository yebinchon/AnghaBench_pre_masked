
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(git_oid *VAR_1)
{
 char VAR_2[VAR_0+1];
 char VAR_3[] = "4a202b346bb0fb0db7eff3cffeb3c70babbd2045";

 FUNC_2("*Hex to Raw*\n");
 FUNC_1(VAR_1, VAR_3);
 FUNC_2("\n*Raw to Hex*\n");
 VAR_2[VAR_0] = '\0';




 FUNC_0(VAR_2, VAR_1);




 FUNC_0(VAR_2, VAR_1);
 FUNC_2("SHA hex string: %s\n", VAR_2);
}
