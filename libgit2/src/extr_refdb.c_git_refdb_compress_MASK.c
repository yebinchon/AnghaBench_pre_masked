
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* backend; } ;
typedef TYPE_1__ git_refdb ;
struct TYPE_6__ {int (* compress ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(git_refdb *VAR_0)
{
 FUNC_0(VAR_0);

 if (VAR_0->backend->compress)
  return VAR_0->backend->compress(VAR_0->backend);

 return 0;
}
