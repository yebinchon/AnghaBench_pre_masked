
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* backend; } ;
typedef TYPE_1__ git_refdb ;
struct TYPE_5__ {int (* free ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(git_refdb *VAR_0)
{
 if (VAR_0->backend)
  VAR_0->backend->free(VAR_0->backend);
}
