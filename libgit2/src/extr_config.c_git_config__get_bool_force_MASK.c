
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
typedef TYPE_1__ git_config_entry ;
typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__**,int const*,char const*,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int*,int ) ;
 int FUNC_3 () ;

int FUNC_4(
 const git_config *VAR_1, const char *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_3;
 git_config_entry *VAR_5;

 FUNC_0(&VAR_5, VAR_1, VAR_2, 0, VAR_0);

 if (VAR_5 && FUNC_2(&VAR_4, VAR_5->value) < 0)
  FUNC_3();

 FUNC_1(VAR_5);
 return VAR_4;
}
