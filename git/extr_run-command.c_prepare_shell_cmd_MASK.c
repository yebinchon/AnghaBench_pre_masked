
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv_array {char const** argv; } ;


 int FUNC_0 (char*) ;
 char const* VAR_0 ;
 int FUNC_1 (struct argv_array*,char const*) ;
 int FUNC_2 (struct argv_array*,char*,char const*) ;
 int FUNC_3 (struct argv_array*,char const**) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static const char **FUNC_6(struct argv_array *VAR_1, const char **VAR_2)
{
 if (!VAR_2[0])
  FUNC_0("shell command is empty");

 if (FUNC_4(VAR_2[0], "|&;<>()$`\\\"' \t\n*?[#~=%") != FUNC_5(VAR_2[0])) {

  FUNC_1(VAR_1, VAR_0);



  FUNC_1(VAR_1, "-c");





  if (!VAR_2[1])
   FUNC_1(VAR_1, VAR_2[0]);
  else
   FUNC_2(VAR_1, "%s \"$@\"", VAR_2[0]);
 }

 FUNC_3(VAR_1, VAR_2);
 return VAR_1->argv;
}
