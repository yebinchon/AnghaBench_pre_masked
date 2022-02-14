
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* value; } ;
typedef TYPE_1__ git_config_entry ;
typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__**,int const*,char const*,int,int ) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_1__*) ;

char *FUNC_3(
 const git_config *VAR_1, const char *VAR_2, const char *VAR_3)
{
 git_config_entry *VAR_4;
 char *VAR_5;

 FUNC_0(&VAR_4, VAR_1, VAR_2, 0, VAR_0);
 VAR_5 = (VAR_4 && VAR_4->value) ? FUNC_1(VAR_4->value) : VAR_3 ? FUNC_1(VAR_3) : ((void*)0);
 FUNC_2(VAR_4);

 return VAR_5;
}
