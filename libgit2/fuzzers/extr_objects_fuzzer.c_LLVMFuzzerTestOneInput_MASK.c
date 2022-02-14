
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int git_object_t ;
typedef int git_object ;


 size_t FUNC_0 (int const*) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 scalar_t__ FUNC_1 (int **,char const*,size_t,int const) ;
 int FUNC_2 (int *) ;

int FUNC_3(const uint8_t *VAR_4, size_t VAR_5)
{
 const git_object_t VAR_6[] = {
  VAR_0, VAR_3, VAR_1, VAR_2
 };
 git_object *VAR_7 = ((void*)0);
 size_t VAR_8;






 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6); VAR_8++) {
  if (FUNC_1(&VAR_7, (const char *) VAR_4, VAR_5, VAR_6[VAR_8]) < 0)
   continue;
  FUNC_2(VAR_7);
  VAR_7 = ((void*)0);
 }

 return 0;
}
