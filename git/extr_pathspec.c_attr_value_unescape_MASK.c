
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static char *FUNC_5(const char *VAR_0)
{
 const char *VAR_1;
 char *VAR_2, *VAR_3;

 VAR_3 = FUNC_4(FUNC_3(VAR_0));
 for (VAR_1 = VAR_0, VAR_2 = VAR_3; *VAR_1; VAR_1++, VAR_2++) {
  if (*VAR_1 == '\\') {
   if (!VAR_1[1])
    FUNC_1(FUNC_0("Escape character '\\' not allowed as "
          "last character in attr value"));
   VAR_1++;
  }
  if (FUNC_2(*VAR_1))
   FUNC_1("cannot use '%c' for value matching", *VAR_1);
  *VAR_2 = *VAR_1;
 }
 *VAR_2 = '\0';
 return VAR_3;
}
