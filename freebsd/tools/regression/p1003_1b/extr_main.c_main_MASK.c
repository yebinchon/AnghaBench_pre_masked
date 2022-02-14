
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* t; int (* f ) (int,char**) ;scalar_t__ works; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (int,char**) ;
 int FUNC_4 (int,char**) ;
 TYPE_1__* VAR_1 ;
 int FUNC_5 (int,char**) ;

int FUNC_6(int VAR_2, char *VAR_3[])
{
 int VAR_4;

 if (VAR_2 == 2 && FUNC_2(VAR_3[1], "-a") == 0) {

  FUNC_0(VAR_0,
   "-a should but doesn't really work"
   " (my notes say \"because things detach\");\n"
   "meanwhile do these individual tests and look"
   " for a non-zero exit code:\n");
  for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_1); VAR_4++)
   if (VAR_1[VAR_4].works)
    FUNC_0(VAR_0, "p1003_1b %s\n", VAR_1[VAR_4].t);
  return -1;
 }

 if (VAR_2 > 1) {
  for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_1); VAR_4++)
   if (FUNC_2(VAR_1[VAR_4].t, VAR_3[1]) == 0)
    return (*VAR_1[VAR_4].f)(VAR_2 - 1, VAR_3 + 1);
 }

 return FUNC_5(VAR_2, VAR_3);
}
