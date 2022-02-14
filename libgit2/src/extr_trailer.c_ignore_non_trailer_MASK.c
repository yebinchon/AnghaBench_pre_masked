
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 char* FUNC_1 (char const*,char,size_t) ;

__attribute__((used)) static size_t FUNC_2(const char *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = 0, VAR_4 = 0;
 int VAR_5 = 0;
 size_t VAR_6 = VAR_2;

 while (VAR_4 < VAR_6) {
  const char *VAR_7 = FUNC_1(VAR_1 + VAR_4, '\n', VAR_2 - VAR_4);

  if (!VAR_7)
   VAR_7 = VAR_1 + VAR_2;
  else
   VAR_7++;

  if (VAR_1[VAR_4] == VAR_0 || VAR_1[VAR_4] == '\n') {

   if (!VAR_3)
    VAR_3 = VAR_4;

  } else if (FUNC_0(VAR_1 + VAR_4, "Conflicts:\n") == 0) {
   VAR_5 = 1;
   if (!VAR_3)
    VAR_3 = VAR_4;
  } else if (VAR_5 && VAR_1[VAR_4] == '\t') {
   ;
  } else if (VAR_3) {

   VAR_3 = 0;
   VAR_5 = 0;
  }
  VAR_4 = VAR_7 - VAR_1;
 }
 return VAR_3 ? VAR_2 - VAR_3 : VAR_2 - VAR_6;
}
