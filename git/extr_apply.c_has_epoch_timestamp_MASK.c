
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rm_so; } ;
typedef TYPE_1__ regmatch_t ;
typedef int regex_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (int *,char const*,int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (char const*,char*,char const**) ;
 int FUNC_5 (char const*,char**,int) ;
 int FUNC_6 (int ,...) ;
 int * FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(const char *VAR_2)
{






 const char VAR_3[] =
  "^[0-2][0-9]:([0-5][0-9]):00(\\.0+)?"
  " "
  "([-+][0-2][0-9]:?[0-5][0-9])\n";
 const char *VAR_4 = ((void*)0), *VAR_5, *VAR_6;
 static regex_t *VAR_7;
 regmatch_t VAR_8[10];
 int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;

 for (VAR_5 = VAR_2; *VAR_5 != '\n'; VAR_5++) {
  if (*VAR_5 == '\t')
   VAR_4 = VAR_5 + 1;
 }
 if (!VAR_4)
  return 0;





 if (FUNC_4(VAR_4, "1969-12-31 ", &VAR_4))
  VAR_10 = 24;
 else if (FUNC_4(VAR_4, "1970-01-01 ", &VAR_4))
  VAR_10 = 0;
 else
  return 0;

 if (!VAR_7) {
  VAR_7 = FUNC_7(sizeof(*VAR_7));
  if (FUNC_2(VAR_7, VAR_3, VAR_0)) {
   FUNC_6(FUNC_1("Cannot prepare timestamp regexp %s"),
    VAR_3);
   return 0;
  }
 }

 VAR_13 = FUNC_3(VAR_7, VAR_4, FUNC_0(VAR_8), VAR_8, 0);
 if (VAR_13) {
  if (VAR_13 != VAR_1)
   FUNC_6(FUNC_1("regexec returned %d for input: %s"),
    VAR_13, VAR_4);
  return 0;
 }

 VAR_11 = FUNC_5(VAR_4, ((void*)0), 10);
 VAR_12 = FUNC_5(VAR_4 + VAR_8[1].rm_so, ((void*)0), 10);

 VAR_9 = FUNC_5(VAR_4 + VAR_8[3].rm_so + 1, (char **) &VAR_6, 10);
 if (*VAR_6 == ':')
  VAR_9 = VAR_9 * 60 + FUNC_5(VAR_6 + 1, ((void*)0), 10);
 else
  VAR_9 = (VAR_9 / 100) * 60 + (VAR_9 % 100);
 if (VAR_4[VAR_8[3].rm_so] == '-')
  VAR_9 = -VAR_9;

 return VAR_11 * 60 + VAR_12 - VAR_9 == VAR_10 * 60;
}
