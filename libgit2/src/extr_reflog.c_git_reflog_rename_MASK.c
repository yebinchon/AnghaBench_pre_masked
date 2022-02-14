
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_4__ {TYPE_2__* backend; } ;
typedef TYPE_1__ git_refdb ;
struct TYPE_5__ {int (* reflog_rename ) (TYPE_2__*,char const*,char const*) ;} ;


 int FUNC_0 (TYPE_1__**,int *) ;
 int FUNC_1 (TYPE_2__*,char const*,char const*) ;

int FUNC_2(git_repository *VAR_0, const char *VAR_1, const char *VAR_2)
{
 git_refdb *VAR_3;
 int VAR_4;

 if ((VAR_4 = FUNC_0(&VAR_3, VAR_0)) < 0)
  return -1;

 return VAR_3->backend->reflog_rename(VAR_3->backend, VAR_1, VAR_2);
}
