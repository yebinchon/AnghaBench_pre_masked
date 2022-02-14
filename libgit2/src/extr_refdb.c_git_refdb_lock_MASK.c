
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* backend; } ;
typedef TYPE_1__ git_refdb ;
struct TYPE_5__ {int (* lock ) (void**,TYPE_2__*,char const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (void**,TYPE_2__*,char const*) ;

int FUNC_3(void **VAR_1, git_refdb *VAR_2, const char *VAR_3)
{
 FUNC_0(VAR_1 && VAR_2 && VAR_3);

 if (!VAR_2->backend->lock) {
  FUNC_1(VAR_0, "backend does not support locking");
  return -1;
 }

 return VAR_2->backend->lock(VAR_1, VAR_2->backend, VAR_3);
}
