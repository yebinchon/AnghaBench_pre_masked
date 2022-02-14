
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_2(char *VAR_1)
{
 char VAR_2;

 while ((VAR_2 = *VAR_1++) != '\0')
  switch (VAR_2) {
  case '$':
   FUNC_0(VAR_0, &VAR_2, 1);
   VAR_1++;
   break;

  case '#':
   VAR_2 = *VAR_1++;
   FUNC_1(VAR_0, &VAR_2, 1);
   break;

  default:
   FUNC_1(VAR_0, &VAR_2, 1);
   FUNC_0(VAR_0, &VAR_2, 1);
  }
}
