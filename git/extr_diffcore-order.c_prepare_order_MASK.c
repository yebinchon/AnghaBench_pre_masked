
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (char**,int) ;
 struct strbuf VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const*) ;
 char** VAR_1 ;
 int VAR_2 ;
 void* FUNC_3 (struct strbuf*,int *) ;
 scalar_t__ FUNC_4 (struct strbuf*,char const*,int ) ;
 char* FUNC_5 (char*,int) ;

__attribute__((used)) static void FUNC_6(const char *VAR_3)
{
 int VAR_4, VAR_5;
 struct strbuf VAR_6 = VAR_0;
 void *VAR_7;
 char *VAR_8, *VAR_9;
 ssize_t VAR_10;

 if (VAR_1)
  return;

 VAR_10 = FUNC_4(&VAR_6, VAR_3, 0);
 if (VAR_10 < 0)
  FUNC_2(FUNC_1("failed to read orderfile '%s'"), VAR_3);
 VAR_7 = FUNC_3(&VAR_6, ((void*)0));
 VAR_9 = (char *) VAR_7 + VAR_10;

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  VAR_4 = 0;
  VAR_8 = VAR_7;
  while (VAR_8 < VAR_9) {
   char *VAR_11;
   for (VAR_11 = VAR_8; VAR_11 < VAR_9 && *VAR_11 != '\n'; VAR_11++)
    ;

   if (*VAR_8 == '\n' || *VAR_8 == '#')
    ;
   else if (VAR_5 == 0)
    VAR_4++;
   else {
    if (*VAR_11 == '\n') {
     *VAR_11 = 0;
     VAR_1[VAR_4] = VAR_8;
    } else {
     VAR_1[VAR_4] = FUNC_5(VAR_8, VAR_11 - VAR_8);
    }
    VAR_4++;
   }
   if (VAR_11 < VAR_9)
    VAR_11++;
   VAR_8 = VAR_11;
  }
  if (VAR_5 == 0) {
   VAR_2 = VAR_4;
   FUNC_0(VAR_1, VAR_4);
  }
 }
}
