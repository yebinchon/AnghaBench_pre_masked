
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_4__ {TYPE_2__* backend; } ;
typedef TYPE_1__ git_refdb ;
struct TYPE_5__ {int (* reflog_delete ) (TYPE_2__*,char const*) ;} ;


 int FUNC_0 (TYPE_1__**,int *) ;
 int FUNC_1 (TYPE_2__*,char const*) ;

int FUNC_2(git_repository *VAR_0, const char *VAR_1)
{
 git_refdb *VAR_2;
 int VAR_3;

 if ((VAR_3 = FUNC_0(&VAR_2, VAR_0)) < 0)
  return -1;

 return VAR_2->backend->reflog_delete(VAR_2->backend, VAR_1);
}
