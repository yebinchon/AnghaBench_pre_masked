
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 size_t FUNC_6 (char const*) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_0, unsigned int VAR_1)
{
 FILE *VAR_2;
 size_t VAR_3;
 int VAR_4;

 VAR_2 = FUNC_1(VAR_0, "r");
 if (VAR_2 == ((void*)0)) {
  FUNC_4(VAR_0);
  return (1);
 }
 VAR_3 = FUNC_6(VAR_0);
 if (VAR_3 > 4 && FUNC_5(VAR_0 + VAR_3 - 4, ".hex") == 0)
  VAR_4 = FUNC_3(VAR_2, VAR_1);
 else
  VAR_4 = FUNC_2(VAR_2, VAR_1);
 FUNC_0(VAR_2);
 return (VAR_4);
}
