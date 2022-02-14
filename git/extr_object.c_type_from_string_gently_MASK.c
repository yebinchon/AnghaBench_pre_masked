
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 int FUNC_0 (char**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const*) ;
 char** VAR_0 ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char*,size_t) ;

int FUNC_5(const char *VAR_1, ssize_t VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_2 < 0)
  VAR_2 = FUNC_3(VAR_1);

 for (VAR_4 = 1; VAR_4 < FUNC_0(VAR_0); VAR_4++)
  if (!FUNC_4(VAR_1, VAR_0[VAR_4], VAR_2) &&
      VAR_0[VAR_4][VAR_2] == '\0')
   return VAR_4;

 if (VAR_3)
  return -1;

 FUNC_2(FUNC_1("invalid object type \"%s\""), VAR_1);
}
