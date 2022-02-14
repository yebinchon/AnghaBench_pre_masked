
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* backend; } ;
typedef TYPE_1__ git_refdb ;
struct TYPE_5__ {int (* has_log ) (TYPE_2__*,char const*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,char const*) ;

int FUNC_2(git_refdb *VAR_0, const char *VAR_1)
{
 FUNC_0(VAR_0 && VAR_1);

 return VAR_0->backend->has_log(VAR_0->backend, VAR_1);
}
