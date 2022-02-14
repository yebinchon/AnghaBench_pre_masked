
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* message; } ;
typedef TYPE_1__ git_error ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (char*,int,char const*,char*) ;

__attribute__((used)) static void FUNC_3(int VAR_0, const char *VAR_1)
{
 const git_error *VAR_2 = FUNC_1();
 if (!VAR_0)
  return;

 FUNC_2("Error %d %s - %s\n", VAR_0, VAR_1,
   (VAR_2 && VAR_2->message) ? VAR_2->message : "???");

 FUNC_0(1);
}
