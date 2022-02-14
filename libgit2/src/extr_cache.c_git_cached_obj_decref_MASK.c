
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int refcount; } ;
typedef TYPE_1__ git_cached_obj ;




 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;

void FUNC_4(void *VAR_0)
{
 git_cached_obj *VAR_1 = VAR_0;

 if (FUNC_1(&VAR_1->refcount) == 0) {
  switch (VAR_1->flags) {
  case 128:
   FUNC_3(VAR_0);
   break;

  case 129:
   FUNC_2(VAR_0);
   break;

  default:
   FUNC_0(VAR_0);
   break;
  }
 }
}
