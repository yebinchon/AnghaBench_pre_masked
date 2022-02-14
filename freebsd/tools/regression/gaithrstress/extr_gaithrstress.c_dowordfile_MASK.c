
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int newword ;
typedef int FILE ;


 int VAR_0 ;
 int ** FUNC_0 (size_t,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (int *,int ,int ) ;
 size_t VAR_1 ;
 int ** VAR_2 ;
 size_t FUNC_7 (char*,char*) ;
 int * FUNC_8 (char*) ;

int
FUNC_9(const char *VAR_3)
{
 FILE *VAR_4;
 char VAR_5[64];
 size_t VAR_6;

 VAR_4 = FUNC_5(VAR_3, "r");
 if (VAR_4 == ((void*)0))
  return (-1);
 VAR_1 = 0;
 while (FUNC_4(VAR_5, sizeof(VAR_5), VAR_4) != ((void*)0))
  VAR_1++;
 if (FUNC_3(VAR_4) || FUNC_6(VAR_4, 0, VAR_0) != 0)
  goto fail;
 VAR_2 = FUNC_0(VAR_1, sizeof(char *));
 if (VAR_2 == ((void*)0))
  goto fail;
 VAR_6 = VAR_1;
 VAR_1 = 0;
 while (FUNC_4(VAR_5, sizeof(VAR_5), VAR_4) != ((void*)0)) {
  VAR_5[FUNC_7(VAR_5, "\r\n")] = '\0';
  VAR_2[VAR_1] = FUNC_8(VAR_5);
  if (VAR_2[VAR_1] == ((void*)0))
   FUNC_1(1, "reading words file");
  if (++VAR_1 == VAR_6)
   break;
 }
 VAR_1 = VAR_6;
 FUNC_2(VAR_4);
 return (0);
fail:
 FUNC_2(VAR_4);
 return (-1);
}
