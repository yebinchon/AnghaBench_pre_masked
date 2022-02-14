
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t git_object_t ;
struct TYPE_5__ {size_t type; } ;
struct TYPE_6__ {TYPE_1__ cached; } ;
typedef TYPE_2__ git_object ;
struct TYPE_7__ {int (* free ) (void*) ;} ;


 size_t FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (void*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_2 (void*) ;

void FUNC_3(void *VAR_1)
{
 git_object_t VAR_2 = ((git_object *)VAR_1)->cached.type;

 if (VAR_2 < 0 || ((size_t)VAR_2) >= FUNC_0(VAR_0) ||
  !VAR_0[VAR_2].free)
  FUNC_1(VAR_1);
 else
  VAR_0[VAR_2].free(VAR_1);
}
