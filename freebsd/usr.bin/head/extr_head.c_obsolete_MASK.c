
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (char) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(char *VAR_0[])
{
 char *VAR_1;

 while ((VAR_1 = *++VAR_0)) {

  if (VAR_1[0] != '-' || VAR_1[1] == '-' || !FUNC_1(VAR_1[1]))
   return;
  if ((VAR_1 = FUNC_2(FUNC_4(*VAR_0) + 2)) == ((void*)0))
   FUNC_0(1, ((void*)0));
  VAR_1[0] = '-';
  VAR_1[1] = 'n';
  (void)FUNC_3(VAR_1 + 2, *VAR_0 + 1);
  *VAR_0 = VAR_1;
 }
}
