
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule_update_strategy {int type; int command; } ;
struct strbuf {int dummy; } ;
 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,char*,int ) ;
 char const* FUNC_1 (struct strbuf*,int *) ;

const char *FUNC_2(const struct submodule_update_strategy *VAR_1)
{
 struct strbuf VAR_2 = VAR_0;
 switch (VAR_1->type) {
 case 133:
  return "checkout";
 case 131:
  return "merge";
 case 129:
  return "rebase";
 case 130:
  return "none";
 case 128:
  return ((void*)0);
 case 132:
  FUNC_0(&VAR_2, "!%s", VAR_1->command);
  return FUNC_1(&VAR_2, ((void*)0));
 }
 return ((void*)0);
}
