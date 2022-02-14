
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* value; } ;
typedef TYPE_1__ git_config_entry ;
typedef int git_config ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__**,int const*,char const*,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int const*) ;

int FUNC_4(
 const char **VAR_2, const git_config *VAR_3, const char *VAR_4)
{
 git_config_entry *VAR_5;
 int VAR_6;

 if (!FUNC_3(VAR_3)) {
  FUNC_2(VAR_1, "get_string called on a live config object");
  return -1;
 }

 VAR_6 = FUNC_0(&VAR_5, VAR_3, VAR_4, 1, VAR_0);
 *VAR_2 = !VAR_6 ? (VAR_5->value ? VAR_5->value : "") : ((void*)0);

 FUNC_1(VAR_5);

 return VAR_6;
}
