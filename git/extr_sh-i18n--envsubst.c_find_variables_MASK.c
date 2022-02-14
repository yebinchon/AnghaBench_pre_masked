
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0 (const char *VAR_0,
  void (*VAR_1) (const char *VAR_2, size_t VAR_3))
{
  for (; *VAR_0 != '\0';)
    if (*VAR_0++ == '$')
      {
 const char *VAR_4;
 const char *VAR_5;
 unsigned short int VAR_6;
 char VAR_7;

 if (*VAR_0 == '{')
   VAR_0++;

 VAR_4 = VAR_0;
 VAR_7 = *VAR_0;
 if ((VAR_7 >= 'A' && VAR_7 <= 'Z') || (VAR_7 >= 'a' && VAR_7 <= 'z') || VAR_7 == '_')
   {
     do
       VAR_7 = *++VAR_0;
     while ((VAR_7 >= 'A' && VAR_7 <= 'Z') || (VAR_7 >= 'a' && VAR_7 <= 'z')
     || (VAR_7 >= '0' && VAR_7 <= '9') || VAR_7 == '_');
     VAR_5 = VAR_0;

     if (VAR_4[-1] == '{')
       {
  if (*VAR_0 == '}')
    {
      VAR_0++;
      VAR_6 = 1;
    }
  else
    VAR_6 = 0;
       }
     else
       VAR_6 = 1;

     if (VAR_6)
       VAR_1 (VAR_4, VAR_5 - VAR_4);
   }
      }
}
