
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(char *VAR_1, int VAR_2, FILE *VAR_3)
{
 int VAR_4;
 char *VAR_5 = VAR_1;

 while (--VAR_2 > 0 && (VAR_4 = FUNC_2(VAR_3)) != 0 && VAR_4 != VAR_0)
  *VAR_5++ = VAR_4;
 *VAR_5++ = 0;
 return ((FUNC_0(VAR_3) || FUNC_1(VAR_3)) ? 0 : 1);
}
