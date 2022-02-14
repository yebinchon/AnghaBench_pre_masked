
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_config ;
struct TYPE_2__ {char* message; } ;


 scalar_t__ FUNC_0 (int *,char const*,char const*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(git_config *VAR_0, const char *VAR_1, const char *VAR_2)
{
 if (FUNC_0(VAR_0, VAR_1, VAR_2) < 0) {
  FUNC_2("Unable to set configuration: %s\n", FUNC_1()->message);
  return 1;
 }
 return 0;
}
