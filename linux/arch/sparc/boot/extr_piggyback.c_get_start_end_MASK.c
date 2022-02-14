
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 unsigned int FUNC_6 (char*,int *,int) ;

__attribute__((used)) static int FUNC_7(const char *VAR_0, unsigned int *VAR_1,
                                               unsigned int *VAR_2)
{
 FILE *VAR_3;
 char VAR_4[1024];

 *VAR_1 = 0;
 *VAR_2 = 0;
 VAR_3 = FUNC_4(VAR_0, "r");
 if (!VAR_3)
  FUNC_0(VAR_0);
 while (FUNC_3(VAR_4, 1024, VAR_3)) {
  if (FUNC_5(VAR_4))
   *VAR_1 = FUNC_6(VAR_4, ((void*)0), 16);
  else if (FUNC_1(VAR_4))
   *VAR_2 = FUNC_6(VAR_4, ((void*)0), 16);
 }
 FUNC_2 (VAR_3);

 if (*VAR_1 == 0 || *VAR_2 == 0)
  return 0;

 return 1;
}
