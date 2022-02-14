
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct args_info {size_t pos; int * argv; scalar_t__ argc; } ;
typedef int git_repository ;
typedef int (* git_command_fn ) (int *,scalar_t__,int *) ;
struct TYPE_2__ {char* message; } ;


 int FUNC_0 (int ,char*,...) ;
 TYPE_1__* FUNC_1 () ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(git_command_fn VAR_1, git_repository *VAR_2, struct args_info VAR_3)
{
 int VAR_4;


 VAR_4 = VAR_1(VAR_2, VAR_3.argc - VAR_3.pos, &VAR_3.argv[VAR_3.pos]);
 if (VAR_4 < 0) {
  if (FUNC_1() == ((void*)0))
   FUNC_0(VAR_0, "Error without message");
  else
   FUNC_0(VAR_0, "Bad news:\n %s\n", FUNC_1()->message);
 }

 return !!VAR_4;
}
