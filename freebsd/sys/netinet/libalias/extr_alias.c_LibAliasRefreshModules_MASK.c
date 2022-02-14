
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char*,int,int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (char) ;
 int FUNC_8 (char*) ;

int
FUNC_9(void)
{
 char VAR_0[256], VAR_1[] = "/etc/libalias.conf";
 FILE *VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = FUNC_6(VAR_1, "r");
 if (VAR_2 == ((void*)0))
  FUNC_2(1, "fopen(%s)", VAR_1);

 FUNC_1();

 for (;;) {
  FUNC_5(VAR_0, 256, VAR_2);
  if (FUNC_4(VAR_2))
          break;
  VAR_4 = FUNC_8(VAR_0);
  if (VAR_4 > 1) {
   for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
    if (!FUNC_7(VAR_0[VAR_3]))
     break;
   if (VAR_0[VAR_3] == '#')
    continue;
   VAR_0[VAR_4 - 1] = '\0';
   FUNC_0(VAR_0);
  }
 }
 FUNC_3(VAR_2);
 return (0);
}
