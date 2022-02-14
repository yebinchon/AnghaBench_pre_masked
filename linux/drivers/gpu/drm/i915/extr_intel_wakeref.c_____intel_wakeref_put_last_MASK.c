
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_wakeref {int mutex; int wakeref; TYPE_1__* ops; int count; } ;
struct TYPE_2__ {int (* put ) (struct intel_wakeref*) ;} ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct intel_wakeref*) ;
 int FUNC_4 (struct intel_wakeref*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct intel_wakeref *VAR_0)
{
 if (!FUNC_0(&VAR_0->count))
  goto unlock;


 if (FUNC_1(!VAR_0->ops->put(VAR_0))) {
  FUNC_3(VAR_0);
  FUNC_5(&VAR_0->wakeref);
 }

unlock:
 FUNC_2(&VAR_0->mutex);
}
