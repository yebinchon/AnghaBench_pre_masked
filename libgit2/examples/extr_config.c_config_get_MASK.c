
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
typedef TYPE_1__ git_config_entry ;
typedef int git_config ;
struct TYPE_5__ {char* message; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__**,int *,char const*) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(git_config *VAR_1, const char *VAR_2)
{
 git_config_entry *VAR_3;
 int VAR_4;

 if ((VAR_4 = FUNC_0(&VAR_3, VAR_1, VAR_2)) < 0) {
  if (VAR_4 != VAR_0)
   FUNC_2("Unable to get configuration: %s\n", FUNC_1()->message);
  return 1;
 }

 FUNC_3(VAR_3->value);
 return 0;
}
