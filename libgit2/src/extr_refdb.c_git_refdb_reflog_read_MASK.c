
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* db; } ;
typedef TYPE_1__ git_reflog ;
struct TYPE_9__ {TYPE_4__* backend; } ;
typedef TYPE_2__ git_refdb ;
struct TYPE_10__ {int (* reflog_read ) (TYPE_1__**,TYPE_4__*,char const*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__**,TYPE_4__*,char const*) ;

int FUNC_3(git_reflog **VAR_0, git_refdb *VAR_1, const char *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_1 && VAR_1->backend);

 if ((VAR_3 = VAR_1->backend->reflog_read(VAR_0, VAR_1->backend, VAR_2)) < 0)
  return VAR_3;

 FUNC_0(VAR_1);
 (*VAR_0)->db = VAR_1;

 return 0;
}
