
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_wakeref {int count; int mutex; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get ) (struct intel_wakeref*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct intel_wakeref*) ;
 int FUNC_6 (struct intel_wakeref*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct intel_wakeref*) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(struct intel_wakeref *VAR_1)
{






 FUNC_3(&VAR_1->mutex, VAR_0);
 if (!FUNC_2(&VAR_1->count)) {
  int VAR_2;

  FUNC_5(VAR_1);

  VAR_2 = VAR_1->ops->get(VAR_1);
  if (FUNC_9(VAR_2)) {
   FUNC_6(VAR_1);
   FUNC_4(&VAR_1->mutex);
   return VAR_2;
  }

  FUNC_7();
 }
 FUNC_1(&VAR_1->count);
 FUNC_4(&VAR_1->mutex);

 FUNC_0(FUNC_2(&VAR_1->count) <= 0);
 return 0;
}
