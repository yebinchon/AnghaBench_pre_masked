
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int,char*) ;
 char* FUNC_1 (int *,size_t*) ;
 size_t FUNC_2 (char*,int,size_t,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(FILE *VAR_1, int VAR_2)
{
 char *VAR_3;
 size_t VAR_4, VAR_5;

 while (VAR_2 != 0 && (VAR_3 = FUNC_1(VAR_1, &VAR_5)) != ((void*)0)) {
  VAR_4 = FUNC_2(VAR_3, sizeof(char), VAR_5, VAR_0);
  if (VAR_4 != VAR_5)
   FUNC_0(1, "stdout");
  VAR_2--;
 }
}
