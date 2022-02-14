
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int* VAR_1 ;
 scalar_t__ FUNC_2 (char*) ;
 char* FUNC_3 (char**,char*) ;

__attribute__((used)) static int
FUNC_4(char *VAR_2)
{
 char *VAR_3;
 int VAR_4, VAR_5;

 if (VAR_2 == ((void*)0))
  return (-1);

 FUNC_1(0);
 VAR_5 = 0;
 while ((VAR_3 = FUNC_3(&VAR_2, ",")) != ((void*)0)) {
  if (FUNC_2(VAR_3) == 0)
   continue;
  VAR_4 = FUNC_0(VAR_3);
  if (VAR_4 != -1)
   VAR_1[VAR_5++] = VAR_4;
 }
 VAR_0 = VAR_5;
 return (VAR_5);
}
