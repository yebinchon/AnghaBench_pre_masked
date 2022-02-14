
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* backend; } ;
typedef TYPE_1__ git_refdb ;
struct TYPE_5__ {int (* exists ) (int*,TYPE_2__*,char const*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int*,TYPE_2__*,char const*) ;

int FUNC_2(int *VAR_0, git_refdb *VAR_1, const char *VAR_2)
{
 FUNC_0(VAR_0 && VAR_1 && VAR_1->backend);

 return VAR_1->backend->exists(VAR_0, VAR_1->backend, VAR_2);
}
