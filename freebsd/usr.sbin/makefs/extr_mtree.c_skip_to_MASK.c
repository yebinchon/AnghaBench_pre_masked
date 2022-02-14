
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,int) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static int
FUNC_4(FILE *VAR_2, const char *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 while (VAR_4 != VAR_0 && FUNC_2(VAR_3, VAR_4) == ((void*)0))
  VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 != VAR_0) {
  FUNC_3(VAR_4, VAR_2);
  return (0);
 }
 return (FUNC_0(VAR_2) ? VAR_1 : -1);
}
