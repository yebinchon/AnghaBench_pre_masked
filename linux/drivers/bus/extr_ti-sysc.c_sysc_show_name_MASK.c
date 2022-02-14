
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysc {char* name; } ;


 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, struct sysc *VAR_1)
{
 if (!VAR_1->name)
  return 0;

 return FUNC_0(VAR_0, ":%s", VAR_1->name);
}
