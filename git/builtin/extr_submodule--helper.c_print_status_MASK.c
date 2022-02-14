
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 unsigned int VAR_0 ;
 char* FUNC_0 (char const*,char*) ;
 char* FUNC_1 (struct object_id const*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_1, char VAR_2, const char *VAR_3,
    const struct object_id *VAR_4, const char *VAR_5)
{
 if (VAR_1 & VAR_0)
  return;

 FUNC_2("%c%s %s", VAR_2, FUNC_1(VAR_4), VAR_5);

 if (VAR_2 == ' ' || VAR_2 == '+') {
  const char *VAR_6 = FUNC_0(VAR_3, FUNC_1(VAR_4));

  if (VAR_6)
   FUNC_2(" (%s)", VAR_6);
 }

 FUNC_2("\n");
}
