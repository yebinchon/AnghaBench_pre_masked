
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_wakeref {int work; int mutex; TYPE_1__* ops; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct intel_wakeref*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct intel_wakeref *VAR_1)
{
 FUNC_0(FUNC_4(&VAR_1->work));


 if (VAR_1->ops->flags & VAR_0 ||
     !FUNC_2(&VAR_1->mutex)) {
  FUNC_3(&VAR_1->work);
  return;
 }

 FUNC_1(VAR_1);
}
