
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_filter {char** name_patterns; scalar_t__ ignore_case; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,int) ;
 int FUNC_2 (char const*,char const*,unsigned int) ;

__attribute__((used)) static int FUNC_3(const struct ref_filter *VAR_2, const char *VAR_3)
{
 const char **VAR_4 = VAR_2->name_patterns;
 int VAR_5 = FUNC_0(VAR_3);
 unsigned VAR_6 = VAR_1;

 if (VAR_2->ignore_case)
  VAR_6 |= VAR_0;

 for (; *VAR_4; VAR_4++) {
  const char *VAR_7 = *VAR_4;
  int VAR_8 = FUNC_0(VAR_7);

  if ((VAR_8 <= VAR_5) &&
      !FUNC_1(VAR_3, VAR_7, VAR_8) &&
      (VAR_3[VAR_8] == '\0' ||
       VAR_3[VAR_8] == '/' ||
       VAR_7[VAR_8-1] == '/'))
   return 1;
  if (!FUNC_2(VAR_7, VAR_3, VAR_6))
   return 1;
 }
 return 0;
}
