
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 char const VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int * FUNC_2 (char*,char*) ;
 size_t FUNC_3 (char*) ;
 int FUNC_4 (char const*,char*,size_t) ;
 int FUNC_5 (char*,char const*,size_t) ;

__attribute__((used)) static size_t FUNC_6(
 const char *VAR_2,
 const char *VAR_3)
{
 char VAR_4[VAR_1 + 1];
 char VAR_5[VAR_1 + 1];
 const char *VAR_6, *VAR_7;
 size_t VAR_8, VAR_9 = 0, VAR_10;

 FUNC_0(VAR_2);

 VAR_10 = (size_t)(FUNC_1(VAR_2) + 1);

 if (VAR_3 == ((void*)0) || VAR_10 == 0)
  return VAR_10;

 for (VAR_7 = VAR_6 = VAR_3; *VAR_7; VAR_6 = VAR_7 + 1) {
  for (VAR_7 = VAR_6; *VAR_7 && *VAR_7 != VAR_0; VAR_7++);
  VAR_8 = VAR_7 - VAR_6;

  if (VAR_8 == 0 || VAR_8 >= sizeof(VAR_4) || FUNC_1(VAR_6) == -1)
   continue;

  FUNC_5(VAR_4, VAR_6, VAR_8);
  VAR_4[VAR_8] = '\0';

  if (FUNC_2(VAR_4, VAR_5) == ((void*)0))
   continue;

  VAR_8 = FUNC_3(VAR_5);
  if (VAR_8 > 0 && VAR_5[VAR_8-1] == '/')
   VAR_4[--VAR_8] = '\0';

  if (!FUNC_4(VAR_2, VAR_5, VAR_8) &&
   (VAR_2[VAR_8] == '/' || !VAR_2[VAR_8]) &&
   VAR_8 > VAR_9)
  {
   VAR_9 = VAR_8;
  }
 }

 return (VAR_9 <= VAR_10 ? VAR_10 : VAR_9);
}
