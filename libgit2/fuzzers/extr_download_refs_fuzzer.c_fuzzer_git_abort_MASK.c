
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* message; } ;
typedef TYPE_1__ git_error ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*,char const*,char*) ;
 TYPE_1__* FUNC_2 () ;
 int VAR_0 ;

void FUNC_3(const char *VAR_1)
{
 const git_error *VAR_2 = FUNC_2();
 FUNC_1(VAR_0, "unexpected libgit error: %s: %s\n",
  VAR_1, VAR_2 ? VAR_2->message : "<none>");
 FUNC_0();
}
