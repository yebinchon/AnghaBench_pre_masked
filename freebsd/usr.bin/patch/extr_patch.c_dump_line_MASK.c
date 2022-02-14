
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LINENUM ;


 char* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char,int ) ;

__attribute__((used)) static void
FUNC_2(LINENUM VAR_1, bool VAR_2)
{
 char *VAR_3;

 VAR_3 = FUNC_0(VAR_1, 0);
 if (VAR_3 == ((void*)0))
  return;

 for (; *VAR_3 != '\n'; VAR_3++)
  FUNC_1(*VAR_3, VAR_0);
 if (VAR_2)
  FUNC_1('\n', VAR_0);
}
