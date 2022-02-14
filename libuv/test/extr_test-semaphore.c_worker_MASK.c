
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int posted; int mutex; int sem; scalar_t__ delay; } ;
typedef TYPE_1__ worker_config ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(void* VAR_0) {
  worker_config* VAR_1 = VAR_0;

  if (VAR_1->delay)
    FUNC_4(VAR_1->delay);

  FUNC_1(&VAR_1->mutex);
  FUNC_0(VAR_1->posted == 0);
  FUNC_3(&VAR_1->sem);
  VAR_1->posted = 1;
  FUNC_2(&VAR_1->mutex);
}
