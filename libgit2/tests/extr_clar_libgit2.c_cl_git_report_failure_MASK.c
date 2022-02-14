
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* message; } ;
typedef TYPE_1__ git_error ;


 int FUNC_0 (int ,char const*,int,char const*,char*,int) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (char*,int,char*,...) ;

void FUNC_3(
 int VAR_0, int VAR_1, const char *VAR_2, int VAR_3, const char *VAR_4)
{
 char VAR_5[4096];
 const git_error *VAR_6 = FUNC_1();

 if (VAR_1)
  FUNC_2(VAR_5, 4096, "error %d (expected %d) - %s",
   VAR_0, VAR_1, VAR_6 ? VAR_6->message : "<no message>");
 else if (VAR_0 || VAR_6)
  FUNC_2(VAR_5, 4096, "error %d - %s",
   VAR_0, VAR_6 ? VAR_6->message : "<no message>");
 else
  FUNC_2(VAR_5, 4096, "no error, expected non-zero return");

 FUNC_0(0, VAR_2, VAR_3, VAR_4, VAR_5, 1);
}
