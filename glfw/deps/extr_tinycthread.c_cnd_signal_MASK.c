
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mWaitersCount; int * mEvents; int mWaitersCountLock; } ;
typedef TYPE_1__ cnd_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_4(cnd_t *VAR_3)
{
  return FUNC_3(VAR_3) == 0 ? VAR_2 : VAR_1;

}
