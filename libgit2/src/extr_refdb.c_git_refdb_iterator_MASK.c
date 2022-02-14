
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* db; } ;
typedef TYPE_1__ git_reference_iterator ;
struct TYPE_9__ {TYPE_4__* backend; } ;
typedef TYPE_2__ git_refdb ;
struct TYPE_10__ {int (* iterator ) (TYPE_1__**,TYPE_4__*,char const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__**,TYPE_4__*,char const*) ;

int FUNC_3(git_reference_iterator **VAR_1, git_refdb *VAR_2, const char *VAR_3)
{
 int VAR_4;

 if (!VAR_2->backend || !VAR_2->backend->iterator) {
  FUNC_1(VAR_0, "this backend doesn't support iterators");
  return -1;
 }

 if ((VAR_4 = VAR_2->backend->iterator(VAR_1, VAR_2->backend, VAR_3)) < 0)
  return VAR_4;

 FUNC_0(VAR_2);
 (*VAR_1)->db = VAR_2;

 return 0;
}
