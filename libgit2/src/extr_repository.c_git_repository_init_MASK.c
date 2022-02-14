
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_repository_init_options ;
typedef int git_repository ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int **,char const*,TYPE_1__*) ;

int FUNC_1(
 git_repository **VAR_3, const char *VAR_4, unsigned VAR_5)
{
 git_repository_init_options VAR_6 = VAR_2;

 VAR_6.flags = VAR_1;
 if (VAR_5)
  VAR_6.flags |= VAR_0;

 return FUNC_0(VAR_3, VAR_4, &VAR_6);
}
