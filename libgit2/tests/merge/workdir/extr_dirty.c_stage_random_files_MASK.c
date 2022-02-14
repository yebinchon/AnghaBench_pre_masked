
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (char**) ;

__attribute__((used)) static void FUNC_3(char *VAR_1[])
{
 char *VAR_2;
 size_t VAR_3;

 FUNC_2(VAR_1);

 for (VAR_3 = 0, VAR_2 = VAR_1[VAR_3]; VAR_2; VAR_2 = VAR_1[++VAR_3])
  FUNC_0(FUNC_1(VAR_0, VAR_2));
}
