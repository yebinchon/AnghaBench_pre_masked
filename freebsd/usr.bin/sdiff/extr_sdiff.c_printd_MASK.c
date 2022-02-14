
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,char,int *) ;
 int FUNC_1 (int,char*) ;
 size_t VAR_0 ;
 int FUNC_2 () ;
 char* FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_1, size_t VAR_2)
{
 char *VAR_3;


 for (; VAR_0 <= VAR_2; ++VAR_0) {
  if (!(VAR_3 = FUNC_3(VAR_1)))
   FUNC_1(2, "file1 ended early in delete");
  FUNC_0(VAR_3, '<', ((void*)0));
 }
 FUNC_2();
}
