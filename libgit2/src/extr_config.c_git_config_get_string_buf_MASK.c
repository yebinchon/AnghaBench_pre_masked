
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* value; } ;
typedef TYPE_1__ git_config_entry ;
typedef int git_config ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__**,int const*,char const*,int,int ) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(
 git_buf *VAR_1, const git_config *VAR_2, const char *VAR_3)
{
 git_config_entry *VAR_4;
 int VAR_5;
 const char *VAR_6;

 FUNC_2(VAR_1);

 VAR_5 = FUNC_0(&VAR_4, VAR_2, VAR_3, 1, VAR_0);
 VAR_6 = !VAR_5 ? (VAR_4->value ? VAR_4->value : "") : ((void*)0);

 if (VAR_6)
  VAR_5 = FUNC_1(VAR_1, VAR_6);

 FUNC_3(VAR_4);

 return VAR_5;
}
