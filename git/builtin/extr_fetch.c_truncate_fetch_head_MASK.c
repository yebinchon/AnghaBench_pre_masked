
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*) ;
 char* FUNC_4 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(void)
{
 const char *VAR_1 = FUNC_4(VAR_0);
 FILE *VAR_2 = FUNC_3(VAR_1);

 if (!VAR_2)
  return FUNC_1(FUNC_0("cannot open %s"), VAR_1);
 FUNC_2(VAR_2);
 return 0;
}
